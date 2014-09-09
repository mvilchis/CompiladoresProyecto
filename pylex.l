%{
#include <iostream>

%}

%option noyywrap
%option outfile="pylex.cpp"

IDENTIFIER [a-zA-ZñÑ_][a-zA-ZñÑ_0-9]*
NUMBER [0-9]
STRING [[:isalnum:][:isblank:]]
NEWLINE [\n]
INDENT	[.\t]


%%

%%
int main(int argc, char *argv[])
{
    yylex();
}