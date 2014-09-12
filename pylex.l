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
STRING [^\"]*
NEWLINE [\n]
INDENT	[\t] 
     stack<int>pilita;
     
     int num_lineas= 0;
%%
"\""{STRING}"\"" printf("STRING ");

{NUMBER} printf ("NUMBER ");
"-"{NUMBER}* printf("NUMBER ");
{NUMBER}+"."{NUMBER}* printf("NUMBER ");
.           

return|for|while|if|else{/*Crean bloques*/
    pilita.push(pilita.top()+1);

string s = yytext; 
    for(int i=0 ; i<s.length();i++)
        printf("%c",toupper(s[i]));
}
else {/*Deshace bloques*/
string s = yytext; 
    for(int i=0 ; i<s.length();i++)
        printf("%c",toupper(s[i]));
}
print|False|class|finally|is|None|continue|lambda|try|True|def|from|nonlocal|and|del|global|not|with|as|elif|or|yield|assert|import|pass|break|except|in|raise {
    string s = yytext; 
    for(int i=0 ; i<s.length();i++)
    	printf("%c",toupper(s[i]));
}

{INDENT}  printf("INDENT "); 
        /* pilita.push()*/
{NEWLINE} {printf("NEWLINE\n");
         ++num_lineas;
        }
{IDENTIFIER} printf("IDENTIFICADOR ");
"+"|"-"|"*"|"**"|"/"|"//"|"%"|"<<"|">>"|"&"|"|"|"^"|"~"|"<"|">"|"<="|">="|"=="|"!=" printf("%s", yytext); 
"'"|"\""|"#"|"\\" printf("%s", yytext);
"("|")"|"["|"]"|"{"|"}"|","|":"|"."|";"|"@"|"="|"->"|"+="|"-="|"*="|"/="|"//="|"%="|"&="|"|="|"^="|">>="|"<<="|"**=" printf("%s", yytext); 

"$"|"?"|"`" printf("Error: Caracter inválido");


%%
int main(int argc, char *argv[])
{
    /*Definimos la entrada*/
    ++argv, --argc;
    pilita.push(0);
    if(argc > 0) 
        yyin = fopen(argv[0], "r");
    else 
        yyin =stdin;
    yylex();
   printf("\nNumero de lineas%i\n", pilita.top());
}
