/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 7 "pypar.y"

#include <iostream>
#include "stdio.h"
//#include "builder.cpp"
#include "visitor.cpp"
#define YYDEBUG 1
MASTBuilder *ast;

extern FILE *yyin;
extern char *yytext;
extern void inicializar();
int yylex();
int yyerror(const char *s) { printf("Error: %s\n", s); return 1;}


/* Line 268 of yacc.c  */
#line 87 "pypar.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 288 of yacc.c  */
#line 21 "pypar.y"

#include "composite.cpp"



/* Line 288 of yacc.c  */
#line 117 "pypar.cpp"

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

/* Line 293 of yacc.c  */
#line 24 "pypar.y"

int numi;
float numf;
const char* cad;
char car;
 Node* nodeT;



/* Line 293 of yacc.c  */
#line 241 "pypar.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 253 "pypar.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  96
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   608

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  270
/* YYNRULES -- Number of states.  */
#define YYNSTATES  393

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   352

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    12,    18,    22,    24,
      25,    28,    32,    37,    38,    41,    42,    46,    49,    53,
      54,    57,    62,    63,    65,    66,    68,    72,    76,    78,
      79,    83,    84,    86,    88,    93,    95,    96,   100,   101,
     103,   105,   107,   109,   111,   113,   115,   118,   121,   123,
     126,   127,   129,   131,   133,   135,   137,   139,   141,   143,
     145,   147,   149,   151,   154,   156,   160,   164,   165,   169,
     170,   174,   175,   177,   178,   181,   183,   185,   187,   189,
     191,   193,   195,   198,   200,   201,   204,   207,   208,   212,
     213,   216,   217,   221,   225,   226,   230,   234,   235,   237,
     239,   241,   243,   245,   252,   258,   259,   263,   264,   270,
     278,   284,   288,   289,   292,   295,   296,   298,   303,   306,
     308,   311,   313,   316,   320,   323,   328,   329,   332,   335,
     339,   340,   343,   347,   348,   351,   353,   356,   360,   361,
     363,   365,   367,   369,   371,   373,   375,   377,   380,   382,
     385,   388,   392,   393,   396,   400,   401,   404,   408,   409,
     412,   416,   420,   421,   424,   428,   429,   431,   433,   436,
     440,   441,   443,   445,   447,   449,   452,   454,   456,   458,
     462,   465,   466,   468,   469,   471,   472,   474,   475,   477,
     478,   480,   481,   483,   484,   487,   488,   492,   496,   500,
     502,   504,   506,   508,   510,   512,   515,   517,   520,   522,
     525,   529,   530,   533,   535,   538,   542,   543,   547,   551,
     554,   558,   562,   563,   567,   569,   574,   577,   581,   585,
     586,   590,   594,   595,   597,   599,   604,   606,   609,   615,
     616,   619,   621,   624,   628,   629,   632,   636,   637,   640,
     645,   648,   652,   653,   657,   658,   661,   665,   667,   668,
     670,   672,   678,   682,   684,   685,   687,   689,   695,   699,
     701
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      99,     0,    -1,   100,    -1,   100,    91,    -1,   116,   100,
      -1,    -1,    19,     6,   102,    68,   156,    -1,    61,   103,
      62,    -1,   104,    -1,    -1,   105,   107,    -1,   112,   106,
     109,    -1,   105,   112,   106,    67,    -1,    -1,    72,   163,
      -1,    -1,    58,     6,   108,    -1,    57,     6,    -1,    67,
      57,     6,    -1,    -1,   110,   111,    -1,   110,    67,   112,
     106,    -1,    -1,    67,    -1,    -1,     6,    -1,    61,   113,
      62,    -1,   112,   115,   114,    -1,    67,    -1,    -1,   115,
      67,   112,    -1,    -1,   117,    -1,   146,    -1,   120,   119,
     118,    91,    -1,    70,    -1,    -1,   119,    70,   120,    -1,
      -1,   121,    -1,   125,    -1,   131,    -1,   132,    -1,   133,
      -1,   142,    -1,   144,    -1,   212,   122,    -1,   124,   212,
      -1,   123,    -1,    72,   212,    -1,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,    84,    -1,    83,    -1,    85,    -1,    78,
      -1,     7,   126,    -1,   127,    -1,    52,   163,   128,    -1,
     163,   129,   130,    -1,    -1,    67,   163,   130,    -1,    -1,
     129,    67,   163,    -1,    -1,    67,    -1,    -1,    24,   210,
      -1,    36,    -1,   134,    -1,   135,    -1,   136,    -1,   138,
      -1,    37,    -1,    14,    -1,    12,   137,    -1,   212,    -1,
      -1,    40,   139,    -1,   163,   140,    -1,    -1,    67,   163,
     141,    -1,    -1,    67,   163,    -1,    -1,    25,     6,   143,
      -1,   143,    67,     6,    -1,    -1,    41,   172,   145,    -1,
      39,   163,   141,    -1,    -1,   147,    -1,   150,    -1,   151,
      -1,   152,    -1,   101,    -1,    30,   163,    68,   156,   148,
     149,    -1,   148,    29,   163,    68,   156,    -1,    -1,    34,
      68,   156,    -1,    -1,    22,   163,    68,   156,   149,    -1,
      15,   210,    39,   212,    68,   156,   149,    -1,    27,   154,
     153,    68,   156,    -1,   153,    67,   154,    -1,    -1,   163,
     155,    -1,    28,   172,    -1,    -1,   117,    -1,    91,    94,
     157,    96,    -1,   157,   116,    -1,   116,    -1,   159,   160,
      -1,   164,    -1,   161,   130,    -1,   161,    67,   159,    -1,
      67,   159,    -1,    30,   164,    34,   163,    -1,    -1,   164,
     162,    -1,   166,   165,    -1,   165,    31,   166,    -1,    -1,
     168,   167,    -1,   167,    23,   168,    -1,    -1,    26,   168,
      -1,   169,    -1,   172,   170,    -1,   170,   171,   172,    -1,
      -1,    47,    -1,    46,    -1,    43,    -1,    44,    -1,    45,
      -1,    86,    -1,    42,    -1,    39,    -1,    26,    39,    -1,
      11,    -1,    11,    26,    -1,   174,   173,    -1,   173,    50,
     174,    -1,    -1,   176,   175,    -1,   175,    49,   176,    -1,
      -1,   178,   177,    -1,   177,    51,   178,    -1,    -1,   180,
     179,    -1,   179,    53,   180,    -1,   179,    52,   180,    -1,
      -1,   183,   181,    -1,   181,   182,   183,    -1,    -1,    60,
      -1,    59,    -1,   186,   184,    -1,   184,   185,   186,    -1,
      -1,    58,    -1,    56,    -1,    54,    -1,    55,    -1,   187,
     186,    -1,   188,    -1,    60,    -1,    59,    -1,   197,   196,
     189,    -1,    57,   186,    -1,    -1,   202,    -1,    -1,   199,
      -1,    -1,   214,    -1,    -1,   221,    -1,    -1,   163,    -1,
      -1,   209,    -1,    -1,   196,   205,    -1,    -1,    61,   190,
      62,    -1,    63,   191,    64,    -1,    65,   192,    66,    -1,
       6,    -1,    93,    -1,    92,    -1,   198,    -1,    18,    -1,
       8,    -1,   198,     3,    -1,     3,    -1,   163,   200,    -1,
     229,    -1,   201,   130,    -1,   201,    67,   163,    -1,    -1,
     163,   203,    -1,   233,    -1,   204,   130,    -1,   204,    67,
     163,    -1,    -1,    61,   193,    62,    -1,    63,   206,    64,
      -1,    69,     6,    -1,   208,   207,   130,    -1,   207,    67,
     208,    -1,    -1,    69,    69,    69,    -1,   163,    -1,   194,
      68,   194,   195,    -1,    68,   194,    -1,   172,   211,   130,
      -1,   211,    67,   172,    -1,    -1,   163,   213,   130,    -1,
     213,    67,   163,    -1,    -1,   215,    -1,   218,    -1,   163,
      68,   163,   216,    -1,   233,    -1,   217,   130,    -1,   217,
      67,   163,    68,   163,    -1,    -1,   163,   219,    -1,   233,
      -1,   220,   130,    -1,   220,    67,   163,    -1,    -1,   222,
     223,    -1,   222,   226,    67,    -1,    -1,   226,   130,    -1,
      58,   163,   224,   225,    -1,    57,   163,    -1,   224,    67,
     226,    -1,    -1,    67,    57,   163,    -1,    -1,   163,   227,
      -1,   163,    72,   163,    -1,   233,    -1,    -1,   229,    -1,
     230,    -1,    15,   210,    39,   158,   231,    -1,    30,   159,
     231,    -1,   228,    -1,    -1,   233,    -1,   234,    -1,    15,
     210,    39,   164,   235,    -1,    30,   159,   235,    -1,   232,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    51,    52,    53,    56,    61,    63,    64,
      66,    68,    70,    71,    73,    74,    76,    77,    79,    80,
      82,    84,    85,    87,    88,    90,    91,    93,    95,    96,
      98,    99,   102,   103,   105,   107,   108,   110,   111,   113,
     114,   115,   116,   117,   118,   119,   121,   123,   124,   126,
     127,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   143,   145,   146,   148,   149,   151,   152,
     154,   155,   156,   157,   160,   163,   166,   167,   168,   169,
     173,   176,   179,   181,   182,   185,   187,   188,   190,   191,
     193,   194,   197,   199,   200,   203,   205,   206,   208,   209,
     210,   211,   212,   215,   222,   229,   231,   232,   235,   238,
     246,   248,   249,   251,   253,   254,   256,   257,   259,   260,
     262,   264,   266,   268,   269,   271,   272,   274,   277,   279,
     280,   282,   284,   285,   287,   288,   290,   292,   293,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     307,   309,   310,   312,   314,   315,   317,   319,   320,   322,
     324,   325,   326,   328,   330,   331,   333,   334,   336,   338,
     339,   341,   342,   343,   344,   347,   348,   350,   351,   353,
     355,   356,   358,   359,   361,   362,   364,   365,   367,   368,
     370,   371,   373,   374,   376,   377,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   390,   391,   393,   396,   397,
     400,   401,   403,   405,   406,   408,   409,   411,   412,   413,
     415,   417,   418,   420,   421,   422,   424,   426,   428,   429,
     431,   433,   434,   436,   437,   439,   441,   442,   444,   445,
     447,   449,   450,   452,   453,   455,   457,   458,   460,   461,
     462,   464,   465,   467,   468,   471,   472,   474,   475,   477,
     478,   480,   482,   484,   485,   487,   488,   490,   492,   494,
     495
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "ESPTAB", "OPERADOR",
  "IDENTIFICADOR", "PRINT", "FALSE", "CLASS", "FINALLY", "IS", "RETURN",
  "NONE", "CONTINUE", "FOR", "LAMBDA", "TRY", "TRUE", "DEF", "FROM",
  "NONLOCAL", "WHILE", "AND", "DEL", "GLOBAL", "NOT", "WITH", "AS", "ELIF",
  "IF", "OR", "YIELD", "ASSERT", "ELSE", "IMPORT", "PASS", "BREAK",
  "EXCEPT", "IN", "RAISE", "EXEC", "NIGUAL", "DIGUAL", "MAIGUAL",
  "MEIGUAL", "MAYOR", "MENOR", "ENETILDE", "CIRCUNFLEJO", "PIPE",
  "AMPERSON", "DMAYOR", "DMENOR", "PORCEN", "DDIAG", "DIAG", "DASTERISCO",
  "ASTERISCO", "MENOS", "MAS", "APAREN", "CPAREN", "ACORCHETE",
  "CCORCHETE", "ALLAVE", "CLLAVE", "COMA", "DPUNTO", "PUNTO", "PCOMA",
  "AT", "IGUAL", "MENOSMAYOR", "MASIGUAL", "MENOSIGUAL", "ASTIGUAL",
  "DIAIGUAL", "DDIAIGUAL", "PORIGUAL", "AMPIGUAL", "PIPEIGUAL",
  "CIRCIGUAL", "DMAYORIGUAL", "DMENORIGUAL", "DASTIGUAL", "MENORMAYOR",
  "CSIMPLE", "IDIAG", "GATO", "DIDIAG", "NEWLINE", "ENTERO", "FLOTANTE",
  "INDENT", "SALIDA", "DEDENT", "FIN", "$accept", "GOAL", "file_input",
  "funcdef", "parameters", "parameters_aux", "varargslist",
  "varargslist_aux_a", "val_aux", "varargslist_aux_b", "n1",
  "varargslist_aux_c", "n2", "n3", "fpdef", "fplist", "fpl_aux",
  "fplist_aux", "stmt", "simple_stmt", "ss_aux", "simple_stmt_aux",
  "small_stmt", "expr_stmt", "expr_stmt_aux_b", "expr_stmt_aux_b_a",
  "augassign", "print_stmt", "s29", "s30", "s31", "s32", "comaS",
  "del_stmt", "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt",
  "return_stmt", "return_stmt_aux", "raise_stmt", "s3", "s4", "s5",
  "global_stmt", "global_stmt_aux", "exec_stmt", "s7", "compound_stmt",
  "if_stmt", "if_stmt_aux", "s8", "while_stmt", "for_stmt", "with_stmt",
  "with_stmt_aux", "with_item", "s10", "suite", "suite_aux",
  "testlist_safe", "old_test", "n10", "s13", "s15", "test", "or_test",
  "or_test_aux", "and_test", "and_test_aux", "not_test", "comparison",
  "comparison_aux", "comp_op", "expr", "expr_aux", "xor_expr",
  "xor_expr_aux", "and_expr", "and_expr_aux", "shift_expr",
  "shift_expr_aux", "arith_expr", "arith_expr_aux", "ae_aux", "term",
  "term_aux", "t_aux", "factor", "factor_aux", "power", "s16", "s17",
  "s18", "s19", "s20", "s21", "s22", "power_aux", "atom", "string_aux",
  "listmaker", "listmaker_aux", "lm_aux", "testlist_comp",
  "testlist_comp_aux", "tc_aux", "trailer", "subscriptlist",
  "subscriptlist_aux", "subscript", "sliceop", "exprlist", "exprlist_aux",
  "testlist", "testlist_aux", "dictorsetmaker", "dictorsetmaker_aux_a",
  "dsm_aux_a", "dsm_aux_a_a", "dictorsetmaker_aux_b", "dsm_aux_b",
  "dsm_aux_b_a", "arglist", "arglist_aux_a", "arglist_aux_b", "al_aux",
  "s25", "argument", "s26", "list_iter", "list_for", "list_if", "s27",
  "comp_iter", "comp_for", "comp_if", "s28", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,   100,   100,   100,   101,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   110,   110,   111,   111,   112,   112,   113,   114,   114,
     115,   115,   116,   116,   117,   118,   118,   119,   119,   120,
     120,   120,   120,   120,   120,   120,   121,   122,   122,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   132,   133,   133,   133,   133,
     134,   135,   136,   137,   137,   138,   139,   139,   140,   140,
     141,   141,   142,   143,   143,   144,   145,   145,   146,   146,
     146,   146,   146,   147,   148,   148,   149,   149,   150,   151,
     152,   153,   153,   154,   155,   155,   156,   156,   157,   157,
     158,   159,   160,   161,   161,   162,   162,   163,   164,   165,
     165,   166,   167,   167,   168,   168,   169,   170,   170,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     172,   173,   173,   174,   175,   175,   176,   177,   177,   178,
     179,   179,   179,   180,   181,   181,   182,   182,   183,   184,
     184,   185,   185,   185,   185,   186,   186,   187,   187,   188,
     189,   189,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   195,   195,   196,   196,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   198,   198,   199,   200,   200,
     201,   201,   202,   203,   203,   204,   204,   205,   205,   205,
     206,   207,   207,   208,   208,   208,   209,   210,   211,   211,
     212,   213,   213,   214,   214,   215,   216,   216,   217,   217,
     218,   219,   219,   220,   220,   221,   222,   222,   223,   223,
     223,   224,   224,   225,   225,   226,   226,   227,   227,   228,
     228,   229,   230,   231,   231,   232,   232,   233,   234,   235,
     235
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     5,     3,     1,     0,
       2,     3,     4,     0,     2,     0,     3,     2,     3,     0,
       2,     4,     0,     1,     0,     1,     3,     3,     1,     0,
       3,     0,     1,     1,     4,     1,     0,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     3,     0,     3,     0,
       3,     0,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     0,     2,     2,     0,     3,     0,
       2,     0,     3,     3,     0,     3,     3,     0,     1,     1,
       1,     1,     1,     6,     5,     0,     3,     0,     5,     7,
       5,     3,     0,     2,     2,     0,     1,     4,     2,     1,
       2,     1,     2,     3,     2,     4,     0,     2,     2,     3,
       0,     2,     3,     0,     2,     1,     2,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       2,     3,     0,     2,     3,     0,     2,     3,     0,     2,
       3,     3,     0,     2,     3,     0,     1,     1,     2,     3,
       0,     1,     1,     1,     1,     2,     1,     1,     1,     3,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     2,     0,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       3,     0,     2,     1,     2,     3,     0,     3,     3,     2,
       3,     3,     0,     3,     1,     4,     2,     3,     3,     0,
       3,     3,     0,     1,     1,     4,     1,     2,     5,     0,
       2,     1,     2,     3,     0,     2,     3,     0,     2,     4,
       2,     3,     0,     3,     0,     2,     3,     1,     0,     1,
       1,     5,     3,     1,     0,     1,     1,     5,     3,     1,
       0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,   206,   199,    67,   204,    84,    81,     0,   203,     0,
       0,     0,     0,     0,     0,     0,    75,    80,    87,     0,
     178,   177,   183,   185,   187,   201,   200,     0,     2,   102,
       5,    32,    38,    39,    40,    41,    42,    43,    76,    77,
      78,    79,    44,    45,    33,    98,    99,   100,   101,   232,
     126,   130,   133,   135,   138,   152,   155,   158,   162,   165,
     170,     0,   176,   195,   202,    50,     0,    63,    64,    71,
      82,    83,   229,     0,     0,     0,    74,    94,   134,   112,
     115,     0,    85,    89,    97,   216,     0,   182,   211,     0,
     184,   244,     0,   186,   233,   234,     1,     3,     4,    36,
      73,     0,   127,   128,   131,   136,   150,   153,   156,   159,
     163,   168,   175,   181,   205,     0,    51,    52,    53,    54,
      62,    55,    56,    57,    58,    60,    59,    61,    46,    48,
       0,    69,    73,    73,     0,    13,     0,     0,    92,     0,
       0,   113,     0,     0,    86,     0,    95,     0,   212,    73,
     213,   196,     0,   207,    73,   208,   197,     0,   240,    73,
     241,   198,    35,     0,    72,   230,     0,     0,     0,   148,
       0,   146,   145,   141,   142,   143,   140,   139,   144,     0,
       0,     0,     0,     0,     0,   167,   166,     0,   173,   174,
     172,   171,     0,     0,   247,   191,     0,   179,   194,    49,
      47,     0,    65,    72,    66,    72,   227,     0,    25,     0,
       0,     8,     0,    15,     0,     0,   116,   107,     0,     0,
       0,   114,   105,    91,    91,     0,    72,   214,     0,    72,
     209,   239,    72,   242,    37,    34,   231,     0,   129,   132,
     149,   147,   137,   151,   154,   157,   161,   160,   164,   169,
     180,     0,   188,     0,     0,   224,     0,     0,   222,   219,
      73,    70,   228,     0,    31,     0,     7,     0,     0,    10,
      15,     0,    22,     6,     0,     0,   108,    93,   111,   110,
     107,     0,    88,    96,     0,   215,     0,   210,   235,    73,
     236,   243,   125,   217,     0,     0,   258,   245,    73,     0,
     191,   218,    73,    72,    68,   107,    29,    26,    17,    19,
       0,    14,    11,    24,   119,     0,     0,     0,   103,    90,
     270,   264,     0,   121,    72,   237,   250,   252,     0,   255,
     257,   246,   248,   223,   190,   193,    72,   220,   109,    28,
      27,     0,    16,    12,    23,    20,   117,   118,   106,     0,
       0,   269,   265,   266,   267,     0,   263,   259,   260,   261,
       0,   120,    73,     0,   254,   256,   191,   225,   192,   221,
      30,     0,    15,     0,   270,   264,   124,    72,   122,     0,
       0,   249,   226,    18,    21,   104,   268,   262,   123,   238,
       0,   251,   253
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,   136,   210,   211,   212,   272,   269,
     342,   312,   313,   345,   213,   265,   340,   306,    30,   216,
     163,    99,    32,    33,   128,   129,   130,    34,    67,    68,
     202,   132,   165,    35,    36,    37,    38,    39,    40,    70,
      41,    82,   144,   282,    42,   138,    43,   146,    44,    45,
     280,   276,    46,    47,    48,   139,    79,   141,   217,   315,
     321,   322,   361,   362,   102,    49,    50,   103,    51,   104,
      52,    53,   105,   179,    54,   106,    55,   107,    56,   108,
      57,   109,    58,   110,   187,    59,   111,   192,    60,    61,
      62,   197,    86,    89,    92,   251,   256,   367,   113,    63,
      64,    90,   153,   154,    87,   148,   149,   198,   257,   302,
     258,   368,    73,   133,    65,   100,    93,    94,   288,   289,
      95,   158,   159,   252,   253,   297,   364,   381,   298,   329,
     356,   357,   358,   359,   351,   352,   353,   354
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -296
static const yytype_int16 yypact[] =
{
     305,  -296,  -296,   427,  -296,   491,  -296,   515,  -296,    36,
     491,   515,    39,   491,   491,   491,  -296,  -296,   491,   515,
    -296,  -296,   491,   491,   491,  -296,  -296,    29,   -38,  -296,
     305,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
      31,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,   515,  -296,  -296,    64,   487,   491,  -296,  -296,  -296,
    -296,  -296,  -296,    49,    10,    26,  -296,  -296,  -296,  -296,
      62,    42,  -296,    46,    91,   114,    69,  -296,   117,    72,
    -296,    13,    71,  -296,  -296,  -296,  -296,  -296,   -38,    73,
      74,   491,  -296,   108,   121,    59,    99,   110,   113,    23,
      27,    53,  -296,    57,  -296,   491,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
     491,   106,   111,   112,   491,    17,   115,   366,   120,    54,
     515,  -296,   366,   491,  -296,   491,  -296,   515,  -296,   122,
    -296,  -296,   515,  -296,   123,  -296,  -296,   491,  -296,   124,
    -296,  -296,   206,    86,   491,  -296,   146,   491,   491,   155,
     143,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,   515,
     515,   515,   515,   515,   515,  -296,  -296,   515,  -296,  -296,
    -296,  -296,   515,   515,   131,   443,   178,  -296,  -296,  -296,
    -296,   491,  -296,   491,  -296,   515,  -296,   126,  -296,    28,
     133,  -296,    90,   125,   366,   102,  -296,   165,   197,   491,
     366,  -296,  -296,   137,   137,   166,   491,  -296,   167,   491,
    -296,   114,   491,  -296,  -296,  -296,  -296,   491,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,   145,  -296,   109,   139,   142,   149,   157,  -296,  -296,
     152,  -296,  -296,   366,  -296,   160,  -296,   219,   221,  -296,
     125,   491,  -296,  -296,   305,   168,  -296,  -296,  -296,  -296,
      14,   491,  -296,  -296,   491,  -296,   491,  -296,  -296,   161,
    -296,  -296,  -296,  -296,   491,   491,    11,  -296,   170,   169,
     491,  -296,   172,  -296,  -296,   165,   173,  -296,  -296,   174,
     177,  -296,  -296,   181,  -296,    32,   366,   491,  -296,  -296,
      22,    34,   182,  -296,   491,  -296,  -296,  -296,   491,  -296,
    -296,   183,  -296,  -296,  -296,   185,   349,  -296,  -296,    28,
    -296,   194,  -296,  -296,    28,  -296,  -296,  -296,  -296,   186,
     491,  -296,  -296,  -296,  -296,   491,  -296,  -296,  -296,  -296,
     491,  -296,   188,   190,   189,  -296,   491,  -296,  -296,  -296,
    -296,   253,   125,   366,    22,    34,  -296,   491,  -296,   491,
     465,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
     491,  -296,  -296
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -296,  -296,   230,  -296,  -296,  -296,  -296,  -296,  -256,  -296,
    -296,  -296,  -296,  -296,  -179,  -296,  -296,  -296,  -238,     1,
    -296,  -296,   101,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -127,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,    37,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -239,  -296,  -296,  -296,  -296,    45,  -296,  -140,  -296,
    -296,  -295,  -296,  -296,  -296,    -3,   -98,  -296,   103,  -296,
      -5,  -296,  -296,  -296,     6,  -296,    92,  -296,    93,  -296,
      94,  -296,   -84,  -296,  -296,    95,  -296,  -296,   -37,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -282,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
     -63,  -296,     5,  -296,     4,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -103,  -296,
    -296,   192,  -296,   -94,  -296,   -81,  -296,   -91
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -192
static const yytype_int16 yytable[] =
{
      69,    31,   222,   166,   150,   204,   206,    75,    78,    71,
     160,    80,    81,    72,   310,    83,    76,    72,   335,    85,
      88,    91,   227,   208,   112,    84,   147,   230,   147,    96,
     264,    31,   233,   270,   208,     1,   314,   147,     2,     3,
       4,   318,    74,   317,     5,    77,     6,     7,   275,   152,
       8,     9,   350,    97,    10,   374,    11,    12,    13,    14,
     375,   101,    15,   131,   355,   376,   338,   114,    16,    17,
     169,   135,    18,    19,   273,   183,   184,   347,   209,    -9,
     279,   157,   388,   328,   382,   170,   185,   186,   134,   209,
     140,    20,    21,    22,   137,    23,   208,    24,   171,   246,
     247,   172,   173,   174,   175,   176,   177,   188,   189,   190,
     142,   191,     1,   143,   193,     2,   384,     4,   194,   199,
     195,   219,   220,   305,    25,    26,   196,     8,   346,   147,
     145,   151,   152,   304,   200,    13,   156,   161,   207,   167,
     223,   164,   224,   162,   168,   178,   221,   267,   268,   180,
     290,   209,   225,    72,   231,   249,   250,   228,    72,   181,
     370,   236,   325,   239,   182,   372,   294,   295,    20,    21,
      22,   332,    23,   201,    24,   337,   348,   235,   203,   205,
     237,   240,   241,   214,   259,   242,   320,   218,   323,   226,
     229,   232,   255,  -189,   263,   266,   274,   271,   260,   275,
     261,    25,    26,   277,   281,   284,   286,   293,   299,     1,
    -190,   262,     2,     3,     4,   330,    80,   300,     5,   303,
       6,   301,   307,   285,     8,   308,   287,   309,   324,   291,
      11,    12,    13,   385,   292,   378,   316,   331,   333,   336,
     339,   341,    16,    17,   343,   -72,    18,    19,   344,   360,
     296,   371,   323,   366,   373,   377,   380,   323,   379,   383,
      98,   283,   323,   234,   278,    20,    21,    22,   311,    23,
     238,    24,   243,   369,   244,    31,   245,   391,   319,   323,
     155,   387,   248,   386,     0,     0,     0,     0,     0,     0,
       0,   326,   327,     0,     0,     0,     0,   334,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     2,     3,     4,   349,     0,    31,     5,     0,     6,
       7,   363,     0,     8,     9,   365,     0,    10,     0,    11,
      12,    13,    14,   255,     0,    15,     0,     0,     0,     0,
       0,    16,    17,     0,     0,    18,    19,     0,     0,     0,
       0,     0,     1,     0,     0,     2,     0,     4,     0,     0,
       0,     0,     0,   334,    20,    21,    22,     8,    23,     1,
      24,     0,     2,     3,     4,    13,   389,   296,     5,     0,
       6,     0,     0,     0,     8,     0,     0,   392,     0,     0,
      11,    12,    13,     0,     0,     0,     0,    25,    26,     0,
       0,     0,    16,    17,     0,     0,    18,    19,    20,    21,
      22,     0,    23,     0,    24,     0,     0,  -191,   254,     0,
       0,     0,     0,     0,     0,    20,    21,    22,     0,    23,
       1,    24,     0,     2,     0,     4,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     8,     1,     0,     0,     2,
       0,     4,     0,    13,     0,     0,     0,   215,    25,    26,
       0,     8,     0,     0,     0,     0,     0,     0,     1,    13,
       0,     2,     0,     4,     0,     0,     0,     0,     0,    66,
       0,     0,     0,     8,     0,     0,    20,    21,    22,     0,
      23,    13,    24,     0,     1,     0,     0,     2,     0,     4,
       0,     0,    20,    21,    22,     0,    23,     0,    24,     8,
       0,     0,   254,     0,     0,     0,     0,    13,     1,    25,
      26,     2,   390,     4,    20,    21,    22,     0,    23,     0,
      24,     0,     0,     8,     0,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    21,    22,     0,    23,     0,    24,    25,    26,   115,
       0,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,    20,    21,    22,     0,    23,     0,
      24,     0,     0,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-296))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       3,     0,   142,   101,    85,   132,   133,    10,    13,     5,
      91,    14,    15,     7,   270,    18,    11,    11,   300,    22,
      23,    24,   149,     6,    61,    19,    15,   154,    15,     0,
     209,    30,   159,   212,     6,     3,   274,    15,     6,     7,
       8,   280,     6,    29,    12,     6,    14,    15,    34,    15,
      18,    19,    30,    91,    22,   350,    24,    25,    26,    27,
     355,    30,    30,    66,    30,   360,   305,     3,    36,    37,
      11,    61,    40,    41,   214,    52,    53,   315,    61,    62,
     220,    68,   377,    72,   366,    26,    59,    60,    39,    61,
      28,    59,    60,    61,    68,    63,     6,    65,    39,   183,
     184,    42,    43,    44,    45,    46,    47,    54,    55,    56,
      68,    58,     3,    67,    57,     6,   372,     8,    61,   115,
      63,    67,    68,   263,    92,    93,    69,    18,    96,    15,
      39,    62,    15,   260,   130,    26,    64,    66,   134,    31,
     143,    67,   145,    70,    23,    86,   140,    57,    58,    50,
     231,    61,   147,   147,   157,   192,   193,   152,   152,    49,
     339,   164,   289,   168,    51,   344,    57,    58,    59,    60,
      61,   298,    63,    67,    65,   302,   316,    91,    67,    67,
      34,    26,    39,    68,     6,   179,   284,    67,   286,    67,
      67,    67,   195,    62,    68,    62,    94,    72,   201,    34,
     203,    92,    93,     6,    67,    39,    39,    62,    69,     3,
      68,   205,     6,     7,     8,   296,   219,    68,    12,    67,
      14,    64,    62,   226,    18,     6,   229,     6,    67,   232,
      24,    25,    26,   373,   237,   362,    68,    67,    69,    67,
      67,    67,    36,    37,    67,    62,    40,    41,    67,    67,
     253,    57,   350,    68,    68,    67,    67,   355,    68,     6,
      30,   224,   360,   162,   219,    59,    60,    61,   271,    63,
     167,    65,   180,   336,   181,   274,   182,   380,   281,   377,
      88,   375,   187,   374,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   294,   295,    -1,    -1,    -1,    -1,   300,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,     6,     7,     8,   317,    -1,   315,    12,    -1,    14,
      15,   324,    -1,    18,    19,   328,    -1,    22,    -1,    24,
      25,    26,    27,   336,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,     6,    -1,     8,    -1,    -1,
      -1,    -1,    -1,   366,    59,    60,    61,    18,    63,     3,
      65,    -1,     6,     7,     8,    26,   379,   380,    12,    -1,
      14,    -1,    -1,    -1,    18,    -1,    -1,   390,    -1,    -1,
      24,    25,    26,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    -1,    36,    37,    -1,    -1,    40,    41,    59,    60,
      61,    -1,    63,    -1,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,    63,
       3,    65,    -1,     6,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    18,     3,    -1,    -1,     6,
      -1,     8,    -1,    26,    -1,    -1,    -1,    91,    92,    93,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,     3,    26,
      -1,     6,    -1,     8,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    18,    -1,    -1,    59,    60,    61,    -1,
      63,    26,    65,    -1,     3,    -1,    -1,     6,    -1,     8,
      -1,    -1,    59,    60,    61,    -1,    63,    -1,    65,    18,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    26,     3,    92,
      93,     6,    57,     8,    59,    60,    61,    -1,    63,    -1,
      65,    -1,    -1,    18,    -1,    92,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    -1,    63,    -1,    65,    92,    93,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    59,    60,    61,    -1,    63,    -1,
      65,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,    12,    14,    15,    18,    19,
      22,    24,    25,    26,    27,    30,    36,    37,    40,    41,
      59,    60,    61,    63,    65,    92,    93,    99,   100,   101,
     116,   117,   120,   121,   125,   131,   132,   133,   134,   135,
     136,   138,   142,   144,   146,   147,   150,   151,   152,   163,
     164,   166,   168,   169,   172,   174,   176,   178,   180,   183,
     186,   187,   188,   197,   198,   212,    52,   126,   127,   163,
     137,   212,   172,   210,     6,   163,   210,     6,   168,   154,
     163,   163,   139,   163,   172,   163,   190,   202,   163,   191,
     199,   163,   192,   214,   215,   218,     0,    91,   100,   119,
     213,    30,   162,   165,   167,   170,   173,   175,   177,   179,
     181,   184,   186,   196,     3,    72,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,   122,   123,
     124,   163,   129,   211,    39,    61,   102,    68,   143,   153,
      28,   155,    68,    67,   140,    39,   145,    15,   203,   204,
     233,    62,    15,   200,   201,   229,    64,    68,   219,   220,
     233,    66,    70,   118,    67,   130,   164,    31,    23,    11,
      26,    39,    42,    43,    44,    45,    46,    47,    86,   171,
      50,    49,    51,    52,    53,    59,    60,   182,    54,    55,
      56,    58,   185,    57,    61,    63,    69,   189,   205,   212,
     212,    67,   128,    67,   130,    67,   130,   212,     6,    61,
     103,   104,   105,   112,    68,    91,   117,   156,    67,    67,
      68,   172,   156,   163,   163,   210,    67,   130,   210,    67,
     130,   163,    67,   130,   120,    91,   163,    34,   166,   168,
      26,    39,   172,   174,   176,   178,   180,   180,   183,   186,
     186,   193,   221,   222,    69,   163,   194,   206,   208,     6,
     163,   163,   172,    68,   112,   113,    62,    57,    58,   107,
     112,    72,   106,   156,    94,    34,   149,     6,   154,   156,
     148,    67,   141,   141,    39,   163,    39,   163,   216,   217,
     233,   163,   163,    62,    57,    58,   163,   223,   226,    69,
      68,    64,   207,    67,   130,   156,   115,    62,     6,     6,
     106,   163,   109,   110,   116,   157,    68,    29,   149,   163,
     164,   158,   159,   164,    67,   130,   163,   163,    72,   227,
     233,    67,   130,    69,   163,   194,    67,   130,   149,    67,
     114,    67,   108,    67,    67,   111,    96,   116,   156,   163,
      30,   232,   233,   234,   235,    30,   228,   229,   230,   231,
      67,   160,   161,   163,   224,   163,    68,   195,   209,   208,
     112,    57,   112,    68,   159,   159,   159,    67,   130,    68,
      67,   225,   194,     6,   106,   156,   235,   231,   159,   163,
      57,   226,   163
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 47 "pypar.y"
    {
	(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);
	printf("Exito\n");}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 51 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (2)].nodeT);}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 52 "pypar.y"
    {}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 53 "pypar.y"
    {}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 56 "pypar.y"
    {
  (yyval.nodeT)=ast->bFUNCIONNode(ast->bIDENTIFICADORNode((yyvsp[(2) - (5)].cad)), (yyvsp[(3) - (5)].nodeT), (yyvsp[(5) - (5)].nodeT));
}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 61 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(2) - (3)].nodeT);}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 63 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 64 "pypar.y"
    {}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 66 "pypar.y"
    {
	}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 68 "pypar.y"
    {}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 70 "pypar.y"
    {}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 71 "pypar.y"
    {}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 73 "pypar.y"
    {}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 74 "pypar.y"
    {}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 76 "pypar.y"
    {}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 77 "pypar.y"
    {}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 79 "pypar.y"
    {}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 80 "pypar.y"
    {}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 82 "pypar.y"
    {}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 84 "pypar.y"
    {}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 85 "pypar.y"
    {}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 87 "pypar.y"
    {}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 88 "pypar.y"
    {}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 90 "pypar.y"
    {}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 91 "pypar.y"
    {}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 93 "pypar.y"
    {}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 95 "pypar.y"
    {}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 96 "pypar.y"
    {}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 98 "pypar.y"
    {}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 99 "pypar.y"
    {}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 102 "pypar.y"
    { (yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 103 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 105 "pypar.y"
    {}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 107 "pypar.y"
    {}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 108 "pypar.y"
    {}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 110 "pypar.y"
    {}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 111 "pypar.y"
    {}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 113 "pypar.y"
    {}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 114 "pypar.y"
    {}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 115 "pypar.y"
    {}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 116 "pypar.y"
    {}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 117 "pypar.y"
    {}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 118 "pypar.y"
    {}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 119 "pypar.y"
    {}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 121 "pypar.y"
    {}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 123 "pypar.y"
    {}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 124 "pypar.y"
    {}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 126 "pypar.y"
    {}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 127 "pypar.y"
    {}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 129 "pypar.y"
    {(yyval.nodeT)=ast->bMASIGUALNode();}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 130 "pypar.y"
    {(yyval.nodeT)=ast->bMENOSIGUALNode();}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 131 "pypar.y"
    {(yyval.nodeT)=ast->bASIGUALNode();}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 132 "pypar.y"
    {(yyval.nodeT)=ast->bDIAIGUALNode();}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 133 "pypar.y"
    {(yyval.nodeT)=ast->bPORIGUALNode();}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 134 "pypar.y"
    {(yyval.nodeT)= ast->bAMPIGUALNode();}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 135 "pypar.y"
    {(yyval.nodeT)=ast->bPIPEIGUALNode();}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 136 "pypar.y"
    {(yyval.nodeT)=ast->bCIRCIGUALNode();}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 137 "pypar.y"
    {(yyval.nodeT)=ast->bDMENORIGUALNode();}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 138 "pypar.y"
    {(yyval.nodeT)=ast->bDMAYORIGUALNode();}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 139 "pypar.y"
    {(yyval.nodeT)=ast->bDASTIGUALNode();}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 140 "pypar.y"
    {(yyval.nodeT)=ast->bDDIAIGUALNode();}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 143 "pypar.y"
    {}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 145 "pypar.y"
    {}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 146 "pypar.y"
    {}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 148 "pypar.y"
    {}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 149 "pypar.y"
    {}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 151 "pypar.y"
    {}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 152 "pypar.y"
    {}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 154 "pypar.y"
    {}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 155 "pypar.y"
    {}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 156 "pypar.y"
    {}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 157 "pypar.y"
    {}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 160 "pypar.y"
    {}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 163 "pypar.y"
    {(yyval.nodeT)=ast->bPASSNode(); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 166 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 167 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 168 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 169 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 173 "pypar.y"
    {(yyval.nodeT)=ast->bBREAKNode();}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 176 "pypar.y"
    {(yyval.nodeT)=ast->bCONTINUENode();}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 179 "pypar.y"
    {(yyval.nodeT)=ast->bRETURNNode((yyvsp[(2) - (2)].nodeT));}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 181 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 182 "pypar.y"
    {(yyval.nodeT)=NULL;}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 185 "pypar.y"
    {}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 187 "pypar.y"
    {}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 188 "pypar.y"
    {}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 190 "pypar.y"
    {}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 191 "pypar.y"
    {}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 193 "pypar.y"
    {}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 194 "pypar.y"
    {}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 197 "pypar.y"
    {}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 199 "pypar.y"
    {}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 200 "pypar.y"
    {}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 203 "pypar.y"
    {}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 205 "pypar.y"
    {}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 206 "pypar.y"
    {}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 208 "pypar.y"
    {}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 209 "pypar.y"
    {}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 210 "pypar.y"
    {}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 211 "pypar.y"
    {}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 212 "pypar.y"
    {}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 215 "pypar.y"
    { 
	LNodeList *nl = new LNodeList();
	nl->push_front((yyvsp[(5) - (6)].nodeT));
	nl->push_front((yyvsp[(4) - (6)].nodeT));
	nl->push_front((yyvsp[(2) - (6)].nodeT));
	(yyval.nodeT)=ast->bIFNode(nl);}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 222 "pypar.y"
    {
	LNodeList *nl = new LNodeList();
	nl->push_front((yyvsp[(1) - (5)].nodeT));
	nl->push_front((yyvsp[(5) - (5)].nodeT));
	nl->push_front((yyvsp[(3) - (5)].nodeT));
	(yyval.nodeT)=ast->bIFNode(nl);
	}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 229 "pypar.y"
    {(yyval.nodeT)=NULL;}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 231 "pypar.y"
    { (yyval.nodeT)=(yyvsp[(3) - (3)].nodeT); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 232 "pypar.y"
    {(yyval.nodeT)=NULL;}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 235 "pypar.y"
    { (yyval.nodeT)=ast->bWHILENode((yyvsp[(2) - (5)].nodeT),(yyvsp[(4) - (5)].nodeT));}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 238 "pypar.y"
    {
	LNodeList *nl = new LNodeList();
	nl->push_front((yyvsp[(6) - (7)].nodeT));
	nl->push_front((yyvsp[(4) - (7)].nodeT));
	nl->push_front((yyvsp[(2) - (7)].nodeT)); 
	(yyval.nodeT)=ast->bFORNode(nl);
	}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 246 "pypar.y"
    {}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 248 "pypar.y"
    {}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 249 "pypar.y"
    {}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 251 "pypar.y"
    {}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 253 "pypar.y"
    {}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 254 "pypar.y"
    {}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 256 "pypar.y"
    { (yyval.nodeT)=(yyvsp[(1) - (1)].nodeT); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 257 "pypar.y"
    {}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 259 "pypar.y"
    {}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 260 "pypar.y"
    {}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 262 "pypar.y"
    {}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 264 "pypar.y"
    {}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 266 "pypar.y"
    {}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 268 "pypar.y"
    {}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 269 "pypar.y"
    {}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 271 "pypar.y"
    {}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 272 "pypar.y"
    {}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 274 "pypar.y"
    {}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 277 "pypar.y"
    {}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 279 "pypar.y"
    {}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 280 "pypar.y"
    {}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 282 "pypar.y"
    {}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 284 "pypar.y"
    {}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 285 "pypar.y"
    {}
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 287 "pypar.y"
    {}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 288 "pypar.y"
    {}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 290 "pypar.y"
    {}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 292 "pypar.y"
    {}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 293 "pypar.y"
    {}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 295 "pypar.y"
    {(yyval.nodeT)=ast->bMENORNode();}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 296 "pypar.y"
    {(yyval.nodeT)=ast->bMAYORNode();}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 297 "pypar.y"
    {(yyval.nodeT)=ast->bDIGNode();}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 298 "pypar.y"
    {(yyval.nodeT)=ast->bMAYIGNode();}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 299 "pypar.y"
    {(yyval.nodeT)=ast->bMENIGNode();}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 300 "pypar.y"
    {(yyval.nodeT)=ast->bMENORMAYORNode();}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 301 "pypar.y"
    {(yyval.nodeT)=ast->bNIGNode();}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 302 "pypar.y"
    {(yyval.nodeT)=ast->bINNode();}
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 303 "pypar.y"
    {(yyval.nodeT)=ast->bNOTINNode();}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 304 "pypar.y"
    {(yyval.nodeT)=ast->bISNode();}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 305 "pypar.y"
    {(yyval.nodeT)=ast->bISNOTNode();}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 307 "pypar.y"
    {}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 309 "pypar.y"
    {}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 310 "pypar.y"
    {}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 312 "pypar.y"
    {}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 314 "pypar.y"
    {}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 315 "pypar.y"
    {}
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 317 "pypar.y"
    {}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 319 "pypar.y"
    {}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 320 "pypar.y"
    {}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 322 "pypar.y"
    {}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 324 "pypar.y"
    {}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 325 "pypar.y"
    {}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 326 "pypar.y"
    {}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 328 "pypar.y"
    {}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 330 "pypar.y"
    {}
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 331 "pypar.y"
    {}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 333 "pypar.y"
    {(yyval.nodeT)=ast->bMASNode();}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 334 "pypar.y"
    {(yyval.nodeT)=ast->bMENOSNode();}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 336 "pypar.y"
    {}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 338 "pypar.y"
    {}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 339 "pypar.y"
    {}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 341 "pypar.y"
    {(yyval.nodeT)=ast->bPORNode();}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 342 "pypar.y"
    {(yyval.nodeT)=ast->bDIVNode();}
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 343 "pypar.y"
    {(yyval.nodeT)=ast->bMODNode();}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 344 "pypar.y"
    {(yyval.nodeT)=ast->bDDIAGNode();}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 347 "pypar.y"
    {}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 348 "pypar.y"
    {}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 350 "pypar.y"
    {(yyval.nodeT)=ast->bMASNode();}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 351 "pypar.y"
    {(yyval.nodeT)=ast->bMENOSNode();}
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 353 "pypar.y"
    {}
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 355 "pypar.y"
    {}
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 356 "pypar.y"
    {}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 358 "pypar.y"
    {}
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 359 "pypar.y"
    {}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 361 "pypar.y"
    {}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 362 "pypar.y"
    {}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 364 "pypar.y"
    {}
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 365 "pypar.y"
    {}
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 367 "pypar.y"
    {}
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 368 "pypar.y"
    {}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 370 "pypar.y"
    {}
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 371 "pypar.y"
    {}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 373 "pypar.y"
    {}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 374 "pypar.y"
    {}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 376 "pypar.y"
    {}
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 377 "pypar.y"
    {}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 379 "pypar.y"
    {}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 380 "pypar.y"
    {}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 381 "pypar.y"
    {}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 382 "pypar.y"
    {(yyval.nodeT)=ast->bIDENTIFICADORNode((yyvsp[(1) - (1)].cad));}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 383 "pypar.y"
    {(yyval.nodeT)=ast->bFLOATNode((yyvsp[(1) - (1)].numf));}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 384 "pypar.y"
    {(yyval.nodeT)=ast->bINTNode((yyvsp[(1) - (1)].numi));}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 385 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 386 "pypar.y"
    {(yyval.nodeT)=ast->bTRUENode();}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 387 "pypar.y"
    {(yyval.nodeT)=ast->bFALSENode();}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 390 "pypar.y"
    {}
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 391 "pypar.y"
    {}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 393 "pypar.y"
    {}
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 396 "pypar.y"
    {}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 397 "pypar.y"
    {}
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 400 "pypar.y"
    {}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 401 "pypar.y"
    {}
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 403 "pypar.y"
    {}
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 405 "pypar.y"
    {}
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 406 "pypar.y"
    {}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 408 "pypar.y"
    {}
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 409 "pypar.y"
    {}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 411 "pypar.y"
    {}
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 412 "pypar.y"
    {}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 413 "pypar.y"
    {}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 415 "pypar.y"
    {}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 417 "pypar.y"
    {}
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 418 "pypar.y"
    {}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 420 "pypar.y"
    {}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 421 "pypar.y"
    {}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 422 "pypar.y"
    {}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 424 "pypar.y"
    {}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 426 "pypar.y"
    {}
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 428 "pypar.y"
    {}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 429 "pypar.y"
    {}
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 431 "pypar.y"
    {}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 433 "pypar.y"
    {}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 434 "pypar.y"
    {}
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 436 "pypar.y"
    {}
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 437 "pypar.y"
    {}
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 439 "pypar.y"
    {}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 441 "pypar.y"
    {}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 442 "pypar.y"
    {}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 444 "pypar.y"
    {}
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 445 "pypar.y"
    {}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 447 "pypar.y"
    {}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 449 "pypar.y"
    {}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 450 "pypar.y"
    {}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 452 "pypar.y"
    {}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 453 "pypar.y"
    {}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 455 "pypar.y"
    {}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 457 "pypar.y"
    {}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 458 "pypar.y"
    {}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 460 "pypar.y"
    {}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 461 "pypar.y"
    {}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 462 "pypar.y"
    {}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 464 "pypar.y"
    {}
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 465 "pypar.y"
    {}
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 467 "pypar.y"
    {}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 468 "pypar.y"
    {}
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 471 "pypar.y"
    {}
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 472 "pypar.y"
    {}
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 474 "pypar.y"
    {}
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 475 "pypar.y"
    {}
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 477 "pypar.y"
    {}
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 478 "pypar.y"
    {}
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 480 "pypar.y"
    {}
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 482 "pypar.y"
    {}
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 484 "pypar.y"
    {}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 485 "pypar.y"
    {}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 487 "pypar.y"
    {}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 488 "pypar.y"
    {}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 490 "pypar.y"
    {}
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 492 "pypar.y"
    {}
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 494 "pypar.y"
    {}
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 495 "pypar.y"
    {}
    break;



/* Line 1806 of yacc.c  */
#line 3866 "pypar.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 497 "pypar.y"

int main(int argc, char const *argv[]) {
++argv;
--argc;
if (argc > 0) {
yyin = fopen(argv[0], "r");
}
else
yyin = stdin;
do {
yydebug = 0;
inicializar();
yyparse();
} while (!feof(yyin));
}


