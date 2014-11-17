/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     ESPTAB = 259,
     OPERADOR = 260,
     IDENTIFICADOR = 261,
     PRINT = 262,
     FALSE = 263,
     CLASS = 264,
     FINALLY = 265,
     IS = 266,
     RETURN = 267,
     NONE = 268,
     CONTINUE = 269,
     FOR = 270,
     LAMBDA = 271,
     TRY = 272,
     TRUE = 273,
     DEF = 274,
     FROM = 275,
     NONLOCAL = 276,
     WHILE = 277,
     AND = 278,
     DEL = 279,
     GLOBAL = 280,
     NOT = 281,
     WITH = 282,
     AS = 283,
     ELIF = 284,
     IF = 285,
     OR = 286,
     YIELD = 287,
     ASSERT = 288,
     ELSE = 289,
     IMPORT = 290,
     PASS = 291,
     BREAK = 292,
     EXCEPT = 293,
     IN = 294,
     RAISE = 295,
     EXEC = 296,
     NIGUAL = 297,
     DIGUAL = 298,
     MAIGUAL = 299,
     MEIGUAL = 300,
     MAYOR = 301,
     MENOR = 302,
     ENETILDE = 303,
     CIRCUNFLEJO = 304,
     PIPE = 305,
     AMPERSON = 306,
     DMAYOR = 307,
     DMENOR = 308,
     PORCEN = 309,
     DDIAG = 310,
     DIAG = 311,
     DASTERISCO = 312,
     ASTERISCO = 313,
     MENOS = 314,
     MAS = 315,
     APAREN = 316,
     CPAREN = 317,
     ACORCHETE = 318,
     CCORCHETE = 319,
     ALLAVE = 320,
     CLLAVE = 321,
     COMA = 322,
     DPUNTO = 323,
     PUNTO = 324,
     PCOMA = 325,
     AT = 326,
     IGUAL = 327,
     MENOSMAYOR = 328,
     MASIGUAL = 329,
     MENOSIGUAL = 330,
     ASTIGUAL = 331,
     DIAIGUAL = 332,
     DDIAIGUAL = 333,
     PORIGUAL = 334,
     AMPIGUAL = 335,
     PIPEIGUAL = 336,
     CIRCIGUAL = 337,
     DMAYORIGUAL = 338,
     DMENORIGUAL = 339,
     DASTIGUAL = 340,
     MENORMAYOR = 341,
     CSIMPLE = 342,
     IDIAG = 343,
     GATO = 344,
     DIDIAG = 345,
     NEWLINE = 346,
     ENTERO = 347,
     FLOTANTE = 348,
     INDENT = 349,
     SALIDA = 350,
     DEDENT = 351,
     FIN = 352
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 27 "pypar.y"

      int numi;
     float numf;
     const char* cad;
     char car;
      Node *nodet;
    


/* Line 2068 of yacc.c  */
#line 157 "pypar.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


