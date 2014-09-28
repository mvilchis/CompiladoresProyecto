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
%token <cad> PRINT FALSE CLASS FINALLY IS RETURN NONE CONTINUE FOR LAMBDA TRY TRUE DEF FROM NONLOCAL WHILE AND DEL GLOBAL NOT WITH AS ELIF IF OR YIELD ASSERT ELSE IMPORT PASS BREAK EXCEPT IN RAISE 
%token <cad> NIGUAL DIGUAL MAIGUAL MEIGUAL MAYOR MENOR ENETILDE CIRCUNFLEJO PIPE AMPERSON DMAYOR DMENOR PORCEN DDIAG DIAG DASTERISCO ASTERISCO MENOS MAS
%token <cad> APAREN ACORCHETE CCORCHETE ALLAVE CLLAVE COMA DPUNTO PUNTO PCOMA AT IGUAL MENOSMAYOR MASIGUAL MENOSIGUAL ASTIGUAL DIAIGUAL DDIAIGUAL PORIGUAL AMPIGUAL CIRCIGUAL DMAYORIGUAL DMENORIGUAL DASTIGUAL
%token <cad> CSIMPLE IDIAG GATO DIDIAG 
%token <car> NEWLINE
%token <numi> ENTERO
%token <numf> FLOTANTE
%token <cad> IDENT SALIDA
%token FIN 

%%


GOAL: PRINT    {printf ("MURIO");return 0;}

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
