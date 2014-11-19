/* Fernández Martínez José Ismael
Trinidad Hernández Norma Verónica
Vilchis Domínguez Miguel Alonso
Proyecto 02
Sept 2014
*/
%{
#include <iostream>
#include "stdio.h"
//#include "builder.cpp"
#include "visitor.cpp"
#define YYDEBUG 1
MASTBuilder *ast;

extern FILE *yyin;
extern char *yytext;
extern void inicializar();
int yylex();
int yyerror(const char *s) { printf("Error: %s\n", s); return 1;}
%}
%code requires{
#include "composite.cpp"
}
%union{
int numi;
float numf;
const char* cad;
char car;
 Node* nodeT;
}


%type <nodeT> GOAL file_input funcdef parameters parameters_aux varargslist varargslist_aux_a val_aux varargslist_aux_b n1 varargslist_aux_c n2 n3 fpdef fplist fpl_aux fplist_aux stmt simple_stmt ss_aux simple_stmt_aux small_stmt expr_stmt expr_stmt_aux_b expr_stmt_aux_b_a augassign print_stmt s29 s30 s31 s32 comaS del_stmt pass_stmt flow_stmt break_stmt continue_stmt return_stmt return_stmt_aux global_stmt global_stmt_aux exec_stmt s7 compound_stmt if_stmt if_stmt_aux s8 while_stmt for_stmt with_stmt with_stmt_aux with_item s10 suite suite_aux testlist_safe old_test n10 s13 s15 test or_test or_test_aux and_test and_test_aux not_test comparison comparison_aux comp_op expr expr_aux xor_expr xor_expr_aux and_expr and_expr_aux shift_expr shift_expr_aux arith_expr arith_expr_aux ae_aux term term_aux t_aux factor factor_aux power s16 s17 s18 s19 s20 s21 s22 power_aux atom string_aux listmaker listmaker_aux lm_aux testlist_comp testlist_comp_aux tc_aux trailer subscriptlist subscriptlist_aux subscript sliceop exprlist exprlist_aux testlist testlist_aux dictorsetmaker dictorsetmaker_aux_a dsm_aux_a dsm_aux_a_a dictorsetmaker_aux_b dsm_aux_b dsm_aux_b_a arglist arglist_aux_a arglist_aux_b al_aux s25 argument s26 list_iter list_for list_if s27 comp_iter comp_for comp_if s28 s5

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
GOAL: file_input {
	$$=$1;
	printf("Exito\n");}
;
file_input: file_input NEWLINE {$$=$1;} 
 | stmt file_input {//Nada
}
 |{//Nada
}
;
/*definición de funciones*/
funcdef: DEF IDENTIFICADOR parameters DPUNTO suite {
  $$=ast->bFUNCIONNode(ast->bIDENTIFICADORNode($2), $3, $5);
}
;
/*definicion de parámetros*/
parameters: APAREN parameters_aux CPAREN {$$=$2;}
;
parameters_aux: varargslist {$$=$1;}
|{//nodoParametro Void
}
;
varargslist: varargslist_aux_a varargslist_aux_b {
	//Nodo Parametro Identificador $1, $2
	} 
 |fpdef val_aux varargslist_aux_c {
	//Nodo Parametro $2, $3
} 
;
varargslist_aux_a: varargslist_aux_a fpdef val_aux COMA {
	//Nodo Parametro $1 $2 $3 
	} 
 |{//NAda
}
;
val_aux: IGUAL test { 
	$$=ast->bIGUALNode();
	//Duda agregar Nodo Test
	
	} 
 |{//NADA
}
;
varargslist_aux_b: ASTERISCO IDENTIFICADOR n1 {
	// Nodo parametro con (ast->bIDENTIFICADORNode($2), $1)
	//Agregar nodo n1

	} 
 | DASTERISCO IDENTIFICADOR {
	$$=ast->bIDENTIFICADORNode($2);
	} 
;
n1: COMA DASTERISCO IDENTIFICADOR {
	
	$$=ast->bIDENTIFICADORNode($3);
	} 
 |{ 
//Nodo Parametro vacio
}
;
varargslist_aux_c: n2 n3 { 
	//Nodo parametro con lo que regrese n2 y n3
}
;
n2: n2 COMA fpdef val_aux { $$=$4;}
|{
//Nodo Parametro vacio
}
;
n3: COMA {} 
 |{
//Nodo Parametro vacio
}
;
s5: COMA test { $$=$2;}
 |{//NADA
}
;
fpdef: IDENTIFICADOR { $$=ast->bIDENTIFICADORNode($1);} 
 | APAREN fplist CPAREN {$$=$2; } 
;
fplist: fpdef fplist_aux fpl_aux {$$=$2;} 
;
fpl_aux: COMA {//Nada
} 
|{//Nada
}
;
fplist_aux: fplist_aux COMA fpdef {$$=$3;}
|{}
;
/*definición statments*/
stmt: simple_stmt { $$=$1;}
| compound_stmt {$$=$1;}
;
simple_stmt: small_stmt simple_stmt_aux ss_aux NEWLINE {//nada
}
;
ss_aux: PCOMA {
	//Nada
}
|{
	//Nada
	}
;
simple_stmt_aux: simple_stmt_aux PCOMA small_stmt { 
	$$=$3;
}
|{}
;
small_stmt: expr_stmt {
	//Nodo nivel
}
| print_stmt {
	//Nodo nivel
}
| del_stmt {
	//Nodo nivel
}
| pass_stmt {
	//Nodo nivel
}
| flow_stmt {
	//Nodo nivel
}
| global_stmt {
	//Nodo nivel
}
| exec_stmt {
	//Nodo nivel
}
;
expr_stmt: testlist expr_stmt_aux_b {$$=$2;}
;
expr_stmt_aux_b: augassign testlist {$$=$1;}
| expr_stmt_aux_b_a {$$=$1;}
expr_stmt_aux_b_a: IGUAL testlist {$$=ast->bIGUALNode();}
|{
//Nada
}
;
augassign: MASIGUAL {$$=ast->bMASIGUALNode();} 
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
s29 : s30  { $$=$1;}
| DMAYOR test s31 { $$=ast->bDMAYORIGUALNode();
	//Falta meter el nodo s31
}
;
s30 : test s32 comaS {$$=$2;}
|{
//Nada
}
;
s31 : COMA test comaS {
	$$=$2;
}
|{}
;
s32 : s32 COMA test {
	$$=$3;
}
|{
//Nada
} ;
comaS: COMA {
//Nada
}
|{
//Nada
}
;
/*DEL*/
del_stmt: DEL exprlist {$$=ast->bDELNode($1);}
;
/*PASS*/
pass_stmt: PASS {$$=ast->bPASSNode(); }
;
/*Statments de flujo*/
flow_stmt: break_stmt {$$=$1;}
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
return_stmt_aux: testlist {$$=$1;}
 |{$$=NULL;}
;
/*GLOBAL*/
global_stmt: GLOBAL IDENTIFICADOR global_stmt_aux { 
	$$=ast->bIDENTIFICADORNode($2);
	//Falta trabajar con global_stmt_aux
}
;
global_stmt_aux: global_stmt_aux COMA IDENTIFICADOR  {
	$$=ast->bIDENTIFICADORNode($3);
	//falta trabajar con global_stmt_aux
	}

|{}
;
/*EXEC*/
exec_stmt: EXEC expr s7 {}
;
s7: IN test s5  {}
|{}
;
compound_stmt: if_stmt {
	//Nivel
	}
| while_stmt {
	//Nivel
}
| for_stmt {
	//Nivel
}
| with_stmt {
	//Nivel
}
| funcdef {
	//Nivel
}
;
/*IF*/
if_stmt: IF test DPUNTO suite if_stmt_aux s8 { 
	LNodeList *nl = new LNodeList();
	nl->push_front($5);
	nl->push_front($4);
	nl->push_front($2);
	$$=ast->bIFNode(nl);}
;
if_stmt_aux: if_stmt_aux ELIF test DPUNTO suite  {
	LNodeList *nl = new LNodeList();
	nl->push_front($1);
	nl->push_front($5);
	nl->push_front($3);
	$$=ast->bIFNode(nl);
	}
|{$$=NULL;}
;
s8: ELSE DPUNTO suite { $$=$3; }
|{$$=NULL;}
;
/*WHILE*/
while_stmt: WHILE test DPUNTO suite s8 { $$=ast->bWHILENode($2,$4);}
;
/*FOR*/
for_stmt: FOR exprlist IN testlist DPUNTO suite s8 {
	LNodeList *nl = new LNodeList();
	nl->push_front($6);
	nl->push_front($4);
	nl->push_front($2); 
	$$=ast->bFORNode(nl);
	}
;
with_stmt: WITH with_item with_stmt_aux DPUNTO suite {}
;
with_stmt_aux: with_stmt_aux COMA with_item  {}
|{}
;
with_item: test s10 {}
;
s10: AS expr  {}
|{}
;
suite: simple_stmt  { $$=$1; }
| NEWLINE INDENT suite_aux DEDENT {
	//Nivel
}
;
suite_aux: suite_aux stmt  {
	//Nivel
	}
| stmt {
	//Nivel
}
;
testlist_safe: old_test n10 {
//Nivel
}
;
old_test: or_test {
//Nivel
}
;
n10: s13 comaS {
$$=$1;
}
;
s13: s13 COMA old_test  {
$$=$3;
}
| COMA old_test {
$$=$2;
}
;
s15: IF or_test ELSE test  {
LNodeList *nl = new LNodeList();
nl->push_front($2); 
nl->push_front($3); 
$$=ast->bIFNode(nl);

}
|{
//Nada
}
;
test: or_test s15 {
$$=$2;
}
;
/*COMPARADORES*/
or_test: and_test or_test_aux {
$$=ast->bORNode($1,$2);
}
;
or_test_aux:or_test_aux OR and_test  {
$$=ast->bORNode($1,$3);

}
|{
//Nada
}
;
and_test: not_test and_test_aux {
	$$=ast->bANDNode($1,$2);
}
;
and_test_aux: and_test_aux AND not_test  {
	$$=ast->bANDNode($1,$3);
}


|{
//Nada
}
;
not_test: NOT not_test  {
	$$=ast->bNOTNode($2);
}
| comparison {
	$$=$1;
}
;
comparison: expr comparison_aux {
	$$=$2;
}
;
comparison_aux: comparison_aux comp_op expr  {
	$$=$2;
}
|{
//Nada
}
;
comp_op: MENOR {$$=ast->bMENORNode();} 
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
expr: xor_expr expr_aux {
 $$=ast->bORNode($1,$2);
}
;
expr_aux:expr_aux PIPE xor_expr  {
	$$=ast->bPIPENode($1,$3);
}
|{
//Nada
}
;
xor_expr: and_expr xor_expr_aux {
$$=ast->bORNode($1,$2);

}
;
xor_expr_aux: xor_expr_aux CIRCUNFLEJO and_expr  {
	$$=ast->bORNode($1,$3);

}
|{}
;
and_expr: shift_expr and_expr_aux {
	$$=ast->bANDNode($1,$2);
}
;
and_expr_aux:and_expr_aux AMPERSON shift_expr  {
	$$=ast->bANDNode($1,$3);
}
|{
//Nada
}
;
shift_expr: arith_expr shift_expr_aux {
	$$=$2;
	//Agregar a shift_e
}
;
shift_expr_aux: shift_expr_aux DMENOR arith_expr {
	$$=ast->bDMENORNode($1, $3);

}
| shift_expr_aux DMAYOR arith_expr  {
	$$=ast->bDMENORNode($1, $3);
}
|{
//Nada
}
;
arith_expr: term arith_expr_aux {
	$$=$1;
}
;
arith_expr_aux: arith_expr_aux ae_aux term  {
	$$=$3;
}
|{
//Nada
}
;
ae_aux: MAS  {$$=ast->bMASNode();} 
 | MENOS {$$=ast->bMENOSNode();} 
;
term: factor term_aux {
$$=$2;
//Añadir a term_aux
} 
;
term_aux: term_aux t_aux factor  {
$$=$2;
} 
 |{}
;
t_aux: ASTERISCO  {$$=ast->bPORNode();} 
 | DIAG  {$$=ast->bDIVNode();} 
 | PORCEN {$$=ast->bMODNode();} 
 | DDIAG {$$=ast->bDDIAGNode();}

;
factor: factor_aux factor  {} 
 | power {} 
;
factor_aux: MAS  {$$=ast->bMASNode();} 
 | MENOS  {$$=ast->bMENOSNode();} 
;
power: atom power_aux s16 {} 
;
s16: DASTERISCO factor  {} 
 |{}
;
s17: testlist_comp  {} 
 |{}
;
s18: listmaker  {} 
 |{}
;
s19: dictorsetmaker  {} 
 |{}
;
s20: arglist  {}
|{}
;
s21: test  {}
|{}
;
s22: sliceop  {}
|{}
;
power_aux: power_aux trailer  {}
|{}
;
atom: APAREN s17 CPAREN {} 
 |ACORCHETE s18 CCORCHETE {} 
 |ALLAVE s19 CLLAVE {} 
 |IDENTIFICADOR {$$=ast->bIDENTIFICADORNode($1);} 
 | FLOTANTE {$$=ast->bFLOATNode($1);} 
 | ENTERO {$$=ast->bINTNode($1);} 
 | string_aux {$$=$1;} 
 |TRUE {$$=ast->bTRUENode();} 
 |FALSE {$$=ast->bFALSENode();} 
;
/*CADENAS*/
string_aux: string_aux STRING  {}
 | STRING {}
;
listmaker: test listmaker_aux {}

;
listmaker_aux: list_for  {}
| lm_aux comaS {}

;
lm_aux: lm_aux COMA test  {}
|{}
;
testlist_comp: test testlist_comp_aux {}
;
testlist_comp_aux: comp_for  {}
| tc_aux comaS {}
;
tc_aux: tc_aux COMA test  {}
|{}
;
trailer: APAREN s20 CPAREN {}
 | ACORCHETE subscriptlist CCORCHETE  {}
| PUNTO IDENTIFICADOR {}
;
subscriptlist: subscript subscriptlist_aux comaS {}
;
subscriptlist_aux:subscriptlist_aux COMA subscript  {}
|{}
;
subscript: PUNTO PUNTO PUNTO  {}
| test  {}
| s21 DPUNTO s21 s22 {}
;
sliceop: DPUNTO s21 {}
;
exprlist: expr exprlist_aux comaS { $$=$2;}
;
exprlist_aux: exprlist_aux COMA expr  {
$$=$3;
}
|{
//Nada
}
;
testlist: test testlist_aux comaS {}
;
testlist_aux: testlist_aux COMA test  {}
|{}
;
dictorsetmaker: dictorsetmaker_aux_a  {}
| dictorsetmaker_aux_b {}
;
dictorsetmaker_aux_a: test DPUNTO test dsm_aux_a {}
;
dsm_aux_a: comp_for  {}
| dsm_aux_a_a comaS {}
;
dsm_aux_a_a: dsm_aux_a_a COMA test DPUNTO test  {}
|{}
;
dictorsetmaker_aux_b: test dsm_aux_b {}
;
dsm_aux_b: comp_for  {}
| dsm_aux_b_a comaS {}
;
dsm_aux_b_a: dsm_aux_b_a COMA test  {}
|{}
;
arglist: arglist_aux_a arglist_aux_b {}
;
arglist_aux_a: arglist_aux_a argument COMA  {}
|{}
;
arglist_aux_b: argument comaS  {}
| ASTERISCO test al_aux s25  {}
| DASTERISCO test {}
;
al_aux:al_aux COMA argument  {}
|{}
;
s25: COMA DASTERISCO test  {}
|{}
;
/*ARGUMENTOS*/
argument: test s26  {}
| test IGUAL test {}
;
s26: comp_for  {}
|{}
;
list_iter: list_for  {}
| list_if {}
;
list_for: FOR exprlist IN testlist_safe s27 {}
;
list_if: IF old_test s27 {}
;
s27: list_iter  {}
|{}
;
comp_iter: comp_for  {}
| comp_if {}
;
comp_for: FOR exprlist IN or_test s28 {}
;
comp_if: IF old_test s28 {}
;
s28: comp_iter  {}
|{}
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
yydebug = 0;
inicializar();
yyparse();
} while (!feof(yyin));
}

