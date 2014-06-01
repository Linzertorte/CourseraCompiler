/*
 *  The scanner definition for COOL.
 */

/*
 *  Stuff enclosed in %{ %} in the first section is copied verbatim to the
 *  output, so headers and global definitions are placed here to be visible
 * to the code in the file.  Don't remove anything that was here initially
 */
%{
#include <cool-parse.h>
#include <stringtab.h>
#include <utilities.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/* The compiler assumes these identifiers. */
#define yylval cool_yylval
#define yylex  cool_yylex

/* Max size of string constants */
#define MAX_STR_CONST 1025
#define YY_NO_UNPUT   /* keep g++ happy */

extern FILE *fin; /* we read from this file */

/* define YY_INPUT so we read from the FILE fin:
 * This change makes it possible to use this scanner in
 * the Cool compiler.
 */
#undef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	if ( (result = fread( (char*)buf, sizeof(char), max_size, fin)) < 0) \
		YY_FATAL_ERROR( "read() in flex scanner failed");

char string_buf[MAX_STR_CONST]; /* to assemble string constants */
char *string_buf_ptr;

extern int curr_lineno;
extern int verbose_flag;

extern YYSTYPE cool_yylval;
int nest_level = 0;

/*
 *  Add Your own definitions here
 */

%}
%x INCOMMENT
%x quote
/*
 * Define names for regular expressions here.
 */
CLASS (?i:class)
ELSE  (?i:else)
FI    (?i:fi)
IF    (?i:if)
IN    (?i:in)
INHERITS  (?i:inherits)
LET  (?i:let)
LOOP	  (?i:loop)
POOL	  (?i:pool)
THEN	  (?i:then)
WHILE	  (?i:while)
CASE	  (?i:case)
ESAC	  (?i:esac)
OF  (?i:of)
DARROW          =>
NEW	  (?i:new)
ISVOID	  (?i:isvoid)
STR_CONST  \"(\\\n|\\.|[^\"\\\n])*\"
UNTER_STR_CONST \"([^\0\"\n\\]|\\.|\\\n)*\n
QUOTE_BEGIN \"
INT_CONST  [0-9]+
BOOL_CONST t(?i:rue)|f(?i:alse)
TYPEID	  [A-Z][A-Za-z_0-9]*
OBJECTID  [a-z][A-Za-z_0-9]*
ASSIGN   <-
NOT      (?i:not)
LE	 <=
CH  \;|\:|\,|\/|\=|\<|\.|\(|\)|\+|\-|\*|\~|\@|\{|\}
NEWLINE \n
LINECOMMENT \-\-.*
SPACES  [ \f\r\t\v]+
%%

 /*
  *  Nested comments
  */
\(\*  {BEGIN INCOMMENT;}
<INCOMMENT>\(\* { nest_level ++;}
<INCOMMENT>\*\) { if(!nest_level) BEGIN 0;
		  else nest_level --;
		}
<INCOMMENT>\n {curr_lineno +=1;}
<INCOMMENT>. {}

{NEWLINE} {curr_lineno += 1;}
{LINECOMMENT} {}
{SPACES} {}
 /*
  *  The multiple-character operators.
  */
{DARROW}		{ return (DARROW); }
{LE}			{return LE;}
 /*
  * Keywords are case-insensitive except for the values true and false,
  * which must begin with a lower-case letter.
  */
{CLASS}  {return (CLASS);}
{ELSE}   {return ELSE;}
{FI}     {return FI;}
{IF}	 {return IF;	}
{IN}	 {return IN;}
{INHERITS} {return INHERITS;}
{LET}	   {return LET;}
{LOOP}	   {return LOOP;}
{POOL}	   {return POOL;}
{THEN}	   {return THEN;}
{WHILE}	   {return WHILE;}
{CASE}	   {return CASE;}
{ESAC}	   {return ESAC;}
{OF}	   {return OF;}
{NEW}	   {return NEW;}
{ISVOID}   {return ISVOID;}
{ASSIGN}   {return ASSIGN;}
{NOT}	   {return NOT;}
{BOOL_CONST} { if(yytext[0]=='t') yylval.boolean = true;
	       else yylval.boolean = false;
	       return BOOL_CONST;
             }

{INT_CONST} { yylval.symbol = inttable.add_string(yytext);
	      return INT_CONST;
 	     }
{TYPEID}   {  yylval.symbol = inttable.add_string(yytext);
	      return TYPEID;
	      }
{OBJECTID}  {yylval.symbol = inttable.add_string(yytext);
	      return OBJECTID;
	      } 
{CH}    {return yytext[0];}
 /*
  *  String constants (C syntax)
  *  Escape sequence \c is accepted for all characters c. Except for 
  *  \n \t \b \f, the result is c.
  *
  */

<quote><<EOF>> {
	        BEGIN 0;
		yylval.error_msg="EOF in string constant";
		return ERROR;
		}
{STR_CONST} {  

	       int len = strlen(yytext);
	       int cnt=0;
	       bool is_literal = false;
	       for(int i=1;i<len-1;i++){
	       	       if(cnt==0 || is_literal || yytext[cnt-1]!='\\') {
		       		 yytext[cnt++]=yytext[i];
				 if(yytext[i]=='\\') is_literal = false;
				 }
		       else{
				if(yytext[i]=='n') yytext[cnt-1]='\n';
				else if(yytext[i]=='t') yytext[cnt-1]='\t';
				else if(yytext[i]=='b') yytext[cnt-1]='\b';
				else if(yytext[i]=='f') yytext[cnt-1]='\f';
				else if(yytext[i]=='\\') {
				     yytext[cnt-1]=yytext[i];
				     is_literal = true;
				}
				else yytext[cnt-1]=yytext[i];
		       }
	       }
	       yytext[cnt]=0;
	       yylval.symbol = inttable.add_string(yytext);
	       return STR_CONST; 
           }

{UNTER_STR_CONST}       {
			curr_lineno ++;
			yylval.error_msg="Unterminated string constant";
			return ERROR;
			}

{QUOTE_BEGIN} { BEGIN quote;
	      }
<quote>. {}

		
\*\)  	   {	yylval.error_msg = "Unmatched *)";
		return ERROR;
	   }  
.  { yylval.error_msg = yytext;
      return ERROR;
   }

%%
