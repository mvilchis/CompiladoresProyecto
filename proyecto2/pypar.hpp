/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     CIRCIGUAL = 334,
     DMAYORIGUAL = 335,
     DMENORIGUAL = 336,
     DASTIGUAL = 337,
     CSIMPLE = 338,
     IDIAG = 339,
     GATO = 340,
     DIDIAG = 341,
     NEWLINE = 342,
     ENTERO = 343,
     FLOTANTE = 344,
     INDENT = 345,
     SALIDA = 346,
     DEDENT = 347,
     FIN = 348
   };
#endif
/* Tokens.  */
#define STRING 258
#define ESPTAB 259
#define OPERADOR 260
#define IDENTIFICADOR 261
#define PRINT 262
#define FALSE 263
#define CLASS 264
#define FINALLY 265
#define IS 266
#define RETURN 267
#define NONE 268
#define CONTINUE 269
#define FOR 270
#define LAMBDA 271
#define TRY 272
#define TRUE 273
#define DEF 274
#define FROM 275
#define NONLOCAL 276
#define WHILE 277
#define AND 278
#define DEL 279
#define GLOBAL 280
#define NOT 281
#define WITH 282
#define AS 283
#define ELIF 284
#define IF 285
#define OR 286
#define YIELD 287
#define ASSERT 288
#define ELSE 289
#define IMPORT 290
#define PASS 291
#define BREAK 292
#define EXCEPT 293
#define IN 294
#define RAISE 295
#define NIGUAL 296
#define DIGUAL 297
#define MAIGUAL 298
#define MEIGUAL 299
#define MAYOR 300
#define MENOR 301
#define ENETILDE 302
#define CIRCUNFLEJO 303
#define PIPE 304
#define AMPERSON 305
#define DMAYOR 306
#define DMENOR 307
#define PORCEN 308
#define DDIAG 309
#define DIAG 310
#define DASTERISCO 311
#define ASTERISCO 312
#define MENOS 313
#define MAS 314
#define APAREN 315
#define ACORCHETE 316
#define CCORCHETE 317
#define ALLAVE 318
#define CLLAVE 319
#define COMA 320
#define DPUNTO 321
#define PUNTO 322
#define PCOMA 323
#define AT 324
#define IGUAL 325
#define MENOSMAYOR 326
#define MASIGUAL 327
#define MENOSIGUAL 328
#define ASTIGUAL 329
#define DIAIGUAL 330
#define DDIAIGUAL 331
#define PORIGUAL 332
#define AMPIGUAL 333
#define CIRCIGUAL 334
#define DMAYORIGUAL 335
#define DMENORIGUAL 336
#define DASTIGUAL 337
#define CSIMPLE 338
#define IDIAG 339
#define GATO 340
#define DIDIAG 341
#define NEWLINE 342
#define ENTERO 343
#define FLOTANTE 344
#define INDENT 345
#define SALIDA 346
#define DEDENT 347
#define FIN 348




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "pypar.y"
{
  int numi;
  float numf;
  const char* cad;
  char car;
}
/* Line 1529 of yacc.c.  */
#line 242 "pypar.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

