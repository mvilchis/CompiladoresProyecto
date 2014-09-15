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
INDENT	[\t] 
     stack<int>pilita;
     int num_lineas= 1;
     bool primer_texto = false;
     bool revisaIdentacion();
     bool checa_inicial();
%%


[\t ]*{COMMENT}{NEWLINE}|{NEWLINE}[\t ]*{COMMENT}{NEWLINE} {
            if(num_lineas>1)yyless(yyleng-1);
        
        }
{STRING} printf("STRING ");
"\""[^"] {printf("\n[Error: cadena mal formada]\n"); yyterminate();}
{NUMBER} printf ("NUMBER ");
"-"{NUMBER}* printf("NUMBER ");
{NUMBER}+"."{NUMBER}* printf("NUMBER ");

print|False|class|finally|is|return|None|continue|for|lambda|try|True|def|from|nonlocal|while|and|del|global|not|with|as|elif|if|or|yield|assert|else|import|pass|break|except|in|raise {
    string s = yytext; 
    for(int i=0 ; i<s.length();i++)
    	printf("%c",toupper(s[i]));
    printf(" ");
}
{NEWLINE}[ \t]*{NEWLINE} {
    //printf("%d\n",num_lineas);
        if(num_lineas>1){
            string s = yytext;
            yyless(s.length()-1);
        }
}

{NEWLINE}[\t ]* { 
         ++num_lineas;
        printf("NEWLINE\n");
        if(revisaIdentacion() == false) {
            printf("\n[Error de indentacion en la línea %d]\n", num_lineas);
            yyterminate();
        }
        
        }
{IDENTIFIER} printf("IDENTIFICADOR ");
"+"|"-"|"*"|"**"|"/"|"//"|"%"|"<<"|">>"|"&"|"|"|"^"|"~"|"<"|">"|"<="|">="|"=="|"!=" {printf("%s", yytext); printf(" ");
} 
"'"|"\""|"#"|"\\" printf("%s", yytext);
"("|")"|"["|"]"|"{"|"}"|","|":"|"."|";"|"@"|"="|"->"|"+="|"-="|"*="|"/="|"//="|"%="|"&="|"|="|"^="|">>="|"<<="|"**=" {printf("%s", yytext);printf(" ");} 

"$"|"?"|"`" {printf("Error: Caracter inválido\n");yyterminate();}

<<EOF>> {printf("\n");yyterminate();}

%%

bool checa_inicial(){
    string cadena = yytext;

    if(cadena.length()>0){
        //printf("Error: La indentación de la primera línea de código debe ser cero\n");
        return false;
    }
    return true;
}
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
        //printf("Tope: %d identacion %d\n",pilita.top(),identacion);
        pilita.push(identacion);
        printf("INDENT ");
        return true;
    }else {
        bool primero = true;
        while(!pilita.empty()) {
            if(!primero) {
                printf("DEDENT ");
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
