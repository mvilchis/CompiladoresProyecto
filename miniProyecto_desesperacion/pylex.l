/* Fernández Martínez José Ismael
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
//#include "builder.cpp"
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
	int num_lineas= 1; /*Guarda el número de líneas de código del programa*/	int revisaIdentacion();
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
yylval.cad = yytext;
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
yylval.numi = atoi(yytext);
return ENTERO;
}
{FLOTANTE} {
/*Identifica números*/
lei =true;
yylval.numf = atof(yytext);
return FLOTANTE;
}
print {
lei =true;
return PRINT;
}
False {
lei =true;
return FALSE;
}
finally {
lei =true;
return FINALLY;
}
is {
lei =true;
return IS;
}
return {
lei =true;
return RETURN;
}
continue {
lei =true;
return CONTINUE;
}
for {
lei =true;
return FOR;
}
True {
lei =true;
return TRUE;
}
def {
lei =true;
return DEF;
}
from {
lei =true;
return FROM;
}
nonlocal {
lei =true;
return NONLOCAL;
}
while {
lei =true;
return WHILE;
}
and {
lei =true;
return AND;
}
del {
lei =true;
return DEL;
}
global {
lei =true;
return GLOBAL;
}
not {
lei =true;
return NOT;
}
with {
lei =true;
return WITH;
}
as {
lei =true;
return AS;
}
elif {
lei =true;
return ELIF;
}
if {
lei =true;
return IF;
}
or {
lei =true;
return OR;
}
yield {
lei =true;
return YIELD;
}
assert {
lei =true;
return ASSERT;
}
else {
lei =true;
return ELSE;
}
import {
lei =true;
return IMPORT;
}
pass {
lei =true;
return PASS;
}
break {
lei =true;
return BREAK;
}
in {
lei =true;
return IN;
}
raise {
lei =true;
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
return NEWLINE;
}
}
[ \t]+ {
if(lei){
yylval.cad = yytext;
//return ESPTAB;
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
">>=" {
lei =true;
return DMAYORIGUAL;
}
"<<=" {
lei =true;
return DMENORIGUAL;
}
"**=" {
lei =true;
return DASTIGUAL;
}
"//=" {
lei =true;
return DDIAIGUAL;
}
"**" {
lei =true;
return DASTERISCO;
}
"//" {
lei =true;
return DDIAG;
}
"<<" {
lei =true;
return DMENOR;
}
">>" {
lei =true;
return DMAYOR;
}
"<=" {
lei =true;
return MEIGUAL;
}
">=" {
lei =true;
return MAIGUAL;
}
"==" {
lei =true;
return DIGUAL;
}
"!=" {
lei =true;
return NIGUAL;
}
"<>" {
lei =true;
return MENORMAYOR;
}
"->" {
lei =true;
return MENOSMAYOR;
}
"+=" {
lei =true;
return MASIGUAL;
}
"-=" {
lei =true;
return MENOSIGUAL;
}
"*=" {
lei =true;
return ASTIGUAL;
}
"/=" {
lei =true;
return DIAIGUAL;
}
"%=" {
lei =true;
return PORIGUAL;
}
"&=" {
lei =true;
return AMPIGUAL;
}
"|=" {
lei =true;
return PIPEIGUAL;
}
"^=" {
lei =true;
return CIRCIGUAL;
}
"+" {
lei =true;
return MAS;
}
"-" {
lei =true;
return MENOS;
}
"*" {
lei =true;
return ASTERISCO;
}
"%" {
lei =true;
return PORCEN;
}
"/" {
lei =true;
return DIAG;
}
"&" {
lei =true;
return AMPERSON;
}
"|" {
lei =true;
return PIPE;
}
"^" {
lei =true;
return CIRCUNFLEJO;
}
"~" {
lei =true;
return ENETILDE;
}
"<" {
lei =true;
return MENOR;
}
">" {
lei =true;
return MAYOR;
}
"'" {
lei =true;
return CSIMPLE;
}
"\"" {
lei =true;
return IDIAG;
}
"#" {
lei =true;
return GATO;
}
"\\" {
lei = true;
return DIDIAG;
}
"(" {
lei =true;
return APAREN;
}
")" {
lei =true;
return CPAREN;
}
"[" {
lei =true;
return ACORCHETE;
}
"]" {
lei =true;
return CCORCHETE;
}
"{" {
lei =true;
return ALLAVE;
}
"}" {
lei =true;
return CLLAVE;
}
"," {
lei =true;
return COMA;
}
":" {
lei =true;
return DPUNTO;
}
"." {
lei =true;
return PUNTO;
}
";" {
lei =true;
return PCOMA;
}
"@" {
lei =true;
return AT;
}
"=" {
lei =true;
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

