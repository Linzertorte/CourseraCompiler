#ifndef COOL_TREE_H
#define COOL_TREE_H
//////////////////////////////////////////////////////////
//
// file: cool-tree.h
//
// This file defines classes for each phylum and constructor
//
//////////////////////////////////////////////////////////


#include "tree.h"
#include "cool-tree.handcode.h"
#include "symtab.h"
#include <map>
#include <vector>
#include <string>
#include <set>
#define FOUND(s,x) s.find(x)!=s.end()
// define simple phylum - Program
typedef class Program_class *Program;

// define simple phylum - Class_
typedef class Class__class *Class_;

// define simple phylum - Feature
typedef class Feature_class *Feature;

// define simple phylum - Formal
typedef class Formal_class *Formal;

// define simple phylum - Expression
typedef class Expression_class *Expression;

// define simple phylum - Case
typedef class Case_class *Case;

// define the class for phylum - LIST
// define list phlyum - Classes
typedef list_node<Class_> Classes_class;
typedef Classes_class *Classes;


// define list phlyum - Features
typedef list_node<Feature> Features_class;
typedef Features_class *Features;


// define list phlyum - Formals
typedef list_node<Formal> Formals_class;
typedef Formals_class *Formals;


// define list phlyum - Expressions
typedef list_node<Expression> Expressions_class;
typedef Expressions_class *Expressions;


// define list phlyum - Cases
typedef list_node<Case> Cases_class;
typedef Cases_class *Cases;


class Program_class;
class Class__class;
class Feature_class;
class Formal_class;
class Expression_class;
class Case_class;
class program_class;
class class__class;
class method_class;
class attr_class;
class formal_class;
class branch_class;
class assign_class;
class static_dispatch_class;
class dispatch_class;
class cond_class;
class loop_class;
class typcase_class;
class block_class;
class let_class;
class plus_class;
class sub_class;
class mul_class;
class divide_class;
class neg_class;
class lt_class;
class eq_class;
class leq_class;
class comp_class;
class int_const_class;
class bool_const_class;
class string_const_class;
class new__class;
class isvoid_class;
class no_expr_class;
class object_class;

class Visitor {
public:

    virtual Symbol visit(Program_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Class__class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Classes_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Feature_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Features_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Formal_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Formals_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Expression_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Expressions_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Case_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Cases_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(program_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(class__class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(method_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(attr_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(formal_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(branch_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(assign_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(static_dispatch_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(dispatch_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(cond_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(loop_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(typcase_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(block_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(let_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(plus_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(sub_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(mul_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(divide_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(neg_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(lt_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(eq_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(leq_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(comp_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(int_const_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(bool_const_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(string_const_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(new__class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(isvoid_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(no_expr_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(object_class * x) {
        return (Symbol) NULL;
    }
};
class IdVisitor;
class TypeVisitor;




// define the class for phylum

class Program_class : public tree_node {
    friend class IdVisitor;
    friend class TypeVisitor;
public:

    tree_node *copy() {
        return copy_Program();
    }
    virtual Program copy_Program() = 0;

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Program_EXTRAS
    Program_EXTRAS
#endif
};

class Class__class : public tree_node {
    friend class IdVisitor;
    friend class TypeVisitor;
public:

    tree_node *copy() {
        return copy_Class_();
    }
    virtual Class_ copy_Class_() = 0;

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }
#ifdef Class__EXTRAS
    Class__EXTRAS
#endif
};

class Feature_class : public tree_node {
    friend class IdVisitor;
    friend class TypeVisitor;
public:

    tree_node *copy() {
        return copy_Feature();
    }
    virtual Feature copy_Feature() = 0;

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }
#ifdef Feature_EXTRAS
    Feature_EXTRAS
#endif
};

class Formal_class : public tree_node {
    friend class IdVisitor;
    friend class TypeVisitor;
public:

    tree_node *copy() {
        return copy_Formal();
    }
    virtual Formal copy_Formal() = 0;

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }
#ifdef Formal_EXTRAS
    Formal_EXTRAS
#endif
};

class Expression_class : public tree_node {
    friend class IdVisitor;
    friend class TypeVisitor;
public:

    tree_node *copy() {
        return copy_Expression();
    }
    virtual Expression copy_Expression() = 0;

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

    virtual bool is_no_expr() {
        return false;
    }
#ifdef Expression_EXTRAS
    Expression_EXTRAS
#endif
};

class Case_class : public tree_node {
    friend class IdVisitor;
    friend class TypeVisitor;
public:

    tree_node *copy() {
        return copy_Case();
    }
    virtual Case copy_Case() = 0;

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Case_EXTRAS
    Case_EXTRAS
#endif
};




// define the class for constructors
// define constructor - program

class program_class : public Program_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Classes classes;
public:

    program_class(Classes a1) {
        classes = a1;
    }
    Program copy_Program();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Program_SHARED_EXTRAS
    Program_SHARED_EXTRAS
#endif
#ifdef program_EXTRAS
    program_EXTRAS
#endif
};


// define constructor - class_

class class__class : public Class__class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Symbol name;
    Symbol parent;
    Features features;
    Symbol filename;
public:

    class__class(Symbol a1, Symbol a2, Features a3, Symbol a4) {
        name = a1;
        parent = a2;
        features = a3;
        filename = a4;
    }
    Class_ copy_Class_();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }
#ifdef Class__SHARED_EXTRAS
    Class__SHARED_EXTRAS
#endif
#ifdef class__EXTRAS
    class__EXTRAS
#endif
};


// define constructor - method

class method_class : public Feature_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Symbol name;
    Formals formals;
    Symbol return_type;
    Expression expr;
public:

    method_class(Symbol a1, Formals a2, Symbol a3, Expression a4) {
        name = a1;
        formals = a2;
        return_type = a3;
        expr = a4;
    }
    Feature copy_Feature();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Feature_SHARED_EXTRAS
    Feature_SHARED_EXTRAS
#endif
#ifdef method_EXTRAS
    method_EXTRAS
#endif
};


// define constructor - attr

class attr_class : public Feature_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Symbol name;
    Symbol type_decl;
    Expression init;
public:

    attr_class(Symbol a1, Symbol a2, Expression a3) {
        name = a1;
        type_decl = a2;
        init = a3;
    }
    Feature copy_Feature();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Feature_SHARED_EXTRAS
    Feature_SHARED_EXTRAS
#endif
#ifdef attr_EXTRAS
    attr_EXTRAS
#endif
};


// define constructor - formal

class formal_class : public Formal_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Symbol name;
    Symbol type_decl;
public:

    formal_class(Symbol a1, Symbol a2) {
        name = a1;
        type_decl = a2;
    }
    Formal copy_Formal();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Formal_SHARED_EXTRAS
    Formal_SHARED_EXTRAS
#endif
#ifdef formal_EXTRAS
    formal_EXTRAS
#endif
};


// define constructor - branch

class branch_class : public Case_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Symbol name;
    Symbol type_decl;
    Expression expr;
public:

    branch_class(Symbol a1, Symbol a2, Expression a3) {
        name = a1;
        type_decl = a2;
        expr = a3;
    }
    Case copy_Case();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Case_SHARED_EXTRAS
    Case_SHARED_EXTRAS
#endif
#ifdef branch_EXTRAS
    branch_EXTRAS
#endif
};


// define constructor - assign

class assign_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Symbol name;
    Expression expr;
public:

    assign_class(Symbol a1, Expression a2) {
        name = a1;
        expr = a2;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }


#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef assign_EXTRAS
    assign_EXTRAS
#endif
};


// define constructor - static_dispatch

class static_dispatch_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression expr;
    Symbol type_name;
    Symbol name;
    Expressions actual;
public:

    static_dispatch_class(Expression a1, Symbol a2, Symbol a3, Expressions a4) {
        expr = a1;
        type_name = a2;
        name = a3;
        actual = a4;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef static_dispatch_EXTRAS
    static_dispatch_EXTRAS
#endif
};


// define constructor - dispatch

class dispatch_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression expr;
    Symbol name;
    Expressions actual;
public:

    dispatch_class(Expression a1, Symbol a2, Expressions a3) {
        expr = a1;
        name = a2;
        actual = a3;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef dispatch_EXTRAS
    dispatch_EXTRAS
#endif
};


// define constructor - cond

class cond_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression pred;
    Expression then_exp;
    Expression else_exp;
public:

    cond_class(Expression a1, Expression a2, Expression a3) {
        pred = a1;
        then_exp = a2;
        else_exp = a3;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }
#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef cond_EXTRAS
    cond_EXTRAS
#endif
};


// define constructor - loop

class loop_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression pred;
    Expression body;
public:

    loop_class(Expression a1, Expression a2) {
        pred = a1;
        body = a2;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef loop_EXTRAS
    loop_EXTRAS
#endif
};


// define constructor - typcase

class typcase_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression expr;
    Cases cases;
public:

    typcase_class(Expression a1, Cases a2) {
        expr = a1;
        cases = a2;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef typcase_EXTRAS
    typcase_EXTRAS
#endif
};


// define constructor - block

class block_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expressions body;
public:

    block_class(Expressions a1) {
        body = a1;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef block_EXTRAS
    block_EXTRAS
#endif
};


// define constructor - let

class let_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Symbol identifier;
    Symbol type_decl;
    Expression init;
    Expression body;
public:

    let_class(Symbol a1, Symbol a2, Expression a3, Expression a4) {
        identifier = a1;
        type_decl = a2;
        init = a3;
        body = a4;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef let_EXTRAS
    let_EXTRAS
#endif
};


// define constructor - plus

class plus_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression e1;
    Expression e2;
public:

    plus_class(Expression a1, Expression a2) {
        e1 = a1;
        e2 = a2;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef plus_EXTRAS
    plus_EXTRAS
#endif
};


// define constructor - sub

class sub_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression e1;
    Expression e2;
public:

    sub_class(Expression a1, Expression a2) {
        e1 = a1;
        e2 = a2;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }
#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef sub_EXTRAS
    sub_EXTRAS
#endif
};


// define constructor - mul

class mul_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression e1;
    Expression e2;
public:

    mul_class(Expression a1, Expression a2) {
        e1 = a1;
        e2 = a2;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef mul_EXTRAS
    mul_EXTRAS
#endif
};


// define constructor - divide

class divide_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression e1;
    Expression e2;
public:

    divide_class(Expression a1, Expression a2) {
        e1 = a1;
        e2 = a2;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef divide_EXTRAS
    divide_EXTRAS
#endif
};


// define constructor - neg

class neg_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression e1;
public:

    neg_class(Expression a1) {
        e1 = a1;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef neg_EXTRAS
    neg_EXTRAS
#endif
};


// define constructor - lt

class lt_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression e1;
    Expression e2;
public:

    lt_class(Expression a1, Expression a2) {
        e1 = a1;
        e2 = a2;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef lt_EXTRAS
    lt_EXTRAS
#endif
};


// define constructor - eq

class eq_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression e1;
    Expression e2;
public:

    eq_class(Expression a1, Expression a2) {
        e1 = a1;
        e2 = a2;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }



#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef eq_EXTRAS
    eq_EXTRAS
#endif
};


// define constructor - leq

class leq_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression e1;
    Expression e2;
public:

    leq_class(Expression a1, Expression a2) {
        e1 = a1;
        e2 = a2;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef leq_EXTRAS
    leq_EXTRAS
#endif
};


// define constructor - comp

class comp_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression e1;
public:

    comp_class(Expression a1) {
        e1 = a1;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef comp_EXTRAS
    comp_EXTRAS
#endif
};


// define constructor - int_const

class int_const_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Symbol token;
public:

    int_const_class(Symbol a1) {
        token = a1;

    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }


#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef int_const_EXTRAS
    int_const_EXTRAS
#endif
};


// define constructor - bool_const

class bool_const_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Boolean val;
public:

    bool_const_class(Boolean a1) {
        val = a1;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }
#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bool_const_EXTRAS
    bool_const_EXTRAS
#endif
};


// define constructor - string_const

class string_const_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Symbol token;
public:

    string_const_class(Symbol a1) {
        token = a1;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }
#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef string_const_EXTRAS
    string_const_EXTRAS
#endif
};


// define constructor - new_

class new__class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Symbol type_name;
public:

    new__class(Symbol a1) {
        type_name = a1;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }
#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef new__EXTRAS
    new__EXTRAS
#endif
};


// define constructor - isvoid

class isvoid_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Expression e1;
public:

    isvoid_class(Expression a1) {
        e1 = a1;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }
#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef isvoid_EXTRAS
    isvoid_EXTRAS
#endif
};


// define constructor - no_expr

class no_expr_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
public:

    no_expr_class() {
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

    virtual bool is_no_expr() {
        return true;
    }
#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef no_expr_EXTRAS
    no_expr_EXTRAS
#endif
};


// define constructor - object

class object_class : public Expression_class {
    friend class IdVisitor;
    friend class TypeVisitor;
protected:
    Symbol name;
public:

    object_class(Symbol a1) {
        name = a1;
    }
    Expression copy_Expression();
    void dump(ostream& stream, int n);

    virtual Symbol accept(Visitor *v) {
        return v->visit(this);
    }

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef object_EXTRAS
    object_EXTRAS
#endif
};


// define the prototypes of the interface
Classes nil_Classes();
Classes single_Classes(Class_);
Classes append_Classes(Classes, Classes);
Features nil_Features();
Features single_Features(Feature);
Features append_Features(Features, Features);
Formals nil_Formals();
Formals single_Formals(Formal);
Formals append_Formals(Formals, Formals);
Expressions nil_Expressions();
Expressions single_Expressions(Expression);
Expressions append_Expressions(Expressions, Expressions);
Cases nil_Cases();
Cases single_Cases(Case);
Cases append_Cases(Cases, Cases);
Program program(Classes);
Class_ class_(Symbol, Symbol, Features, Symbol);
Feature method(Symbol, Formals, Symbol, Expression);
Feature attr(Symbol, Symbol, Expression);
Formal formal(Symbol, Symbol);
Case branch(Symbol, Symbol, Expression);
Expression assign(Symbol, Expression);
Expression static_dispatch(Expression, Symbol, Symbol, Expressions);
Expression dispatch(Expression, Symbol, Expressions);
Expression cond(Expression, Expression, Expression);
Expression loop(Expression, Expression);
Expression typcase(Expression, Cases);
Expression block(Expressions);
Expression let(Symbol, Symbol, Expression, Expression);
Expression plus(Expression, Expression);
Expression sub(Expression, Expression);
Expression mul(Expression, Expression);
Expression divide(Expression, Expression);
Expression neg(Expression);
Expression lt(Expression, Expression);
Expression eq(Expression, Expression);
Expression leq(Expression, Expression);
Expression comp(Expression);
Expression int_const(Symbol);
Expression bool_const(Boolean);
Expression string_const(Symbol);
Expression new_(Symbol);
Expression isvoid(Expression);
Expression no_expr();
Expression object(Symbol);

class InheritanceGraph {
public:
    std::map<Symbol, Symbol> parent;
    Symbol lub(Symbol, Symbol);
    bool is_sub(Symbol, Symbol ,Symbol);
    bool add_inheritance(Symbol, Symbol);
    bool check_main_class();
    bool is_well_formed();
    bool attached(Symbol);
    bool has_a(Symbol);
};

class Report {
public:
    static void panic(std::string msg) {
        cout << "filename:line" << endl;
        cout << "Compilation halted due to static semantic errors." << endl;
        exit(1);
    }
};

class MethodSignature {
public:
    Symbol return_type;
    std::vector<Symbol> types;

    void set_return_type(Symbol type) {
        return_type = type;
    }

    void add_type(Symbol type) {
        types.push_back(type);
    }

    bool equals(const MethodSignature &m) {
        if (m.types.size() != types.size() || m.return_type != return_type)
            return false;
        for (size_t i = 0; i < m.types.size(); i++) {
            if (m.types[i] != types[i]) return false;
        }
        return true;

    }
};
typedef std::map<Symbol, Symbol> ClassScope;
static Symbol Object = idtable.add_string("Object");

class ClassScopes {
private:
    bool inherited;
    std::set<Symbol> visited;
    InheritanceGraph *graph;
public:
    std::map<Symbol, ClassScope> clx;

    ClassScopes() : inherited(false) {
    }

    void add_scope(Symbol c, ClassScope s) {
        clx[c] = s;
    }

    void get_parent_attr(Symbol c) {
        if (visited.find(c) != visited.end()) return;
        Symbol p = graph->parent[c];
        get_parent_attr(p);

        for (ClassScope::iterator it = clx[p].begin(); it != clx[p].end(); it++) {
            //should check panic here
            if (clx[c].find(it->first) != clx[c].end()) Report::panic("multiple");
            clx[c][it->first] = it->second;
        }

        visited.insert(c);
    }

    void inherits(InheritanceGraph *graph) {
        if (inherited) return;
        this->graph = graph;
        visited.insert(Object);
        std::map<Symbol, ClassScope>::iterator it;
        for (it = clx.begin(); it != clx.end(); it++) {
            get_parent_attr(it->first);
        }
    }

    void dump() {
        for (std::map<Symbol, ClassScope>::iterator it = clx.begin(); it != clx.end(); it++) {
            cout << it->first << endl;
            cout << "-----------------------" << endl;
            int begin = 1;
            for (ClassScope::iterator j = it->second.begin(); j != it->second.end(); j++) {
                if (begin) begin = 0;
                else cout << ",";
                cout << j->first << ":" << j->second;
            }
            cout << endl;
        }
    }
};


typedef std::map<Symbol, MethodSignature> ClassMethods;

class M_Env {
private:
    bool inherited;
    std::set<Symbol> visited;

public:

    InheritanceGraph *graph;
    std::map<Symbol, ClassMethods> clx_m;

    MethodSignature get(Symbol c, Symbol id) {
        if (clx_m[c].find(id) == clx_m[c].end()) Report::panic("No this method");
        return clx_m[c][id];
    }

    void add_methods(Symbol c, ClassMethods m) {
        clx_m[c] = m;
    }

    void get_parent_methods(Symbol c) {
        if (visited.find(c) != visited.end()) return;
        Symbol p = graph->parent[c];
        get_parent_methods(p);

        for (ClassMethods::iterator it = clx_m[p].begin(); it != clx_m[p].end(); it++) {
            if (clx_m[c].find(it->first) != clx_m[c].end()) {
                if (!clx_m[p][it->first].equals(clx_m[c][it->first]))
                    Report::panic("illegal method override");
                continue;
            }
            clx_m[c][it->first] = it->second;
        }

        visited.insert(c);
    }

    void inherits(InheritanceGraph *graph) {
        if (inherited) return;
        this->graph = graph;
        visited.insert(Object);
        std::map<Symbol, ClassMethods>::iterator it;
        for (it = clx_m.begin(); it != clx_m.end(); it++) {
            get_parent_methods(it->first);
        }
    }

    void dump() {
        for (std::map<Symbol, ClassMethods>::iterator it = clx_m.begin(); it != clx_m.end(); it++) {
            cout << it->first << endl;
            cout << "-----------------------" << endl;
            int begin = 1;
            for (ClassMethods::iterator j = it->second.begin(); j != it->second.end(); j++) {
                if (begin) begin = 0;
                else cout << ",";
                cout << j->first << ":";
                for (size_t i = 0; i < j->second.types.size(); i++) {
                    cout << j->second.types[i] << ",";
                }
                cout << "  ";
            }
            cout << endl;
        }
    }

};

class O_Env {
public:
    std::vector<ClassScope> tbl;

    void enter_scope() {
        tbl.push_back(std::map<Symbol, Symbol>());
    }

    void exit_scope() {
        tbl.pop_back();
    }

    void init(ClassScope s) {
        tbl.clear();
        tbl.push_back(s);
    }

    Symbol get(Symbol id) {
        for (int i = tbl.size() - 1; i >= 0; i--) {
            if (tbl[i].find(id) != tbl[i].end()) {
              
                return tbl[i][id];
            }
        }
        return (Symbol)NULL;
    }

    void addid(Symbol id, Symbol type) {
        if (tbl.back().find(id) != tbl.back().end()) Report::panic("redefined id in scope");
        tbl.back()[id] = type;
    }

    void dump() {
        for (size_t i = 0; i < tbl.size(); i++) {
            cout << i << endl;
            cout << "-----------------------" << endl;
            int begin = 1;
            for (ClassScope::iterator j = tbl[i].begin(); j != tbl[i].end(); j++) {
                if (begin) begin = 0;
                else cout << ",";
                cout << j->first << ":" << j->second;
            }
            cout << endl;
        }
    }
};

class IdVisitor : public Visitor {
public:
    std::map<Symbol, MethodSignature> methods;
    std::map<Symbol, Symbol> attrs;
    Symbol name, parent;
    Symbol cur_method;

    void clear() {
        attrs.clear();
        methods.clear();
    }

    virtual Symbol visit(Program_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Class__class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Classes_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Feature_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Features_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Formal_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Formals_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Expression_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Expressions_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Case_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Cases_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(program_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(class__class * x) {
        name = x->name;
        parent = x->parent;
        for (int i = x->features->first(); x->features->more(i); i = x->features->next(i)) {
            x->features->nth(i)->accept(this);
        }
        return (Symbol) NULL;
    }

    virtual Symbol visit(method_class * x) {
        if (FOUND(methods, x->name)) Report::panic("method redefined in same class");
        cur_method = x->name;
        methods[cur_method] = MethodSignature();
        methods[cur_method].set_return_type(x->return_type);
        for (int i = x->formals->first(); x->formals->more(i); i = x->formals->next(i)) {
            x->formals->nth(i)->accept(this);
        }
        return (Symbol) NULL;
    }

    virtual Symbol visit(attr_class * x) {
        if (x->name == idtable.add_string("self"))
            Report::panic("attr named self");
        if (FOUND(attrs, x->name)) {
            Report::panic("redefined attr in same class");
        }
        attrs[x->name] = x->type_decl;
        return (Symbol) NULL;
    }

    virtual Symbol visit(formal_class * x) {
        methods[cur_method].add_type(x->type_decl);
        return (Symbol) NULL;
    }

    virtual Symbol visit(branch_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(assign_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(static_dispatch_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(dispatch_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(cond_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(loop_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(typcase_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(block_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(let_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(plus_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(sub_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(mul_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(divide_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(neg_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(lt_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(eq_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(leq_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(comp_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(int_const_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(bool_const_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(string_const_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(new__class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(isvoid_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(no_expr_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(object_class * x) {
        return (Symbol) NULL;
    }
};

class TypeVisitor : public Visitor {
public:
    M_Env *M;
    O_Env *O;
    InheritanceGraph *graph;
    ClassScopes *clx;
    Symbol C;
    Symbol cases_lub;

    void init(ClassScopes *_clx, M_Env *_M, InheritanceGraph *_graph) {
        clx = _clx;
        M = _M;
        graph = _graph;
    }

    virtual Symbol visit(Program_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Class__class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Classes_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Feature_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Features_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Formal_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Formals_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Expression_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Expressions_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Case_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(Cases_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(program_class * x) {
        return (Symbol) NULL;
    }

    virtual Symbol visit(class__class * x) {
        O = new O_Env();
        O->init(clx->clx[x->name]);
        C = x->name;
        for (int i = x->features->first(); x->features->more(i); i = x->features->next(i)) {
            x->features->nth(i)->accept(this);
        }
        delete O;
        return (Symbol) NULL;
    }

    virtual Symbol visit(method_class * x) {
        O->enter_scope();
        for(int i = x->formals->first(); x->formals->more(i); i=x->formals->next(i)){
            x->formals->nth(i)->accept(this);
        }
        Symbol t = x->expr->accept(this);
        if(!graph->is_sub(t,x->return_type, C)) Report::panic("method return type not conform");
        O->exit_scope();
        return (Symbol) NULL;
    }

    virtual Symbol visit(attr_class * x) {
        Symbol t0 = O->get(x->name);
        if (!x->init->is_no_expr()) {
           // cout<<"init"<<x->name<<endl;
            Symbol t1 = x->init->accept(this);
            if (!graph->is_sub(t1, t0, C)) Report::panic("bad attr init");
        }
        return (Symbol) NULL;
    }

    virtual Symbol visit(formal_class * x) {
        Symbol self = idtable.add_string("self");
        if(x->name == self) Report::panic("self as informal parameter");
        Symbol SELF_TYPE = idtable.add_string("SELF_TYPE");
        if(x->type_decl == SELF_TYPE) Report::panic("SELF_TYPE in parameters");
        O->addid(x->name, x->type_decl);
        return (Symbol) NULL;
    }

    virtual Symbol visit(branch_class * x) {
        
        O->addid(x->name, x->type_decl);
        Symbol t = x->expr->accept(this);
        if(!cases_lub) cases_lub = t;
        else cases_lub = graph->lub(cases_lub, t);
        return x->type_decl;
    }

    virtual Symbol visit(assign_class * x) {
        Symbol SELF_TYPE = idtable.add_string("SELF_TYPE");
        Symbol self = idtable.add_string("self");
        if(x->name == self) Report::panic("assign to self");
        Symbol t = O->get(x->name);
        Symbol t1 = x->expr->accept(this);
        if(t1 == SELF_TYPE) Report::panic("assign self");
        if (!graph->is_sub(t1, t, C)) Report::panic("assign fail");
        x->set_type(t1);
        return t;
    }

    virtual Symbol visit(static_dispatch_class * x) {
        Symbol SELF_TYPE = idtable.add_string("SELF_TYPE");
        Symbol t0 = x->expr->accept(this);
        Symbol t = x->type_name;
        if(!graph->is_sub(t0, t, C)) Report::panic("Illegal static dispatch");
        MethodSignature m = M->get(t, x->name);
        int i;
        size_t j=0;
        for(i=x->actual->first();\
                j<m.types.size() && x->actual->more(i); j++,i=x->actual->next(i)){
            if(!graph->is_sub(x->actual->nth(i)->accept(this),m.types[j],C)){
                Report::panic("dispatch fail");
            }
        }
        if(x->actual->more(i) || j<m.types.size()) Report::panic("dispatch fail");
        Symbol tn1 = m.return_type;
        if(tn1 == SELF_TYPE) tn1 = t0;
        x->set_type(tn1);
        return tn1;
        return (Symbol) NULL;
    }

    virtual Symbol visit(dispatch_class * x) {
        //expr name actual
        Symbol SELF_TYPE = idtable.add_string("SELF_TYPE");
        Symbol t0;
        if(x->expr->is_no_expr()) t0 = C;
        else t0 = x->expr->accept(this);
        if(t0 == SELF_TYPE) t0 = C;
        MethodSignature m = M->get(t0, x->name);
        int i;
        size_t j=0;
        for(i=x->actual->first();\
                j<m.types.size() && x->actual->more(i); j++,i=x->actual->next(i)){
            if(!graph->is_sub(x->actual->nth(i)->accept(this),m.types[j],C)){
                Report::panic("dispatch fail");
            }
        }
        if(x->actual->more(i) || j<m.types.size()) Report::panic("dispatch fail");
        Symbol tn1 = m.return_type;
        if(tn1 == SELF_TYPE && t0 != C) tn1 = t0;
        //cout<<"dispatch "<<tn1<<endl;
        x->set_type(tn1);
        return tn1;
    }

    virtual Symbol visit(cond_class * x) {
       
        Symbol t1 = x->pred->accept(this);
        Symbol t2 = x->then_exp->accept(this);
        Symbol t3 = x->else_exp->accept(this);
        if (t1 != idtable.add_string("Bool")) Report::panic("if pred");
        Symbol t = graph->lub(t2, t3);
        x->set_type(t);
        return t;
    }

    virtual Symbol visit(loop_class * x) {
        Symbol t1 = x->pred->accept(this);
        Symbol t2 = x->body->accept(this);
        if(t1!= idtable.add_string("Bool")) Report::panic("loop pred");
        x->set_type(Object);
        return Object;
    }

    virtual Symbol visit(typcase_class * x) {
       
        cases_lub = NULL;
        Symbol t;
        std::set<Symbol> cases_type;
        Symbol t0 = x->expr->accept(this);
        for(int i=x->cases->first(); x->cases->more(i); i=x->cases->next(i)){
            O->enter_scope();
            t = x->cases->nth(i)->accept(this);
            O->exit_scope();
            if(cases_type.find(t)!=cases_type.end()) Report::panic("identical cases");
            cases_type.insert(t);
        }
        x->set_type(cases_lub);
        return cases_lub;
    }

    virtual Symbol visit(block_class * x) {
        Symbol t;
        for (int i = x->body->first(); x->body->more(i); i = x->body->next(i)) {
            t = x->body->nth(i)->accept(this);
        }
        x->set_type(t);
        return t;
    }

    virtual Symbol visit(let_class * x) {
        /*
        Symbol identifier;
        Symbol type_decl;
        Expression init;
        Expression body;*/
        Symbol self = idtable.add_string("self");
        if(x->identifier == self) Report::panic("let self binding");
        Symbol SELF_TYPE = idtable.add_string("SELF_TYPE");
        Symbol t0 = x->type_decl;
        Symbol t1;
        if(!x->init->is_no_expr()){
            t1 = x->init->accept(this);
            if(!graph->is_sub(t1,t0,C)) Report::panic("let init");
        }
        O->enter_scope();
        O->addid(x->identifier, t0);
        Symbol t2 = x->body->accept(this);
        O->exit_scope();
        x->set_type(t2);
        return t2;
    }

    virtual Symbol visit(plus_class * x) {
        Symbol Int = idtable.add_string("Int");
        Symbol t1 = x->e1->accept(this);
        Symbol t2 = x->e2->accept(this);
        if(t1 != Int || t2 != Int) Report::panic("plus failed");
        x->set_type(Int);
        return Int;
    }

    virtual Symbol visit(sub_class * x) {
        Symbol Int = idtable.add_string("Int");
        Symbol t1 = x->e1->accept(this);
        Symbol t2 = x->e2->accept(this);
        if(t1 != Int || t2 != Int) Report::panic("sub failed");
        x->set_type(Int);
        return Int;
    }

    virtual Symbol visit(mul_class * x) {
        Symbol Int = idtable.add_string("Int");
        Symbol t1 = x->e1->accept(this);
        Symbol t2 = x->e2->accept(this);
        if(t1 != Int || t2 != Int) Report::panic("mul failed");
        x->set_type(Int);
        return Int;
    }

    virtual Symbol visit(divide_class * x) {
        Symbol Int = idtable.add_string("Int");
        Symbol t1 = x->e1->accept(this);
        Symbol t2 = x->e2->accept(this);
        if(t1 != Int || t2 != Int) Report::panic("divide failed");
        x->set_type(Int);
        return Int;
    }

    virtual Symbol visit(neg_class * x) {
        Symbol Int = idtable.add_string("Int");
        Symbol t1 = x->e1->accept(this);
        if(t1 != Int) Report::panic("neg failed");
        x->set_type(Int);
        return Int;
    }

    virtual Symbol visit(lt_class * x) {
        Symbol Bool = idtable.add_string("Bool");
        Symbol Int = idtable.add_string("Int");
        Symbol t1 = x->e1->accept(this);
        Symbol t2 = x->e2->accept(this);
        if(t1 != Int || t2 != Int) Report::panic("lt failed");
        x->set_type(Bool);
        return Bool;
    }

    virtual Symbol visit(eq_class * x) {
        Symbol t1 = x->e1->accept(this);
        Symbol t2 = x->e2->accept(this);
        Symbol Int = idtable.add_string("Int");
        Symbol Bool = idtable.add_string("Bool");
        Symbol String = idtable.add_string("String");
        if(t1!=t2 && (t1==Int || t1==Bool || t1==String || t2==Int || t2==Bool || t2==String))
            Report::panic("Eq failed");
        x->set_type(Bool);
        return Bool;
    }

    virtual Symbol visit(leq_class * x) {
        Symbol Bool = idtable.add_string("Bool");
        Symbol Int = idtable.add_string("Int");
        Symbol t1 = x->e1->accept(this);
        Symbol t2 = x->e2->accept(this);
        if(t1 != Int || t2 != Int) Report::panic("lt failed");
        x->set_type(Bool);
        return Bool;
    }

    virtual Symbol visit(comp_class * x) {
        Symbol Bool = idtable.add_string("Bool");
        Symbol t1 = x->e1->accept(this);
        if(t1 != Bool) Report::panic("comp failed");
        x->set_type(Bool);
        return Bool;
    }

    virtual Symbol visit(int_const_class * x) {
        Symbol t = idtable.add_string("Int");
        x->set_type(t);
        return t;
    }

    virtual Symbol visit(bool_const_class * x) {
        Symbol t = idtable.add_string("Bool");
        x->set_type(t);
        return t;
    }

    virtual Symbol visit(string_const_class * x) {
        Symbol t = idtable.add_string("String");
        x->set_type(t);
        return t;
    }

    virtual Symbol visit(new__class * x) {
        Symbol t = x->type_name;
        x->set_type(t);
        return t;
    }

    virtual Symbol visit(isvoid_class * x) {
        Symbol t1 = x->e1->accept(this);
        Symbol Bool = idtable.add_string("Bool");
        x->set_type(Bool);
        return Bool;
    }

    virtual Symbol visit(no_expr_class * x) {
        return (Symbol) NULL;
    }
    virtual Symbol visit(object_class * x) {
        Symbol self = idtable.add_string("self");
        Symbol SELF_TYPE = idtable.add_string("SELF_TYPE");
        if(x->name == self) {
            x->set_type(SELF_TYPE);
            return SELF_TYPE;
        }
        Symbol t = O->get(x->name);
        if (t == (Symbol)NULL) {
            Report::panic("undefined id");
        }
        x->set_type(t);
        return t;
    }
};

#endif
