/*  Fernández Martínez José Ismael
    Trinidad Hernández Norma Verónica
    Vilchis Domínguez Miguel Alonso
    Proyecto 01
    Sept 2014
*/

%{
#include <iostream>
#include <stdio.h>
#include <string>
#include <stack>
#include "pypar.hpp"
#include "builder.cpp"
using namespace std;
%}

%option noyywrap
%option outfile="pylex.cpp"
%option stack
%x edo_poner_dedent
%x edo_poner_indent


COMMENT "#"[^\n]*
IDENTIFIER [a-zA-ZñÑ_][a-zA-ZñÑ_0-9]*
NATURAL [1-9][0-9]*
ENTERO [0]|{NATURAL}|[-]{NATURAL}
FLOTANTE {ENTERO}["."][0-9]*
NUMBER {FLOTANTE}|{ENTERO}
STRING "\""[^"]*"\""
NEWLINE [\n] 
     stack<int>pila; /*Pila auxiliar para manejar la indentación*/
    
     int num_lineas= 1; /*Guarda el número de líneas de código del programa*/
     int revisaIdentacion();
	void inicializar();
     bool lei = false; /*Variable que nos dice si ya hemos leído alguna línea de código*/
     int num_dedent;
%%


<edo_poner_dedent>"$" {
    num_dedent--;
    if(!num_dedent) yy_pop_state();
    return DEDENT;
}
<edo_poner_indent>"#" {
	yy_pop_state();
	return INDENT;
}

[\t ]*{COMMENT}{NEWLINE}|{NEWLINE}[\t ]*{COMMENT}{NEWLINE} {
    /*Identifica los comentarios*/ 
     yyless(yyleng-1);
}

{STRING} { 
    /*Identifica cadenas bien formadas*/
    lei = true;
    yylval.miUnion.cad = yytext;
    return STRING;
    
}

"\""[^"] {
    /*Identifica cadenas mal formadas*/
    printf("\n[Error: cadena mal formada]\n");
    yyterminate();
}



{ENTERO} {
    /*Identifica números*/
    lei =true;
    yylval.miUnion.numi = atoi(yytext);
    return ENTERO;
    
}

{FLOTANTE} {
    /*Identifica números*/
    lei =true;
    yylval.miUnion.numf = atof(yytext);
    return FLOTANTE;
    
}


print { 
    lei =true;
    yylval.miUnion.cad = "PRINT";
    return PRINT;
 }
False { 
    lei =true;
    yylval.miUnion.cad = "FALSE";
    return FALSE;

 }
class { 
    lei =true;
   yylval.miUnion.cad = "CLASS";
    return CLASS;
 }
finally { 
    lei =true;
    yylval.miUnion.cad = "FINALLY";
    return FINALLY;
}
is {  
    lei =true;
    yylval.miUnion.cad = "IS";
    return IS;
}
return { 
    lei =true;
    yylval.miUnion.cad = "RETURN";
    return RETURN;
}
None { 
    lei =true;
    yylval.miUnion.cad = "NONE";
    return NONE;
}
continue { 
    lei =true;
    yylval.miUnion.cad = "CONTINUE";
    return CONTINUE;
}
for { 
    lei =true;
    yylval.miUnion.cad = "FOR";
    return FOR;
}
lambda { 
    lei =true;
    yylval.miUnion.cad = "LAMBDA";
    return LAMBDA;
}
try { 
    lei =true;
    yylval.miUnion.cad = "TRY";
    return TRY;
}
True { 
    lei =true;
    yylval.miUnion.cad = "TRUE";
    return TRUE;
}
def { 
    lei =true;
    yylval.miUnion.cad = "DEF";
    return DEF;
}
from { 
    lei =true;
    yylval.miUnion.cad = "FROM";
    return FROM;
}
nonlocal { 
    lei =true;
    yylval.miUnion.cad = "NONLOCAL";
    return NONLOCAL;
}
while { 
    lei =true;
    yylval.miUnion.cad = "WHILE";
    return WHILE;
}
and { 
    lei =true;
    yylval.miUnion.cad = "AND";
    return AND;
}
del { 
    lei =true;
    yylval.miUnion.cad = "DEL";
    return DEL;
}
global { 
    lei =true;
    yylval.miUnion.cad = "GLOBAL";
    return GLOBAL;
}
not { 
    lei =true;
    yylval.miUnion.cad = "NOT";
    return NOT;
}
with { 
    lei =true;
    yylval.miUnion.cad = "WITH";
    return WITH;
}
as { 
    lei =true;
    yylval.miUnion.cad = "AS";
    return AS;
}
elif { 
    lei =true;
    yylval.miUnion.cad = "ELIF";
    return ELIF;
}
if { 
    lei =true;
    yylval.miUnion.cad = "IF";
    return IF;
}
or { 
    lei =true;
    yylval.miUnion.cad = "OR";
    return OR;
}
yield { 
    lei =true;
    yylval.miUnion.cad = "YIELD";
    return YIELD;
}
assert { 
    lei =true;
    yylval.miUnion.cad = "ASSERT";
    return ASSERT;
}
else { 
    lei =true;
    yylval.miUnion.cad = "ELSE";
    return ELSE;
}
import { 
    lei =true;
    yylval.miUnion.cad = "IMPORT";
    return IMPORT;
}
pass { 
    lei =true;
    yylval.miUnion.cad = "PASS";
    return PASS;
}
break { 
    lei =true;
    yylval.miUnion.cad = "BREAK";
    return BREAK;
}
except { 
    lei =true;
    yylval.miUnion.cad = "EXCEPT";
    return EXCEPT;
}
in { 
    lei =true;
    yylval.miUnion.cad = "IN";
    return IN;
}
raise { 
    lei =true;
    yylval.miUnion.cad = "RAISE";
    return RAISE;
}
    
{NEWLINE}[ \t]*{NEWLINE} {
    /*Filtra líneas en blanco*/
    string s = yytext;
    yyless(s.length()-1);
}

{NEWLINE}[\t ]* { 
        /*indentaciones*/
    	

        string s = yytext;
        if (s.compare("\n") && num_lineas == 1 && !lei){
            printf("\n[Error: La indentación inicial no es cero]\n" );
            yyterminate();
        }

        ++num_lineas;
        int n = revisaIdentacion();
        if(n==0) {
            printf("\n[Error de indentacion en la línea %d]\n", num_lineas);
            yyterminate();
        }
		if(num_lineas!=1 || lei){
            yylval.miUnion.car = '\n';
			return NEWLINE;
        }
        
		
}



[ \t]+ {
    if(lei){
        yylval.miUnion.cad = yytext;
        //return ESPTAB;
    }else{
        printf("\n[Error: La indentación inicial no es cero]\n");
        yyterminate();
    }
}

{IDENTIFIER} {
    lei = true;
    yylval.miUnion.cad = yytext;
    return IDENTIFICADOR;
    
}

">>=" { 
  lei =true;
    yylval.miUnion.cad = yytext;
    return DMAYORIGUAL;
    }
"<<=" { 
  lei =true;
    yylval.miUnion.cad = yytext;
    return DMENORIGUAL;
    }
"**=" {  
  lei =true;
    yylval.miUnion.cad = yytext;
    return DASTIGUAL;
    }
"//=" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return DDIAIGUAL;
    }

"**" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return DASTERISCO;
}

"//" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return DDIAG;
}

"<<" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return DMENOR;
}
">>" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return DMAYOR;
}
"<=" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return MEIGUAL;
}
">=" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return MAIGUAL;
}
"==" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return DIGUAL;
}
"!=" {  
    lei =true;
    yylval.miUnion.cad = yytext;
    return NIGUAL;
}
"<>" {  
    lei =true;
    yylval.miUnion.cad = yytext;
    return MENORMAYOR;
}


"->" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return MENOSMAYOR;
    }
"+=" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return MASIGUAL;
    }
"-=" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return MENOSIGUAL;
    }
"*=" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return ASTIGUAL;
    }
"/=" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return DIAIGUAL;
    }

"%=" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return PORIGUAL;
    }
"&=" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return AMPIGUAL;
    } 
"|=" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return PIPEIGUAL;
    }
"^=" { 
  lei =true;
    yylval.miUnion.cad = yytext;
    return CIRCIGUAL;
    }

"+" {
    lei =true;
    yylval.miUnion.cad = yytext;
    return MAS;

}
"-" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return MENOS;
}
"*" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return ASTERISCO;
}
"%" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return PORCEN;
}
"/" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return DIAG;
}

"&" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return AMPERSON;
}
"|" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return PIPE;
}
"^" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return CIRCUNFLEJO;
}
"~" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return ENETILDE;
}
"<" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return MENOR;
}
">" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return MAYOR;
}
"'" { 
 lei =true; 
 yylval.miUnion.cad=yytext; 
 return CSIMPLE; 
 } 
 "\"" { 
 lei =true; 
 yylval.miUnion.cad=yytext; 
 return IDIAG; 
 } 
 "#" { 
 lei =true; 
 yylval.miUnion.cad=yytext; 
 return GATO; 
 } 
 "\\" {
    lei = true;
    yylval.miUnion.cad = "\\";
    return DIDIAG;    
}

"(" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return APAREN;
    }
")" { 
    lei =true;
    yylval.miUnion.cad = yytext;
    return CPAREN;
    }
"[" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return ACORCHETE;
    }
"]" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return CCORCHETE;
}
"{" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return ALLAVE;
    }
"}" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return CLLAVE;
}
"," { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return COMA;
    }
":" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return DPUNTO;
    }
"." { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return PUNTO;
    }
";" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return PCOMA;
    }
"@" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return AT;
    }
"=" { 
 lei =true;
    yylval.miUnion.cad = yytext;
    return IGUAL;
    }


"$"|"?"|"`" {
    printf("Error: Caracter inválido\n");
    yyterminate();
}





%%
/*Función que revisa si la indentación es correcta*/
int revisaIdentacion() {
	 
    int indentacion = 0;
    string cadena = yytext;

    for(int i = 0;i < cadena.length();i++) {
       if( yytext[i] == '\t'){
           indentacion +=8 ;

      }else if (yytext[i]==' '){
           indentacion +=1;
	}

    }
    if(!pila.empty() && pila.top() < indentacion) {
        pila.push(indentacion);
        //printf("INDENT ");
		unput('#');
		yy_push_state(edo_poner_indent);
        return 1;
    }else if (!pila.empty() && pila.top() > indentacion){
        bool primero = true;
        num_dedent = 0;
        while(!pila.empty()) {
            if(!primero) {
                unput('$');
                num_dedent++;
                //printf("DEDENT ");
            }
            if(indentacion == pila.top()){ 
				yy_push_state(edo_poner_dedent);				
				return 2;
			}
            pila.pop();
            primero = false;

        }
        return 0;
    }
return 3;

}

void inicializar(){
	pila.push(0);
}



/*int main(int argc, char *argv[])
{
    ++argv, --argc;
    if(argc > 0) 
        yyin = fopen(argv[0], "r");
    else 
        yyin =stdin;
        pila.push(0);
    yylex();
} */
