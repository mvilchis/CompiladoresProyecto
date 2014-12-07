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
  char car;
Node* nodeT;
};
%type <nodeT>GOAL file_input stmt simple_stmt ss_aux simple_stmt_aux small_stmt expr_stmt expr_stmt_aux_b expr_stmt_aux_b_a augassign print_stmt  s29  s30  s31  s32  comaS del_stmt pass_stmt flow_stmt break_stmt continue_stmt return_stmt return_stmt_aux compound_stmt if_stmt if_stmt_aux s8 while_stmt for_stmt suite suite_aux s15 test or_test or_test_aux and_test and_test_aux not_test comparison comparison_aux comp_op expr expr_aux xor_expr xor_expr_aux and_expr and_expr_aux shift_expr shift_expr_aux arith_expr arith_expr_aux ae_aux term term_aux t_aux factor atom string_aux exprlist exprlist_aux testlist testlist_aux r1
%token <cad> STRING ESPTAB OPERADOR IDENTIFICADOR
%token <cad> PRINT FALSE CLASS FINALLY IS RETURN NONE CONTINUE FOR LAMBDA TRY TRUE DEF FROM NONLOCAL WHILE AND DEL GLOBAL NOT WITH AS ELIF IF OR YIELD ASSERT ELSE IMPORT PASS BREAK EXCEPT IN RAISE EXEC
%token <cad> NIGUAL DIGUAL MAIGUAL MEIGUAL MAYOR MENOR ENETILDE CIRCUNFLEJO PIPE AMPERSON DMAYOR DMENOR PORCEN DDIAG DIAG DASTERISCO ASTERISCO MENOS MAS
%token <cad> APAREN CPAREN ACORCHETE CCORCHETE ALLAVE CLLAVE COMA DPUNTO PUNTO PCOMA AT IGUAL MENOSMAYOR MASIGUAL MENOSIGUAL ASTIGUAL DIAIGUAL DDIAIGUAL PORIGUAL AMPIGUAL PIPEIGUAL CIRCIGUAL DMAYORIGUAL DMENORIGUAL DASTIGUAL MENORMAYOR
%token <cad> CSIMPLE IDIAG GATO DIDIAG 
%token <car> NEWLINE
%token <numi> ENTERO
%token <numf> FLOTANTE
%token <cad> INDENT SALIDA DEDENT
%token FIN 

%%
/*Símbolo inicial*/
GOAL: file_input {printf("Éxito primero\n");
	$$=$1;
	NodeVisitor *visitor = new PrintVisitor();
//	$$->accept(visitor);
	printf("Exito\n");
}
;

file_input: file_input NEWLINE {$$=$1;}| stmt file_input {cout << "a\n";$$=ast->bHERMANOSNode($1, $2);
 }| {cout << "b\n";$$=NULL;
} 
;

/*definición statments*/
stmt: simple_stmt {$$=$1;} 
| compound_stmt{$$=$1;}
;

simple_stmt: small_stmt r1 NEWLINE {cout << "ep\n"; $$=ast->bHERMANOSNode($1,$2);}
;

r1: simple_stmt_aux ss_aux {$$=ast->bHERMANOSNode($1,$2);/*checar aqui*/}
;
ss_aux: PCOMA{$$=ast->bHERMANOSNode();}
| {$$=NULL;} 
;
simple_stmt_aux: simple_stmt_aux PCOMA small_stmt {$$=ast->bHERMANOSNode($1,$3);}
|{$$=NULL;}   
;
small_stmt:
expr_stmt {$$=$1;}
| print_stmt{$$=$1;}
| del_stmt{$$=$1;}
| pass_stmt{$$=$1;}
| flow_stmt{$$=$1;}
;
expr_stmt: testlist expr_stmt_aux_b {// $2->setFChild($1);$$=$2; 
 }
;

expr_stmt_aux_b:  augassign testlist {$1->setSChild($2); $$=$1;}
| expr_stmt_aux_b_a {$$=$1; }
;
expr_stmt_aux_b_a: 
IGUAL testlist {$$=$2;}
|{$$=NULL;} 
;

augassign:MASIGUAL {$$=ast->bMASIGUALNode();}
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

/*PRINT*/
print_stmt : PRINT s29 {
	LNodeList *nl = new LNodeList();
        nl->push_front($2);
        $$=ast->bPRINTNode(nl);
        }
;

s29 : s30 {$$=$1; }| DMAYOR test s31 {$$=$3;};
s30 : test s32 comaS {$$=ast->bHERMANOSNode($1,$2);}
|{$$=ast->bHERMANOSNode();} 
;
s31 : COMA test comaS {$$=$2;}
|{$$=ast->bHERMANOSNode();} 
;

s32 :  s32 COMA test {$$=ast->bHERMANOSNode($1,$3);}| {$$=ast->bHERMANOSNode();} ;
comaS: COMA{$$=ast->bHERMANOSNode();}
|{$$=NULL;} 
;
/*DEL*/
del_stmt: DEL exprlist {$$=ast->bDELNode($2);}
;
/*PASS*/
pass_stmt: PASS {$$=ast->bPASSNode();}
;
/*Statments de flujo*/
flow_stmt:
break_stmt {$$=$1;}
| continue_stmt {$$=$1;}
| return_stmt {$$=$1;}
;
/*BREAK*/
break_stmt: BREAK {$$=ast->bBREAKNode();}
;
/*CONTINUE*/
continue_stmt: CONTINUE {$$=ast->bCONTINUENode();}
;
/*RETURN*/
return_stmt: RETURN return_stmt_aux {$$=ast->bRETURNNode($2);}
;
return_stmt_aux: testlist{$$=$1;}
|{$$=ast->bHERMANOSNode();}  
;
compound_stmt: 
if_stmt {$$=$1;} 
| while_stmt {$$=$1;} 
| for_stmt {$$=$1;} 
;
/*IF*/
if_stmt: IF test DPUNTO suite if_stmt_aux s8 {
        LNodeList *nl = new LNodeList();
        nl->push_front($5);
        nl->push_front($4);
        nl->push_front($2);
        $$=ast->bIFNode(nl);}
;

if_stmt_aux:  if_stmt_aux ELIF test DPUNTO suite {
        LNodeList *nl = new LNodeList();
        nl->push_front($1);
        nl->push_front($5);
        nl->push_front($3);
        $$=ast->bIFNode(nl);
        }
|{$$=ast->bHERMANOSNode();}   
;
s8: ELSE DPUNTO suite { $$=$3; }
|   {$$=ast->bHERMANOSNode();} 
;
/*WHILE*/
while_stmt: WHILE test DPUNTO suite s8 { $$=ast->bWHILENode($2,$4);}
;
/*FOR*/
for_stmt: FOR exprlist IN testlist DPUNTO suite s8{
        LNodeList *nl = new LNodeList();
        nl->push_front($6);
        nl->push_front($4);
        nl->push_front($2);
        $$=ast->bFORNode(nl);
        }

;

suite: simple_stmt {$$=$1; }| NEWLINE INDENT suite_aux DEDENT {
	$$=ast->bHERMANOSNode($3);
}
;
suite_aux: suite_aux stmt {$$=ast->bHERMANOSNode($1,$2); }| stmt {$$=$1;}
;
s15: IF or_test ELSE test {
LNodeList *nl = new LNodeList();
nl->push_front($2);
nl->push_front($4);
$$=ast->bIFNode(nl);

}|{$$ = NULL;}    
;
test: or_test s15 {/*$$=ast->bHERMANOSNode($1,$2);*/ $$=$1;}
;
/*COMPARADORES*/
or_test: and_test or_test_aux  {$$=ast->bORNode($1,$2);}

;
or_test_aux:or_test_aux  OR and_test {$$=ast->bORNode($1,$3);} |{$$=NULL;}   
;
and_test: not_test and_test_aux { $$=ast->bANDNode($1,$2);
}
;
and_test_aux:  and_test_aux AND not_test {
        $$=ast->bANDNode($1,$3);
}
|{$$=NULL;}   
;
not_test: NOT not_test {$$=ast->bNOTNode($2);}
| comparison {$$=$1;}
;
comparison: expr comparison_aux {/*$$=ast->bHERMANOSNode($1,$2);*/
	if($2==NULL){
          $$=$1;

            }
                    else{

                        $2->setFChild($1); 
                        $$=$2;
                        }
}
;
comparison_aux:  comparison_aux comp_op expr {/*$$=ast->bHERMANOSNode($1,$2);*/
if($1==NULL){
                        $2->setSChild($3);
                        $$=$2;
                    }else{
                        $1->setFChild($3);
                        $2->setSChild($1);
                        $$=$2;
                        }
                   
} |{$$=NULL;
/*$$=ast->bHERMANOSNode();*/
}  
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

expr: xor_expr expr_aux {$$=ast->bPIPENode($1,$2);}
;
expr_aux:expr_aux   PIPE xor_expr  {$$=ast->bPIPENode($1,$3);}|{$$=NULL;}   
;
xor_expr: and_expr xor_expr_aux {//$$=$1;
$$=ast->bORNode($1,$2);
}
;
xor_expr_aux:  xor_expr_aux CIRCUNFLEJO and_expr {
$$=ast->bORNode($1,$3);

}|{$$=NULL;}   
;
and_expr: shift_expr and_expr_aux { //$$=$1;
$$=ast->bANDNode($1,$2);
} 
;
and_expr_aux:and_expr_aux   AMPERSON shift_expr {//$$=$3;
 $$=ast->bANDNode($1,$3);

}|{$$=NULL;}   
;
shift_expr: arith_expr shift_expr_aux { //$$=$1;
	//$$=ast->bHERMANOSNode($1,$2);
	if($2==NULL){
                        $$=$1;
                        }
                    else{
                        $2->setFChild($1);
                        $$=$2;
                      }

}
;
shift_expr_aux: shift_expr_aux DMENOR arith_expr {//$$=$3;
$$=ast->bDMENORNode($1,$3);
} 
| shift_expr_aux  DMAYOR arith_expr {//$$=$3;
$$=ast->bDMAYORNode($1,$3);
}|{$$=NULL;} 
;
arith_expr: term arith_expr_aux {//$$=$1;
if($2==NULL){
                        $$=$1;
                        }
                    else{
                       	$2->setFChild($1);
                        $$=$2;
                        }


}
;
arith_expr_aux: arith_expr_aux ae_aux term  {//$$=$3;
if($1==NULL){
                    $2->setSChild($3);
                    $$=$2;
                }else{
                    $1->setFChild($3);
                    $2->setSChild($1);
                    $$=$2;
                    }
}|{$$=NULL;}   
;
ae_aux:MAS  {$$=ast->bMASNode();}
 | MENOS {$$=ast->bMENOSNode();}
;
 

term: factor term_aux {//$$ =$1;

if($2==NULL){
                        $$=$1;
                        }
                    else{
                        $2->setFChild($1);
                        $$=$2;
                        }

}
;
term_aux: term_aux  t_aux factor  {//$$= $3;
if($1==NULL){
                    $2->setSChild($3);
                    $$=$2;
                }else{
                    $1->setFChild($3);
                    $2->setSChild($1);
                    $$=$2;
                    }


}|
{$$=NULL;}   
;
t_aux:ASTERISCO  {$$=ast->bPORNode();}
 | DIAG  {$$=ast->bDIVNode();}
 | PORCEN {$$=ast->bMODNode();}
 | DDIAG {$$=ast->bDDIAGNode();}


 
;
factor:  ae_aux factor {//$$=$2;
	$1->setFChild(ast->bINTNode(0));
	$1->setSChild($2);
	$$=$1;
} | atom{$$=$1;}

;

atom:IDENTIFICADOR {$$=ast->bIDENTIFICADORNode($1);}
 |FLOTANTE {$$=ast->bFLOATNode($1);}
 |ENTERO {$$=ast->bINTNode($1);}
 |string_aux {$$=$1;}
 |TRUE {$$=ast->bTRUENode();}
 |FALSE {$$=ast->bFALSENode();}
;


/*CADENAS*/
string_aux: string_aux STRING { $$=ast->bHERMANOSNode(ast->bSTRINGNode($2), $1);}
| STRING {$$=ast->bSTRINGNode($1);}
;


exprlist: expr exprlist_aux comaS {$$=$1;}
;
exprlist_aux: exprlist_aux COMA expr {$$=$3;} |{$$=ast->bHERMANOSNode();}   
;
testlist: test testlist_aux comaS {$$=$1;}
;
testlist_aux:  testlist_aux COMA test {$$=$3;}|{$$=NULL;}   
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

