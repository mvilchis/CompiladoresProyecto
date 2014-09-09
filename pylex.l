%{
#include <iostream>
#include <string>
using namespace std;
%}

%option noyywrap
%option outfile="pylex.cpp"

IDENTIFIER [a-zA-ZñÑ_][a-zA-ZñÑ_0-9]*
NUMBER [0-9]
STRING [a-zA-ZñÑ_ 0-9]*
NEWLINE [\n]
INDENT	[\t]

%%
"\""+{STRING}+"\"" printf("STRING ");
{NUMBER} printf ("NUMBER ");
"-"{NUMBER}* printf("NUMBER ");
{NUMBER}+"."{NUMBER}* printf("NUMBER ");

if|while|return  {
    string s = yytext; for(int i=0 ; i<s.length();i++) printf("%c",toupper(s[i]));
}

{INDENT}  printf("INDENT "); 
{NEWLINE} printf("NEWLINE\n");
{IDENTIFIER} printf("IDENTIFICADOR ");
"+"|"-"|"*"|"**"|"/"|"//"|"%"|"<<"|">>"|"&"|"|"|"^"|"~"|"<"|">"|"<="|">="|"=="|"!=" printf("%s", yytext); 
"'"|"\""|"#"|"\\" printf("%s", yytext);
"("|")"|"["|"]"|"{"|"}"|","|":"|"."|";"|"@"|"="|"->"|"+="|"-="|"*="|"/="|"//="|"%="|"&="|"|="|"^="|">>="|"<<="|"**=" printf("%s", yytext); 

%%
int main(int argc, char *argv[])
{
    /*Definimos la entrada*/
    ++argv, --argc;
    if(argc > 0) 
        yyin = fopen(argv[0], "r");
    else 
        yyin =stdin;
    yylex();
}
