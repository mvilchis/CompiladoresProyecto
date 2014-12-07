/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_PYPAR_HPP_INCLUDED
# define YY_YY_PYPAR_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 27 "pypar.y" /* yacc.c:1909  */

#include "composite.cpp"

#line 48 "pypar.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRING = 258,
    IDENTIFICADOR = 259,
    PRINT = 260,
    FALSE = 261,
    CLASS = 262,
    FINALLY = 263,
    IS = 264,
    RETURN = 265,
    NONE = 266,
    CONTINUE = 267,
    FOR = 268,
    LAMBDA = 269,
    TRY = 270,
    TRUE = 271,
    DEF = 272,
    FROM = 273,
    NONLOCAL = 274,
    WHILE = 275,
    AND = 276,
    DEL = 277,
    GLOBAL = 278,
    NOT = 279,
    WITH = 280,
    AS = 281,
    ELIF = 282,
    IF = 283,
    OR = 284,
    YIELD = 285,
    ASSERT = 286,
    ELSE = 287,
    IMPORT = 288,
    PASS = 289,
    BREAK = 290,
    EXCEPT = 291,
    IN = 292,
    RAISE = 293,
    EXEC = 294,
    NIGUAL = 295,
    DIGUAL = 296,
    MAIGUAL = 297,
    MEIGUAL = 298,
    MAYOR = 299,
    MENOR = 300,
    ENETILDE = 301,
    CIRCUNFLEJO = 302,
    PIPE = 303,
    AMPERSON = 304,
    DMAYOR = 305,
    DMENOR = 306,
    PORCEN = 307,
    DDIAG = 308,
    DIAG = 309,
    DASTERISCO = 310,
    ASTERISCO = 311,
    MENOS = 312,
    MAS = 313,
    APAREN = 314,
    CPAREN = 315,
    ACORCHETE = 316,
    CCORCHETE = 317,
    ALLAVE = 318,
    CLLAVE = 319,
    COMA = 320,
    DPUNTO = 321,
    PUNTO = 322,
    PCOMA = 323,
    AT = 324,
    IGUAL = 325,
    MENOSMAYOR = 326,
    MASIGUAL = 327,
    MENOSIGUAL = 328,
    ASTIGUAL = 329,
    DIAIGUAL = 330,
    DDIAIGUAL = 331,
    PORIGUAL = 332,
    AMPIGUAL = 333,
    PIPEIGUAL = 334,
    CIRCIGUAL = 335,
    DMAYORIGUAL = 336,
    DMENORIGUAL = 337,
    DASTIGUAL = 338,
    MENORMAYOR = 339,
    CSIMPLE = 340,
    IDIAG = 341,
    GATO = 342,
    DIDIAG = 343,
    NEWLINE = 344,
    ENTERO = 345,
    FLOTANTE = 346,
    INDENT = 347,
    SALIDA = 348,
    DEDENT = 349,
    FIN = 350
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 30 "pypar.y" /* yacc.c:1909  */

  int numi;
    float numf;
    const char* cad;
Node* nodeT;

#line 163 "pypar.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PYPAR_HPP_INCLUDED  */
