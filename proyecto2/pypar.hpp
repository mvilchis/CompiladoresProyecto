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

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    NIGUAL = 296,
    DIGUAL = 297,
    MAIGUAL = 298,
    MEIGUAL = 299,
    MAYOR = 300,
    MENOR = 301,
    ENETILDE = 302,
    CIRCUNFLEJO = 303,
    PIPE = 304,
    AMPERSON = 305,
    DMAYOR = 306,
    DMENOR = 307,
    PORCEN = 308,
    DDIAG = 309,
    DIAG = 310,
    DASTERISCO = 311,
    ASTERISCO = 312,
    MENOS = 313,
    MAS = 314,
    APAREN = 315,
    CPAREN = 316,
    ACORCHETE = 317,
    CCORCHETE = 318,
    ALLAVE = 319,
    CLLAVE = 320,
    COMA = 321,
    DPUNTO = 322,
    PUNTO = 323,
    PCOMA = 324,
    AT = 325,
    IGUAL = 326,
    MENOSMAYOR = 327,
    MASIGUAL = 328,
    MENOSIGUAL = 329,
    ASTIGUAL = 330,
    DIAIGUAL = 331,
    DDIAIGUAL = 332,
    PORIGUAL = 333,
    AMPIGUAL = 334,
    PIPEIGUAL = 335,
    CIRCIGUAL = 336,
    DMAYORIGUAL = 337,
    DMENORIGUAL = 338,
    DASTIGUAL = 339,
    MENORMAYOR = 340,
    CSIMPLE = 341,
    IDIAG = 342,
    GATO = 343,
    DIDIAG = 344,
    NEWLINE = 345,
    ENTERO = 346,
    FLOTANTE = 347,
    INDENT = 348,
    SALIDA = 349,
    DEDENT = 350,
    FIN = 351
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 11 "pypar.y" /* yacc.c:1909  */

  int numi;
  float numf;
  const char* cad;
  char car;

#line 158 "pypar.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PYPAR_HPP_INCLUDED  */
