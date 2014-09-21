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
using namespace std;
%}

%option noyywrap
%option outfile="pylex.cpp"


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
     void revisaIdentacion();
     bool lei = false; /*Variable que nos dice si ya hemos leído alguna línea de código*/
     bool indentacion_correcta = true;
%%


[\t ]*{COMMENT}{NEWLINE}|{NEWLINE}[\t ]*{COMMENT}{NEWLINE} {
    /*Identifica los comentarios*/ 
     yyless(yyleng-1);
}

{STRING} { 
    /*Identifica cadenas bien formadas*/
    lei = true;
    yylval.cad = yytext;
    return STRING;
    
}

"\""[^"] {
    /*Identifica cadenas mal formadas*/
    printf("\n[Error: cadena mal formada]\n");
    yyterminate();
}

{NUMBER} {
    /*Identifica números*/
    lei =true;
    /*Aqui hay que ver que tipo de numero es para saber q yylval asignamos*/
    return NUMBER;
    
}


print|False|class|finally|is|return|None|continue|for|lambda|try|True|def|from|nonlocal|while|and|del|global|not|with|as|elif|if|or|yield|assert|else|import|pass|break|except|in|raise {
    string s = yytext; 
    lei =true;
    for(int i=0 ; i<s.length();i++)
    	s[i] = toupper(s[i]);
    yylval.cad =  s;
    return RESERVADA;
    
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
        revisaIdentacion();
        if(!indentacion_correcta) {
            printf("\n[Error de indentacion en la línea %d]\n", num_lineas);
            yyterminate();
        }

        if(num_lineas!=1 || lei){
            yylval.car = '\n';
            return NEWLINE;
        }
            


}

[ \t]+ {
    if(lei){
        yylval.cad = yytext;
        return ESPTAB;
    }else{
        printf("\n[Error: La indentación inicial no es cero]\n");
        yyterminate();
    }
}

{IDENTIFIER} {
    lei = true;
    yylval.cad = yytext;
    return IDENTIFICADOR;
    
}

"+"|"-"|"*"|"**"|"/"|"//"|"%"|"<<"|">>"|"&"|"|"|"^"|"~"|"<"|">"|"<="|">="|"=="|"!=" {
    lei =true;
    yylval.cad = yytext;
    return OPERADOR;
    
} 

"'"|"\""|"#"|"\\" {
    lei = true;
    yylval. car = yytext;
    return ESPECIAL;   
}

"("|")"|"["|"]"|"{"|"}"|","|":"|"."|";"|"@"|"="|"->"|"+="|"-="|"*="|"/="|"//="|"%="|"&="|"|="|"^="|">>="|"<<="|"**=" {
    lei =true;
    yylval.cad ) yytext;
    return COSA;
    
} 

"$"|"?"|"`" {
    printf("Error: Caracter inválido\n");
    yyterminate();
}

<<EOF>> {
    return FIN;
}

%%

/*Función que revisa si la indentación es correcta*/
void revisaIdentacion() {
    int indentacion = 0;
    string cadena = yytext;
    string salida;

    for(int i = 0;i < cadena.length();i++) {
       if( yytext[i] == '\t')
           indentacion +=8 ;
           else if (yytext[i]==' ')
               indentacion +=1;

    }
    if(!pila.empty() && pila.top() < indentacion) {
        pila.push(indentacion);
        yylval.cad = cadena; 
        indentacion_correcta = true;
        return INDENT;
    }else {
        bool primero = true;
        while(!pila.empty()) {
            if(!primero) {
                salida+="DEDENT";
            }
            if(indentacion == pila.top()){ 
                indentacion_correcta = true;
                return SALIDA;
            }
            pila.pop();
            primero = false;

        }
        indentacion_correcta = false;
    }
    

}

int main(int argc, char *argv[])
{
    /*Definimos la entrada*/
    ++argv, --argc;
    if(argc > 0) 
        yyin = fopen(argv[0], "r");
    else 
        yyin =stdin;
        pila.push(0);
    yylex();
}
