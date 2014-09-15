%{
#include <iostream>
#include <string>
#include <stack>
using namespace std;
%}

%option noyywrap
%option outfile="pylex.cpp"


COMMENT "#"[^\n]*
IDENTIFIER [a-zA-ZñÑ_][a-zA-ZñÑ_0-9]*
NUMBER [0-9]*
STRING "\""[^"]*"\""
NEWLINE [\n]
     stack<int>pila;
     int num_lineas= 1;
     bool revisaIdentacion();
     bool lei = false;
%%


[\t ]*{COMMENT}{NEWLINE}|{NEWLINE}[\t ]*{COMMENT}{NEWLINE} {
              yyless(yyleng-1);
}

{STRING} { 
    printf("STRING ");
    lei = true;
}

"\""[^"] {
    printf("\n[Error: cadena mal formada]\n");
    yyterminate();
}

{NUMBER} {
    printf ("NUMBER ");
    lei =true;
}

"-"{NUMBER}* {
    printf ("NUMBER ");
    lei =true;
}
{NUMBER}+"."{NUMBER}* {
    printf ("NUMBER ");
    lei =true;
}

print|False|class|finally|is|return|None|continue|for|lambda|try|True|def|from|nonlocal|while|and|del|global|not|with|as|elif|if|or|yield|assert|else|import|pass|break|except|in|raise {
    string s = yytext; 
    for(int i=0 ; i<s.length();i++)
    	printf("%c",toupper(s[i]));
    printf(" ");
    lei =true;
}

{NEWLINE}[ \t]*{NEWLINE} {
    string s = yytext;
    yyless(s.length()-1);
}

{NEWLINE}[\t ]* { 
        
        if(num_lineas!=1 || lei)
            printf("NEWLINE\n");

        string s = yytext;
        if (s.compare("\n") && num_lineas == 1 && !lei){
            printf("\n[Error: La indentación inicial no es cero]\n" );
            yyterminate();
        }

        ++num_lineas;

        if(revisaIdentacion() == false) {
            printf("\n[Error de indentacion en la línea %d]\n", num_lineas);
            yyterminate();
        }
}

[ \t]+ {
    if(lei){
        printf("%s",yytext );
    }else{
        printf("\n[Error: La indentación inicial no es cero]\n");
        yyterminate();
    }
}

{IDENTIFIER} {
    printf("IDENTIFICADOR ");
    lei = true;
}

"+"|"-"|"*"|"**"|"/"|"//"|"%"|"<<"|">>"|"&"|"|"|"^"|"~"|"<"|">"|"<="|">="|"=="|"!=" {
    printf("%s",yytext);
    printf(" ");
    lei =true;
} 

"'"|"\""|"#"|"\\" {
    printf("%s", yytext);
    lei = true;
}

"("|")"|"["|"]"|"{"|"}"|","|":"|"."|";"|"@"|"="|"->"|"+="|"-="|"*="|"/="|"//="|"%="|"&="|"|="|"^="|">>="|"<<="|"**=" {
    printf("%s ", yytext);
    lei =true;
} 

"$"|"?"|"`" {
    printf("Error: Caracter inválido\n");
    yyterminate();
}

<<EOF>> {
    printf("\n");
    yyterminate();
}

%%

bool revisaIdentacion() {
    int indentacion = 0;
    string cadena = yytext;

    for(int i = 0;i < cadena.length();i++) {
       if( yytext[i] == '\t')
           indentacion +=8 ;
           else if (yytext[i]==' ')
               indentacion +=1;

    }
    if(!pila.empty() && pila.top() < indentacion) {
        pila.push(indentacion);
        printf("INDENT ");
        return true;
    }else {
        bool primero = true;
        while(!pila.empty()) {
            if(!primero) {
                printf("DEDENT ");
            }
            if(indentacion == pila.top()) return true;
            pila.pop();
            primero = false;

        }
        return false;
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
   // printf("\nNumero de lineas%i\n", num_lines);
}
