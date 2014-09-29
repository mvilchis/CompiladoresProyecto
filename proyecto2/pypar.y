%{

#include <stdio.h>
#include <string>
using namespace std;

int yylex(); 
int yyerror(const char *s) { printf ("Error: %s\n", s); return 1;}
%}

%union {
  int numi;
  float numf;
  const char* cad;
  char car;
};

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



single_input: NEWLINE 
| simple_stmt 
| compound_stmt NEWLINE
;

file_input: file_input_aux FIN
;

file_input_aux: fi_aux 
| %empty
;

fi_aux: fi_aux file_input_aux 
| NEWLINE 
| stmt
;

eval_input: testlist eval_input_aux FIN
;

eval_input_aux: ei_aux 
| %empty
;

ei_aux: ei_aux eval_input_aux 
| NEWLINE 
;

decorator: AT dotted_name decorator_aux NEWLINE;
decorator_aux: %empty 
| APAREN d_aux CPAREN
;
d_aux: %empty
|arglist
;

decorators: decorators decorator 
| decorator
;

decorated: decorators decorated_aux
;

decorated_aux: classdef 
| funcdef
;

funcdef: DEF IDENTIFICADOR parameters DPUNTO suite
;

parameters: APAREN parameters_aux CPAREN
;
parameters_aux: %empty
| varargslist
;

varargslist: varargslist_a
| varargslist_b
;

varargslist_a: varargslist_a_aux_a varargslist_a_aux_b
;

varargslist_a_aux_a: varargslist_a_aux_a fpdef val_aux_a COMA 
| %empty
;
val_aux_a: IGUAL test
|%empty
;

varargslist_a_aux_b: ASTERISCO IDENTIFICADOR val_aux_b 
| DASTERISCO IDENTIFICADOR
;
val_aux_b: COMA DASTERISCO IDENTIFICADOR
|%empty
;

varargslist_b: fpdef val_aux_a varargslist_b_aux val_b
;
val_b: COMA
|%empty
;

varargslist_b_aux: varargslist_b_aux COMA fpdef val_aux_a 
| %empty
;

fpdef: IDENTIFICADOR
| APAREN fplist CPAREN
;

fplist: fpdef fplist_aux fpl_aux
fpl_aux: COMA
|%empty
;

fplist_aux:  fp_aux
| %empty
;

fp_aux: fp_aux fplist_aux
| COMA fpdef
;

stmt: simple_stmt 
| compound_stmt
;

simple_stmt: small_stmt simple_stmt_aux ss_aux NEWLINE
;
ss_aux: PCOMA
|%empty
;
simple_stmt_aux: simple_stmt_aux PCOMA small_stmt 
| %empty
;
small_stmt: expr_stmt
| print_stmt
| del_stmt
| pass_stmt
| flow_stmt
| import_stmt
| global_stmt
| exec_stmt
| assert_stmt
;
expr_stmt: testlist augassign expr_stmt
| expr_stmt_aux_b
;
expr_stmt_aux_a: yield_expr 
| testlist
;
expr_stmt_aux_b:  expr_stmt_aux_b IGUAL es_aux_b
| %empty
; 
es_aux_b: yield_expr
| testlist
;

augassign: MASIGUAL
| MENOSIGUAL
| ASTIGUAL 
| DIAIGUAL 
| PORIGUAL 
| AMPIGUAL 
| PIPEIGUAL 
| CIRCIGUAL 
| DMENORIGUAL 
| DMAYORIGUAL 
| DASTIGUAL 
| DDIAIGUAL
;
print_stmt: PRINT  s1 
| DMAYOR test s2
;
print_stmt_aux_a: print_stmt_aux_a COMA test 
| %empty
;
print_stmt_aux_b: print_stmt_aux_b COMA test 
| COMA test
;

s1: test print_stmt_aux_a s2 
| %empty
;
comaS: %empty 
| COMA
;

s2: print_stmt_aux_b comaS 
;

del_stmt: DEL exprlist
;
pass_stmt: PASS
;
flow_stmt: break_stmt 
| continue_stmt 
| return_stmt 
| raise_stmt 
| yield_stmt
;
break_stmt: BREAK
;
continue_stmt: CONTINUE
;
return_stmt: RETURN s24
;
yield_stmt: yield_expr
;
raise_stmt: RAISE s3
;
import_stmt: import_name | import_from
; 
import_name: IMPORT dotted_as_names
;
import_from: FROM import_from_aux_a IMPORT import_from_aux_b
;
import_from_aux_a: import_punto_kleene dotted_name 
| import_punto_mas
;
import_punto_kleene: import_punto_kleene PUNTO 
| %empty
;
import_punto_mas: import_punto_mas PUNTO 
| PUNTO
;
import_from_aux_b: ASTERISCO 
| APAREN import_as_names CPAREN 
| import_as_names
;
s3: test s4 
| %empty
;
s4: COMA test s5
| %empty
;
s5: COMA test 
| %empty 
;
import_as_name: IDENTIFICADOR s6
;
dotted_as_name: dotted_name s6
;
import_as_names: import_as_name import_as_names_aux comaS
;
import_as_names_aux: import_as_names_aux COMA import_as_name | %empty
;
dotted_as_names: dotted_as_name dotted_as_names_aux
;
dotted_as_names_aux: dotted_as_names_aux COMA dotted_as_name | %empty
;
dotted_name: IDENTIFICADOR dotted_name_aux
;
dotted_name_aux: dotted_name_aux PUNTO IDENTIFICADOR | %empty
;
global_stmt: GLOBAL IDENTIFICADOR global_stmt_aux
;
global_stmt_aux: global_stmt_aux COMA IDENTIFICADOR | %empty
;
exec_stmt: EXEC expr s7
;
assert_stmt: ASSERT test s5
;
s6: AS IDENTIFICADOR | %empty
;
s7: IN test s5 | %empty 
;

compound_stmt: 
if_stmt 
| while_stmt 
| for_stmt 
| try_stmt 
| with_stmt 
| funcdef 
| classdef 
| decorated
;
if_stmt: IF test DPUNTO suite if_stmt_aux s8
;
if_stmt_aux: if_stmt_aux ELIF test DPUNTO suite | %empty
;
s8: ELSE DPUNTO suite | %empty 
;
while_stmt: WHILE test DPUNTO suite s8
;
for_stmt: FOR exprlist IN testlist DPUNTO suite s8
;
try_stmt: TRY DPUNTO suite try_stmt_aux
;
try_stmt_aux: ts_aux s8 s9 | FINALLY DPUNTO suite
;
ts_aux: ts_aux except_clause DPUNTO suite | except_clause DPUNTO suite
;
s9: FINALLY DPUNTO suite | %empty
;
with_stmt: WITH with_item with_stmt_aux  DPUNTO suite
;
with_stmt_aux: with_stmt_aux COMA with_item | %empty
;
with_item: test s10
;
s10: AS expr | %empty 
;
except_clause: EXCEPT s11
;
except_clause_aux: AS | COMA
;
suite: simple_stmt | NEWLINE INDENT suite_aux DEDENT
;
suite_aux: suite_aux stmt | stmt
;
s11: test s12 | %empty
;
s12: except_clause_aux test | %empty
;
testlist_safe: old_test s13
             testlist_safe_aux: testlist_safe_aux COMA old_test | COMA old_test
             old_test: or_test | old_lambdef
             old_lambdef: LAMBDA s14  DPUNTO old_test

s13: testlist_safe_aux comaS| %empty
s14: varargslist| %empty
s15: IF or_test ELSE test |  %empty
test: or_test s15 | lambdef
    or_test: and_test or_test_aux
    or_test_aux: or_test_aux OR and_test | %empty
    and_test: not_test and_test_aux
    and_test_aux: and_test_aux AND not_test | %empty
    not_test: NOT not_test | comparison
    comparison: expr comparison_aux
    comparison_aux: comparison_aux comp_op expr | %empty
    comp_op: MENOR|MAYOR|DIGUAL|MAIGUAL|MEIGUAL|MENORMAYOR|NIGUAL|NOT|NOT IN|IS|IS NOT
    expr: xor_expr expr_aux
    expr_aux: expr_aux PIPE xor_expr | %empty
    xor_expr: and_expr xor_expr_aux
    xor_expr_aux: xor_expr_aux CIRCUNFLEJO and_expr | %empty
    and_expr: shift_expr shift_expr_aux
    and_expr_aux: and_expr_aux AMPERSON shift_expr | %empty
    shift_expr: arith_expr shift_expr_aux
    shift_expr_aux: shift_expr shift_sim arith_expr | %empty
    shift_sim: DMENOR | DMAYOR
    arith_expr: term arith_expr_aux
    arith_expr_aux: arith_expr_aux ae_aux term | %empty
    ae_aux: MAS | MENOS
    term: factor term_aux
    term_aux:  term_aux t_aux factor | %empty
    t_aux: ASTERISCO | DIAG | PORCEN | DDIAG  
    factor: factor_aux factor | power
    factor_aux: MAS | MENOS | ENETILDE
    power: atom power_aux s16

s16: DASTERISCO factor | %empty
s17: yield_expr|testlist_comp | %empty
s18: listmaker | %empty
s19: dictorsetmaker | %empty
s20: arglist | %empty
s21: test | %empty
s22: sliceop | %empty
    power_aux: power_aux trailer | %empty
    atom: APAREN s17 CPAREN |
           ACORCHETE s18 CCORCHETE |
                  ALLAVE s19 CLLAVE |
                         '`' testlist1 '`' |
                                IDENTIFICADOR | FLOTANTE | ENTERO | string_aux
                                string_aux: string_aux STRING | STRING
                                listmaker: test listmaker_aux
                                listmaker_aux: list_for | lm_aux comaS
                                lm_aux: lm_aux COMA test | %empty
                                testlist_comp: test testlist_comp_aux
                                testlist_comp_aux: comp_for | tc_aux comaS
                                tc_aux: tc_aux COMA test | %empty
                                lambdef: LAMBDA s14  DPUNTO test
                                trailer: APAREN s20 CPAREN | ACORCHETE subscriptlist CCORCHETE | PUNTO IDENTIFICADOR
                                subscriptlist: subscript subscriptlist_aux COMA
                                subscriptlist_aux: subscriptlist_aux COMA subscript | %empty
                                subscript: PUNTO PUNTO PUNTO | test | s21 DPUNTO s21 s22
                                sliceop: DPUNTO s21
                                exprlist: expr exprlist_aux comaS
                                exprlist_aux: exprlist_aux COMA expr | %empty
                                testlist: test testlist_aux comaS
                                testlist_aux: testlist_aux COMA test | %empty
                                dictorsetmaker:  dictorsetmaker_aux_a | dictorsetmaker_aux_b

dictorsetmaker_aux_a: test DPUNTO test dsm_aux_a
                    dsm_aux_a: comp_for | dsm_aux_a_a comaS
                                                dsm_aux_a_a: dsm_aux_a_a COMA test DPUNTO test | %empty
                                                dictorsetmaker_aux_b: test dsm_aux_b
                                                dsm_aux_b: comp_for | dsm_aux_b_a comaS
                                                dsm_aux_b_a: dsm_aux_b_a COMA test | %empty



s23: APAREN s24 CPAREN |%empty 
s24: testlist | %empty
classdef: CLASS IDENTIFICADOR s23 DPUNTO suite

arglist: arglist_aux_a arglist_aux_b
       arglist_aux_a: arglist_aux_a argument COMA | %empty
       arglist_aux_b: argument comaS | ASTERISCO test al_aux s25 | DASTERISCO test
       al_aux: al_aux COMA argument | %empty

s25: COMA DASTERISCO test | %empty

argument: test s26 | test IGUAL test
s26: comp_for | %empty

list_iter: list_for | list_if
         list_for: FOR exprlist IN testlist_safe s27
         list_if: IF old_test s27
s27: list_iter | %empty 
comp_iter: comp_for | comp_if
         comp_for: FOR exprlist IN or_test s28
         comp_if: IF old_test s28
s28: comp_iter | %empty 

testlist1: test testlist1_aux
         testlist1_aux: testlist1_aux COMA test | %empty

yield_expr: YIELD s24

%%

int main(int argc, char *argv[]) {
    /*++argv, --argc;
    if(argc > 0) {
        yyin = fopen(argv[0],"r");
    }else  {
    yyin =stdin;

    }*/

	yyparse();

	return 0;
}
