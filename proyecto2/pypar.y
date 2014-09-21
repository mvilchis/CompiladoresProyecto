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
  string cad;
  char car;
};

%token <cad> STRING RESERVADA ESPTAB OPERADOR IDENTIFICADOR COSA
%token <car> ESPECIAL NEWLINE
%token <numi> NUMBER
%token FIN 
%type <num> GOAL EXP

%%
GOAL: EXP SALTO GOAL | SALIR {printf("Ejecución terminada\n");return 0;} 

EXP: NUM 		{$$=$1;}
| EXP SUM EXP	{$$ = $1 + $3;}
| EXP RES EXP	{$$ = $1 - $3;}
| EXP MUL EXP	{$$ = $1 * $3;}
| EXP DIV EXP	{$$ = $1 / $3;}

%%

int main() {
  
	yyparse();

	return 0;
}