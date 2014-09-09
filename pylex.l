%{
#include <iostream>

%}

%option noyywrap
%option outfile="pylex.cpp"

IDENTIFIER [a-zA-ZñÑ_][a-zA-ZñÑ_0-9]*
NUMBER [0-9]
STRING [[:isalnum:][:isblank:]]
NEWLINE [\n]
INDENT	[\t]
%%
{NUMBER} printf ("NUMBER ");
    
"-"{NUMBER}* printf("NUMBER ");
{NUMBER}+"."{NUMBER}* printf("NUMBER ");
if printf("IF ");
while     printf("WHILE ");
{INDENT}  printf("INDENT "); 
{NEWLINE} printf("NEWLINE\n");
{IDENTIFIER} printf("IDENTIFICADOR ");


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
