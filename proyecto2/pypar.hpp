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
#define CPAREN 316
#define ACORCHETE 317
#define CCORCHETE 318
#define ALLAVE 319
#define CLLAVE 320
#define COMA 321
#define DPUNTO 322
#define PUNTO 323
#define PCOMA 324
#define AT 325
#define IGUAL 326
#define MENOSMAYOR 327
#define MASIGUAL 328
#define MENOSIGUAL 329
#define ASTIGUAL 330
#define DIAIGUAL 331
#define DDIAIGUAL 332
#define PORIGUAL 333
#define AMPIGUAL 334
#define PIPEIGUAL 335
#define CIRCIGUAL 336
#define DMAYORIGUAL 337
#define DMENORIGUAL 338
#define DASTIGUAL 339
#define MENORMAYOR 340
#define CSIMPLE 341
#define IDIAG 342
#define GATO 343
#define DIDIAG 344
#define NEWLINE 345
#define ENTERO 346
#define FLOTANTE 347
#define INDENT 348
#define SALIDA 349
#define DEDENT 350
#define FIN 351




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
#line 248 "pypar.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

