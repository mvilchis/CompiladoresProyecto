%{
#include <iostream>
#include <string>
#include <stack>
using namespace std;
%}

%option noyywrap
%option outfile="pylex.cpp"



IDENTIFIER [a-zA-ZñÑ_][a-zA-ZñÑ_0-9]*
NUMBER [0-9]
STRING [a-zA-ZñÑ_ 0-9]*
NEWLINE [\n]
INDENT	[\t] 
     stack<int>pilita;
     int num_lineas= 1;
     bool revisaIdentacion();
%%
"\""+{STRING}+"\"" printf("STRING ");
"\""[^\"]"\"" printf("STRING ");
{NUMBER} printf ("NUMBER ");
"-"{NUMBER}* printf("NUMBER ");
{NUMBER}+"."{NUMBER}* printf("NUMBER ");

print|False|class|finally|is|return|None|continue|for|lambda|try|True|def|from|nonlocal|while|and|del|global|not|with|as|elif|if|or|yield|assert|else|import|pass|break|except|in|raise {
    string s = yytext; 
    for(int i=0 ; i<s.length();i++)
    	printf("%c",toupper(s[i]));
}

{INDENT}  printf("INDENT "); 
{NEWLINE}+[\t ]* { 
         ++num_lineas;
        if(revisaIdentacion() == false) {
            printf("\nError de indentacion en la línea %i\n", num_lineas);
            exit(1);
        }
        printf("NEWLINE\n");
        }
    
{IDENTIFIER} printf("IDENTIFICADOR ");
"+"|"-"|"*"|"**"|"/"|"//"|"%"|"<<"|">>"|"&"|"|"|"^"|"~"|"<"|">"|"<="|">="|"=="|"!=" printf("%s", yytext); 
"'"|"\""|"#"|"\\" printf("%s", yytext);
"("|")"|"["|"]"|"{"|"}"|","|":"|"."|";"|"@"|"="|"->"|"+="|"-="|"*="|"/="|"//="|"%="|"&="|"|="|"^="|">>="|"<<="|"**=" printf("%s", yytext); 

"$"|"?"|"`" printf("Error: Caracter inválido");

%%
bool revisaIdentacion() {
    int identacion = 0;
    string cadena = yytext;

    for(int i = 0;i < cadena.length()  ; i++) {
       if( yytext[i] == '\t')
           identacion +=8 ;
           else if (yytext[i]==' ')
               identacion +=1;

    }
    if(!pilita.empty()&&pilita.top() < identacion) {
        pilita.push(identacion);
        return true;
    }else {
        bool primero = true;
        while(!pilita.empty()) {
            if(!primero) {
                printf("DEDENT");
            }
            if(identacion == pilita.top()) return true;
            pilita.pop();
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
        pilita.push(0);
    yylex();
   // printf("\nNumero de lineas%i\n", num_lines);
}
