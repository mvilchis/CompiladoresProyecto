/*  Fernández Martínez José Ismael
    Trinidad Hernández Norma Verónica
    Vilchis Domínguez Miguel Alonso
    Proyecto 02
    Sept 2014
*/

%{

#include <stdio.h>
#include <string>
#define YYDEBUG 1
using namespace std;
#include "visitor.cpp"
#define YYDEBUG 1
MASTBuilder *ast;
NodeVisitor *visitor = new PrintVisitor();

extern FILE *yyin;
extern char *yytext;
extern void inicializar();

int yylex(); 
int yyerror(const char *s) { printf ("Error: %s\n", s); return 1;}

%}
%code requires{
#include "composite.cpp"
}
%union {
  int numi;
    float numf;
    const char* cad;
Node* nodeT;
};
%type <nodeT>GOAL file_input stmt simple_stmt small_stmt expr_stmt print_stmt  s29 del_stmt pass_stmt flow_stmt break_stmt continue_stmt return_stmt compound_stmt if_stmt s8 while_stmt for_stmt suite test or_test and_test not_test comparison comp_op expr xor_expr and_expr shift_expr arith_expr term factor atom if_else_stmt while_else_stmt for_else_stmt elif s5 s6 s7 s9 s10 s11 s12 arglist trailer s4 s3 s2 else_stmt s40 s56 s41 s43 s42 s44
%token <cad> STRING IDENTIFICADOR
%token <nodeT> PRINT FALSE CLASS FINALLY IS RETURN NONE CONTINUE FOR LAMBDA TRY TRUE DEF FROM NONLOCAL WHILE AND DEL GLOBAL NOT WITH AS ELIF IF OR YIELD ASSERT ELSE IMPORT PASS BREAK EXCEPT IN RAISE EXEC
%token <nodeT> NIGUAL DIGUAL MAIGUAL MEIGUAL MAYOR MENOR ENETILDE CIRCUNFLEJO PIPE AMPERSON DMAYOR DMENOR PORCEN DDIAG DIAG DASTERISCO ASTERISCO MENOS MAS
%token <nodeT> APAREN CPAREN ACORCHETE CCORCHETE ALLAVE CLLAVE COMA DPUNTO PUNTO PCOMA AT IGUAL MENOSMAYOR MASIGUAL MENOSIGUAL ASTIGUAL DIAIGUAL DDIAIGUAL PORIGUAL AMPIGUAL PIPEIGUAL CIRCIGUAL DMAYORIGUAL DMENORIGUAL DASTIGUAL MENORMAYOR
%token <nodeT> CSIMPLE IDIAG GATO DIDIAG 
%token <nodeT> NEWLINE
%token <numi> ENTERO
%token <numf> FLOTANTE
%token <nodeT> INDENT SALIDA DEDENT
%token FIN 

%%
/*Símbolo inicial*/


GOAL : file_input {$$=$1; 
                    $$->accept(visitor);
                    cout << "Éxito en el reconocimiento" << endl;};


file_input : NEWLINE file_input {$$=$2;}
            | stmt file_input{$$=ast->bHERMANOSNode($1,$2);}
            |{$$=ast->bHERMANOSNode();}
            ;


suite : simple_stmt {$$=$1;}
        | INDENT stmt s44 DEDENT {$$=ast->bHERMANOSNode($2,$3);}
        ;
s44 : stmt s44 {$$=ast->bHERMANOSNode($1,$2);}
    | {$$=ast->bHERMANOSNode();}
    ;


stmt : simple_stmt {$$=$1;} 
    | compound_stmt {$$=$1;} 
    ;

simple_stmt : small_stmt s42 NEWLINE {$$=ast->bHERMANOSNode($1,$2);};
s42 : PCOMA small_stmt s42 {$$=ast->bHERMANOSNode($2,$3);}
    | s43 {$$=$1;}
    ;
s43 : PCOMA {$$=ast->bHERMANOSNode();}
    | {$$=ast->bHERMANOSNode();}
    ;


small_stmt : print_stmt {$$=ast->bHERMANOSNode($1);}
            | flow_stmt {$$=ast->bHERMANOSNode($1);}
            | expr_stmt {$$=ast->bHERMANOSNode($1);}
            | pass_stmt {$$=ast->bHERMANOSNode($1);}
            | del_stmt {$$=ast->bHERMANOSNode($1);}
            ;

pass_stmt : PASS {$$=ast->bPASSNode();}
            ;

del_stmt : DEL IDENTIFICADOR {$$=ast->bDELNode($1);};

flow_stmt : break_stmt  {$$=$1;}
            | continue_stmt {$$=$1;}
            | return_stmt {$$=$1;}
            ;

expr_stmt : IDENTIFICADOR s41  {$2->setFChild(ast->bIDENTIFICADORNode($1)); $$=$2;}
        | test {$$=$1;};
s41 : s56 test {$1->setSChild($2);};
s56 : MASIGUAL {$$=ast->bMASIGUALNode();}
 | MENOSIGUAL {$$=ast->bMENOSIGUALNode();}
 | ASTIGUAL {$$=ast->bASIGUALNode();}
 | DIAIGUAL {$$=ast->bDIAIGUALNode();}
 | PORIGUAL {$$=ast->bPORIGUALNode();}
 | AMPIGUAL {$$= ast->bAMPIGUALNode();}
 | PIPEIGUAL {$$=ast->bPIPEIGUALNode();}
 | CIRCIGUAL {$$=ast->bCIRCIGUALNode();}
 | DMENORIGUAL {$$=ast->bDMENORIGUALNode();}
 | DMAYORIGUAL {$$=ast->bDMAYORIGUALNode();}
 | DASTIGUAL {$$=ast->bDASTIGUALNode();}
 | DDIAIGUAL {$$=ast->bDDIAIGUALNode();}
;


break_stmt : BREAK {$$=ast->bBREAKNode();} ;

continue_stmt : CONTINUE {$$=ast->bCONTINUENode();};

return_stmt : RETURN s40{$$=ast->bRETURNNode($2);};
s40 : test{$$=$1;} 
    | {$$=NULL;};

compound_stmt : if_stmt {$$=ast->bHERMANOSNode($1);}
            | if_else_stmt {$$=ast->bHERMANOSNode($1);}
            | while_stmt {$$=ast->bHERMANOSNode($1);}
            | while_else_stmt {$$=ast->bHERMANOSNode($1);}
            | for_stmt {$$=ast->bHERMANOSNode($1);}
            | for_else_stmt {$$=ast->bHERMANOSNode($1);}
            ;

print_stmt : PRINT test {$$=ast->bPRINTNode($2);} 
            ;

while_else_stmt : while_stmt else_stmt {$$=ast->bWHILEELSENode($1,$2);}
            ;
while_stmt : WHILE test DPUNTO NEWLINE suite {$$=ast->bWHILENode($2,$5);}
            ;

if_stmt : IF test DPUNTO NEWLINE suite elif {$$=ast->bIFNode($2,$5,$6);}
            ;

elif : ELIF test DPUNTO NEWLINE suite elif {$$=ast->bIFNode($2,$5,$6);}
    | {$$=NULL;}
    ;

if_else_stmt : if_stmt else_stmt {$$=ast->bIFELSENode($1,$2);}
        ;

else_stmt : ELSE DPUNTO NEWLINE suite  {$$=$4;}
            ;

for_else_stmt : for_stmt else_stmt  {$$=ast->bFORELSENode($1,$2);}
;

for_stmt : FOR IDENTIFICADOR IN trailer DPUNTO NEWLINE  suite {$$=ast->bFORNode(ast->bIDENTIFICADORNode($2),$4,$7);}
| FOR IDENTIFICADOR IN IDENTIFICADOR DPUNTO NEWLINE  suite {$$=ast->bFORNode(ast->bIDENTIFICADORNode($2),ast->bIDENTIFICADORNode($4),$7);}
;


test : or_test {$$=$1;};

    

or_test : and_test s2{$$=ast->bORNode($1,$2);};
s2 : OR and_test s2 {$$=ast->bORNode($2,$3);}
    | {$$=NULL;}
    ;


and_test: not_test s3 {$$=ast->bANDNode($1,$2);};
s3 : AND not_test s3 {$$=ast->bANDNode($2,$3);}
    | {$$=NULL;}
    ;


not_test: NOT not_test {$$=ast->bNOTNode($2);}
        | comparison {$$=$1;};


comparison : expr s4 {  
                        if($2==NULL){
                        $$=$1;

                        }
                    else{

                        $2->setFChild($1); 
                        $$=$2;
                        }
                    };
s4 : comp_op expr s4 {
                        if($3==NULL){
                        $1->setSChild($2);
                        $$=$1;
                    }else{
                        $3->setFChild($2);
                        $1->setSChild($3);
                        $$=$1;
                        }
                    } 
    | {$$=NULL;}
    ;


comp_op:MENOR {$$=ast->bMENORNode();}
 |MAYOR {$$=ast->bMAYORNode();}
 |DIGUAL {$$=ast->bDIGNode();}
 |MAIGUAL {$$=ast->bMAYIGNode();}
 |MEIGUAL {$$=ast->bMENIGNode();}
 |MENORMAYOR {$$=ast->bMENORMAYORNode();}
 |NIGUAL {$$=ast->bNIGNode();}
 |IN {$$=ast->bINNode();}
 |NOT IN {$$=ast->bNOTINNode();}
 |IS {$$=ast->bISNode();}
 |IS NOT {$$=ast->bISNOTNode();}
;
expr : xor_expr s5 {$$=ast->bPIPENode($1,$2);};
s5 : PIPE xor_expr s5 {$$=ast->bPIPENode($2,$3);}
    | {$$=NULL;}
    ;


xor_expr : and_expr s6{$$=ast->bCIRCUNFLEJONode($1,$2);}; 
s6 : CIRCUNFLEJO and_expr s6 {$$=ast->bCIRCUNFLEJONode($2,$3);}
    | {$$=NULL;}
    ;


and_expr: shift_expr s7 {$$=ast->bAMPERSONNode($1,$2);};
s7 : AMPERSON shift_expr s7 {$$=ast->bAMPERSONNode($2,$3);}
    | {$$=NULL;}
    ;

shift_expr : arith_expr s8 {if($2==NULL){
                        $$=$1;
                        }
                    else{
                        $2->setFChild($1); 
                        $$=$2;
                        }
                    };
s8 : DMAYOR arith_expr s8 { $$=ast->bDMAYORNode($2,$3);}
    | DMENOR arith_expr s8 { $$=ast->bDMENORNode($2,$3);}
    | {$$=NULL;}
    ;

arith_expr : term s9 {if($2==NULL){
                        $$=$1;
                        }
                    else{
                        $2->setFChild($1); 
                        $$=$2;
                        }
                    };
s9 : s10 term s9 {if($3==NULL){
                    $1->setSChild($2);
                    $$=$1;
                }else{
                    $3->setFChild($2);
                    $1->setSChild($3);
                    $$=$1;
                    }
                }
    | {$$=NULL;}
    ;
s10 : MAS {$$=ast->bMENOSNode();} 
    | MENOS {$$=ast->bMASNode();} ;

term : factor s11   {if($2==NULL){
                        $$=$1;
                        }
                    else{
                        $2->setFChild($1); 
                        $$=$2;
                        }
                    }; 
s11 : s12 factor s11 {if($3==NULL){
                    $1->setSChild($2);
                    $$=$1;
                }else{
                    $3->setFChild($2);
                    $1->setSChild($3);
                    $$=$1;
                    }
                }
    | {$$=NULL;}
    ;
s12 : ASTERISCO  {$$=ast->bPORNode();}
    | DIAG  {$$=ast->bDIVNode();}
    | PORCEN {$$=ast->bMODNode();}
    | DDIAG {$$=ast->bDDIAGNode();};


factor : s10 factor {$1->setFChild(ast->bINTNode(0));
                        $1->setSChild($2);
                        $$=$1;} 
    | atom {$$=$1;}
    ;



atom : IDENTIFICADOR {$$=ast->bIDENTIFICADORNode($1);}
    | ENTERO {$$=ast->bINTNode($1);}
    | FLOTANTE {$$=ast->bFLOATNode($1);}
    | STRING {$$=ast->bSTRINGNode($1);}
    | TRUE {$$=ast->bFALSENode();}
    | FALSE {$$=ast->bTRUENode();}
    ;

trailer : APAREN arglist CPAREN {$$=$2;};

arglist : test s29 {$$=ast->bARGNode(ast->bARGNode($1),$2);}
        | {$$=ast->bARGNode();}
        ;
s29 : COMA test s29 {$$=ast->bARGNode(ast->bARGNode($1),$2);}
    | {$$=ast->bARGNode();}
    ;



%%

int main(int argc, char const *argv[]) {
    ++argv;
    --argc;

    if (argc > 0) {
        yyin = fopen(argv[0], "r");
    }
    else
        yyin = stdin;
    do {
        yydebug = 1;
	inicializar();
        yyparse();
    } while (!feof(yyin));
}

