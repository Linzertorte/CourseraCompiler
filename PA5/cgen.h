#include <assert.h>
#include <stdio.h>
#include "emit.h"
#include "cool-tree.h"
#include "symtab.h"
#include <map>
#include <vector>
#include <utility>

enum Basicness     {Basic, NotBasic};
#define TRUE 1
#define FALSE 0

class CgenClassTable;
typedef CgenClassTable *CgenClassTableP;

class CgenNode;
typedef CgenNode *CgenNodeP;

class MethodTable {
public:
    std::map<Symbol, std::vector<std::pair<Symbol,Symbol> > > tbl;
    void inherit_methods_from_parent(Symbol cls, Symbol parent){
        if(!parent) tbl[cls] = std::vector<std::pair<Symbol,Symbol> >();
        else tbl[cls] = tbl[parent];
    }
    void add_method(Symbol cls, Symbol m){
        for(size_t i = 0; i < tbl[cls].size(); i++){
            if(tbl[cls][i].second == m){
                //override a method
                tbl[cls][i] = std::make_pair(cls,m);
                return;
            }
        }
        tbl[cls].push_back(std::make_pair(cls,m));
    }
    
    //return the index of a method in a class, useful when compute the offset
    // if method not found, return -1
    int index_of(Symbol cls, Symbol m){
        for(size_t i = 0; i < tbl[cls].size(); i++){
            if(tbl[cls][i].second == m){
                return i;
            }
        }
        return -1;//not found
    }
    void code_disp_table(ostream& str){
        std::map<Symbol, std::vector<std::pair<Symbol,Symbol> > >::iterator i;
        for(i = tbl.begin(); i!=tbl.end(); i++){
            str<<i->first<<"_dispTab"<<LABEL;
            for(size_t j = 0;j < (i->second).size(); j++)
                str<<WORD<<(i->second)[j].first<<"."<<(i->second)[j].second<<endl;
        }
    }
};
class AttrTable{
public:
    std::map<Symbol, std::vector<Symbol> > tbl;
    void inherit_attrs_from_parent(Symbol cls, Symbol parent){
        if(!parent) tbl[cls] = std::vector<Symbol>();
        else tbl[cls] = tbl[parent];
    }
    void add_attr(Symbol cls, Symbol attr){
        tbl[cls].push_back(attr);
    }
    int index_of(Symbol cls, Symbol attr){
        for(size_t i = 0; i < tbl[cls].size(); i++){
            if(tbl[cls][i] == attr){
                return i;
            }
        }
        return -1;
    }
    void dump(){
        std::map<Symbol, std::vector<Symbol> >::iterator i;
        for(i = tbl.begin(); i!=tbl.end(); i++){
            cout<<i->first<<endl<<"-------------"<<endl;
            for(size_t j = 0;j < (i->second).size(); j++)
                cout<<(i->second)[j]<<endl;
        }
    }
};
class ClassTag{
public:
    std::vector<Symbol> tbl;
    ClassTag(){
        tbl.push_back(idtable.add_string("String"));
        tbl.push_back(idtable.add_string("Int"));
        tbl.push_back(idtable.add_string("Bool"));
    }
    void add_tag(Symbol cls){
        if(cls == idtable.add_string("String") \
                || cls == idtable.add_string("Int") \
                || cls == idtable.add_string("Bool"))
            return;
        tbl.push_back(cls);
    }
    int index_of(Symbol cls){
        for(size_t i=0 ;i < tbl.size() ;i++)
                if(tbl[i] == cls) return i;
        return -1;
    }
    int class_to_tag(Symbol cls){
        return index_of(cls);
    }
    Symbol tag_to_class(int i){
        return tbl[i];
    }
};
class CgenClassTable : public SymbolTable<Symbol,CgenNode> {
private:
   List<CgenNode> *nds;
   ostream& str;
   int stringclasstag;
   int intclasstag;
   int boolclasstag;


// The following methods emit code for
// constants and global declarations.

   void code_global_data();
   void code_global_text();
   void code_bools(int);
   void code_select_gc();
   void code_constants();
   void code_disp_table();
   void code_class_name_table();
   void code_prot_obj();

// The following creates an inheritance graph from
// a list of classes.  The graph is implemented as
// a tree of `CgenNode', and class names are placed
// in the base class symbol table.

   void install_basic_classes();
   void install_class(CgenNodeP nd);
   void install_classes(Classes cs);
   void build_inheritance_tree();
   void set_relations(CgenNodeP nd);
public:
   CgenClassTable(Classes, ostream& str);
   void code();
   CgenNodeP root();
   MethodTable method_table;
   AttrTable attr_table;
   ClassTag class_tag;
   void dfs(CgenNodeP root);
};


class CgenNode : public class__class {
private: 
   CgenNodeP parentnd;                        // Parent of class
   List<CgenNode> *children;                  // Children of class
   Basicness basic_status;                    // `Basic' if class is basic
                                              // `NotBasic' otherwise

public:
   CgenNode(Class_ c,
            Basicness bstatus,
            CgenClassTableP class_table);

   void add_child(CgenNodeP child);
   List<CgenNode> *get_children() { return children; }
   void set_parentnd(CgenNodeP p);
   CgenNodeP get_parentnd() { return parentnd; }
   int basic() { return (basic_status == Basic); }
};

class BoolConst 
{
 private: 
  int val;
 public:
  BoolConst(int);
  void code_def(ostream&, int boolclasstag);
  void code_ref(ostream&) const;
};

