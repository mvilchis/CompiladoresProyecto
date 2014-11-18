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
#define YYFINAL  97
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   659

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  271
/* YYNRULES -- Number of states.  */
#define YYNSTATES  394

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
     460,   464,   467,   468,   470,   471,   473,   474,   476,   477,
     479,   480,   482,   483,   485,   486,   489,   490,   494,   498,
     502,   504,   506,   508,   510,   512,   514,   517,   519,   522,
     524,   527,   531,   532,   535,   537,   540,   544,   545,   549,
     553,   556,   560,   564,   565,   569,   571,   576,   579,   583,
     587,   588,   592,   596,   597,   599,   601,   606,   608,   611,
     617,   618,   621,   623,   626,   630,   631,   634,   638,   639,
     642,   647,   650,   654,   655,   659,   660,   663,   667,   669,
     670,   672,   674,   680,   684,   686,   687,   689,   691,   697,
     701,   703
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
     186,    -1,   188,    -1,    60,    -1,    59,    -1,    48,    -1,
     197,   196,   189,    -1,    57,   186,    -1,    -1,   202,    -1,
      -1,   199,    -1,    -1,   214,    -1,    -1,   221,    -1,    -1,
     163,    -1,    -1,   209,    -1,    -1,   196,   205,    -1,    -1,
      61,   190,    62,    -1,    63,   191,    64,    -1,    65,   192,
      66,    -1,     6,    -1,    93,    -1,    92,    -1,   198,    -1,
      18,    -1,     8,    -1,   198,     3,    -1,     3,    -1,   163,
     200,    -1,   229,    -1,   201,   130,    -1,   201,    67,   163,
      -1,    -1,   163,   203,    -1,   233,    -1,   204,   130,    -1,
     204,    67,   163,    -1,    -1,    61,   193,    62,    -1,    63,
     206,    64,    -1,    69,     6,    -1,   208,   207,   130,    -1,
     207,    67,   208,    -1,    -1,    69,    69,    69,    -1,   163,
      -1,   194,    68,   194,   195,    -1,    68,   194,    -1,   172,
     211,   130,    -1,   211,    67,   172,    -1,    -1,   163,   213,
     130,    -1,   213,    67,   163,    -1,    -1,   215,    -1,   218,
      -1,   163,    68,   163,   216,    -1,   233,    -1,   217,   130,
      -1,   217,    67,   163,    68,   163,    -1,    -1,   163,   219,
      -1,   233,    -1,   220,   130,    -1,   220,    67,   163,    -1,
      -1,   222,   223,    -1,   222,   226,    67,    -1,    -1,   226,
     130,    -1,    58,   163,   224,   225,    -1,    57,   163,    -1,
     224,    67,   226,    -1,    -1,    67,    57,   163,    -1,    -1,
     163,   227,    -1,   163,    72,   163,    -1,   233,    -1,    -1,
     229,    -1,   230,    -1,    15,   210,    39,   158,   231,    -1,
      30,   159,   231,    -1,   228,    -1,    -1,   233,    -1,   234,
      -1,    15,   210,    39,   164,   235,    -1,    30,   159,   235,
      -1,   232,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    51,    52,    53,    56,    62,    65,    68,
      70,    73,    76,    79,    81,    84,    86,    89,    92,    95,
      97,   100,   103,   105,   108,   110,   113,   116,   119,   122,
     124,   127,   130,   133,   136,   139,   142,   144,   147,   149,
     152,   155,   158,   161,   164,   167,   170,   173,   176,   179,
     182,   184,   187,   190,   193,   196,   199,   202,   205,   208,
     211,   214,   217,   221,   223,   225,   227,   230,   232,   235,
     237,   239,   240,   243,   246,   250,   254,   257,   260,   263,
     267,   271,   275,   278,   281,   284,   287,   290,   292,   295,
     297,   300,   303,   306,   308,   311,   314,   316,   318,   321,
     324,   327,   330,   334,   338,   340,   342,   344,   347,   351,
     354,   357,   359,   361,   364,   366,   368,   370,   373,   375,
     378,   381,   384,   387,   389,   392,   394,   396,   400,   403,
     405,   407,   410,   412,   414,   416,   419,   422,   424,   426,
     428,   430,   432,   434,   436,   438,   440,   442,   444,   446,
     449,   452,   454,   456,   459,   461,   463,   466,   468,   470,
     473,   476,   478,   480,   483,   485,   487,   489,   492,   495,
     497,   499,   501,   503,   505,   508,   510,   513,   515,   517,
     520,   523,   525,   527,   529,   531,   533,   535,   537,   539,
     541,   543,   545,   547,   549,   551,   553,   555,   558,   561,
     564,   567,   570,   573,   576,   579,   583,   585,   588,   591,
     593,   596,   598,   600,   603,   605,   608,   610,   612,   614,
     616,   619,   622,   624,   626,   628,   630,   633,   636,   639,
     641,   643,   646,   648,   650,   652,   655,   658,   660,   663,
     665,   667,   670,   672,   675,   677,   679,   682,   684,   686,
     688,   690,   693,   695,   697,   699,   702,   704,   707,   709,
     711,   714,   717,   720,   723,   726,   728,   731,   734,   737,
     740,   743
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
     184,   185,   185,   185,   185,   186,   186,   187,   187,   187,
     188,   189,   189,   190,   190,   191,   191,   192,   192,   193,
     193,   194,   194,   195,   195,   196,   196,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   198,   198,   199,   200,
     200,   201,   201,   202,   203,   203,   204,   204,   205,   205,
     205,   206,   207,   207,   208,   208,   208,   209,   210,   211,
     211,   212,   213,   213,   214,   214,   215,   216,   216,   217,
     217,   218,   219,   219,   220,   220,   221,   222,   222,   223,
     223,   223,   224,   224,   225,   225,   226,   226,   227,   227,
     228,   228,   229,   230,   231,   231,   232,   232,   233,   234,
     235,   235
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
       0,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       3,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     2,     0,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       2,     3,     0,     2,     1,     2,     3,     0,     3,     3,
       2,     3,     3,     0,     3,     1,     4,     2,     3,     3,
       0,     3,     3,     0,     1,     1,     4,     1,     2,     5,
       0,     2,     1,     2,     3,     0,     2,     3,     0,     2,
       4,     2,     3,     0,     3,     0,     2,     3,     1,     0,
       1,     1,     5,     3,     1,     0,     1,     1,     5,     3,
       1,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,   207,   200,    67,   205,    84,    81,     0,   204,     0,
       0,     0,     0,     0,     0,     0,    75,    80,    87,     0,
     179,   178,   177,   184,   186,   188,   202,   201,     0,     2,
     102,     5,    32,    38,    39,    40,    41,    42,    43,    76,
      77,    78,    79,    44,    45,    33,    98,    99,   100,   101,
     233,   126,   130,   133,   135,   138,   152,   155,   158,   162,
     165,   170,     0,   176,   196,   203,    50,     0,    63,    64,
      71,    82,    83,   230,     0,     0,     0,    74,    94,   134,
     112,   115,     0,    85,    89,    97,   217,     0,   183,   212,
       0,   185,   245,     0,   187,   234,   235,     1,     3,     4,
      36,    73,     0,   127,   128,   131,   136,   150,   153,   156,
     159,   163,   168,   175,   182,   206,     0,    51,    52,    53,
      54,    62,    55,    56,    57,    58,    60,    59,    61,    46,
      48,     0,    69,    73,    73,     0,    13,     0,     0,    92,
       0,     0,   113,     0,     0,    86,     0,    95,     0,   213,
      73,   214,   197,     0,   208,    73,   209,   198,     0,   241,
      73,   242,   199,    35,     0,    72,   231,     0,     0,     0,
     148,     0,   146,   145,   141,   142,   143,   140,   139,   144,
       0,     0,     0,     0,     0,     0,   167,   166,     0,   173,
     174,   172,   171,     0,     0,   248,   192,     0,   180,   195,
      49,    47,     0,    65,    72,    66,    72,   228,     0,    25,
       0,     0,     8,     0,    15,     0,     0,   116,   107,     0,
       0,     0,   114,   105,    91,    91,     0,    72,   215,     0,
      72,   210,   240,    72,   243,    37,    34,   232,     0,   129,
     132,   149,   147,   137,   151,   154,   157,   161,   160,   164,
     169,   181,     0,   189,     0,     0,   225,     0,     0,   223,
     220,    73,    70,   229,     0,    31,     0,     7,     0,     0,
      10,    15,     0,    22,     6,     0,     0,   108,    93,   111,
     110,   107,     0,    88,    96,     0,   216,     0,   211,   236,
      73,   237,   244,   125,   218,     0,     0,   259,   246,    73,
       0,   192,   219,    73,    72,    68,   107,    29,    26,    17,
      19,     0,    14,    11,    24,   119,     0,     0,     0,   103,
      90,   271,   265,     0,   121,    72,   238,   251,   253,     0,
     256,   258,   247,   249,   224,   191,   194,    72,   221,   109,
      28,    27,     0,    16,    12,    23,    20,   117,   118,   106,
       0,     0,   270,   266,   267,   268,     0,   264,   260,   261,
     262,     0,   120,    73,     0,   255,   257,   192,   226,   193,
     222,    30,     0,    15,     0,   271,   265,   124,    72,   122,
       0,     0,   250,   227,    18,    21,   104,   269,   263,   123,
     239,     0,   252,   254
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,    29,    30,   137,   211,   212,   213,   273,   270,
     343,   313,   314,   346,   214,   266,   341,   307,    31,   217,
     164,   100,    33,    34,   129,   130,   131,    35,    68,    69,
     203,   133,   166,    36,    37,    38,    39,    40,    41,    71,
      42,    83,   145,   283,    43,   139,    44,   147,    45,    46,
     281,   277,    47,    48,    49,   140,    80,   142,   218,   316,
     322,   323,   362,   363,   103,    50,    51,   104,    52,   105,
      53,    54,   106,   180,    55,   107,    56,   108,    57,   109,
      58,   110,    59,   111,   188,    60,   112,   193,    61,    62,
      63,   198,    87,    90,    93,   252,   257,   368,   114,    64,
      65,    91,   154,   155,    88,   149,   150,   199,   258,   303,
     259,   369,    74,   134,    66,   101,    94,    95,   289,   290,
      96,   159,   160,   253,   254,   298,   365,   382,   299,   330,
     357,   358,   359,   360,   352,   353,   354,   355
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -284
static const yytype_int16 yypact[] =
{
     306,  -284,  -284,   180,  -284,   542,  -284,   566,  -284,    31,
     542,   566,    40,   542,   542,   542,  -284,  -284,   542,   566,
    -284,  -284,  -284,   542,   542,   542,  -284,  -284,    52,   -33,
    -284,   306,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,    33,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   566,  -284,  -284,    67,   564,   542,  -284,  -284,
    -284,  -284,  -284,  -284,    38,    25,    42,  -284,  -284,  -284,
    -284,    53,    43,  -284,    26,    73,    84,    51,  -284,   101,
      55,  -284,    14,    56,  -284,  -284,  -284,  -284,  -284,   -33,
      59,    58,   542,  -284,    99,   110,    62,    89,    85,    94,
       3,     9,   126,  -284,    63,  -284,   542,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,   542,    79,    86,    90,   542,    17,    72,   367,    91,
      23,   566,  -284,   367,   542,  -284,   542,  -284,   566,  -284,
      93,  -284,  -284,   566,  -284,    96,  -284,  -284,   542,  -284,
      97,  -284,  -284,   428,    61,   542,  -284,   117,   542,   542,
     140,   128,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
     566,   566,   566,   566,   566,   566,  -284,  -284,   566,  -284,
    -284,  -284,  -284,   566,   566,   107,   478,   164,  -284,  -284,
    -284,  -284,   542,  -284,   542,  -284,   566,  -284,   103,  -284,
      28,   113,  -284,    60,   100,   367,    83,  -284,   145,   179,
     542,   367,  -284,  -284,   123,   123,   152,   542,  -284,   155,
     542,  -284,    84,   542,  -284,  -284,  -284,  -284,   542,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   134,  -284,   189,   133,   135,   136,   141,  -284,
    -284,   142,  -284,  -284,   367,  -284,   146,  -284,   204,   205,
    -284,   100,   542,  -284,  -284,   306,   144,  -284,  -284,  -284,
    -284,    11,   542,  -284,  -284,   542,  -284,   542,  -284,  -284,
     147,  -284,  -284,  -284,  -284,   542,   542,    13,  -284,   149,
     150,   542,  -284,   151,  -284,  -284,   145,   153,  -284,  -284,
     156,   158,  -284,  -284,   162,  -284,    35,   367,   542,  -284,
    -284,    18,    21,   167,  -284,   542,  -284,  -284,  -284,   542,
    -284,  -284,   160,  -284,  -284,  -284,   163,   464,  -284,  -284,
      28,  -284,   185,  -284,  -284,    28,  -284,  -284,  -284,  -284,
     168,   542,  -284,  -284,  -284,  -284,   542,  -284,  -284,  -284,
    -284,   542,  -284,   177,   187,   190,  -284,   542,  -284,  -284,
    -284,  -284,   207,   100,   367,    18,    21,  -284,   542,  -284,
     542,   528,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,   542,  -284,  -284
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,  -284,   225,  -284,  -284,  -284,  -284,  -284,  -258,  -284,
    -284,  -284,  -284,  -284,  -196,  -284,  -284,  -284,  -249,     1,
    -284,  -284,    98,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -125,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,    34,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -262,  -284,  -284,  -284,  -284,    44,  -284,  -141,  -284,
    -284,  -264,  -284,  -284,  -284,    -3,   -98,  -284,    92,  -284,
     -10,  -284,  -284,  -284,    20,  -284,    81,  -284,    88,  -284,
      82,  -284,   -82,  -284,  -284,    78,  -284,  -284,   -56,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -283,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
     -70,  -284,    -6,  -284,    19,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -113,  -284,
    -284,   182,  -284,  -102,  -284,   -76,  -284,  -100
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -193
static const yytype_int16 yytable[] =
{
      70,    32,   223,    79,   167,    77,   113,    76,   205,   207,
     151,    81,    82,   311,   265,    84,   161,   271,   336,   319,
      86,    89,    92,   209,    72,   228,   315,    73,   148,   148,
     231,    73,    32,   148,   209,   234,   153,    75,     1,    85,
     318,     2,     3,     4,   339,   276,    78,     5,   351,     6,
       7,   356,    97,     8,     9,   184,   185,    10,    98,    11,
      12,    13,    14,   102,   132,    15,   209,   348,   186,   187,
     115,    16,    17,   170,   274,    18,    19,   135,   210,    -9,
     280,   141,   158,    20,   383,   329,   136,   375,   171,   210,
     220,   221,   376,   144,    21,    22,    23,   377,    24,   148,
      25,   172,   247,   248,   173,   174,   175,   176,   177,   178,
     138,   143,   146,   152,   389,   385,   153,   268,   269,   157,
     194,   210,   162,   306,   195,   165,   196,    26,    27,   163,
     168,   347,   197,   169,   182,   200,   305,   250,   251,   181,
     215,   224,   226,   225,   371,   183,   202,   229,   179,   373,
     201,   238,   236,   204,   208,   232,   291,   206,   219,   240,
     227,   222,   237,   230,   233,   326,   241,   242,    73,  -190,
     260,   264,   272,    73,   333,   267,   349,   275,   338,   276,
     189,   190,   191,     1,   192,   278,     2,   321,     4,   324,
     282,   285,     1,   256,   287,     2,   294,     4,     8,   261,
     243,   262,   300,  -191,   301,   302,    13,     8,   308,   304,
     309,   310,   317,   384,   325,    13,   332,    81,   337,   334,
     340,   331,   -72,   342,   286,   344,   263,   288,    20,   345,
     292,   367,    67,   386,   361,   293,   374,    20,   379,    21,
      22,    23,   372,    24,   378,    25,   295,   296,    21,    22,
      23,   297,    24,   324,    25,   380,    99,   381,   324,   284,
     239,   235,   244,   324,   279,   246,   249,   370,   392,   312,
     245,   156,    26,    27,   388,   387,    32,     0,     0,   320,
     324,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   327,   328,     0,     0,     0,     0,   335,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     2,     3,     4,   350,     0,    32,     5,     0,
       6,     7,   364,     0,     8,     9,   366,     0,    10,     0,
      11,    12,    13,    14,   256,     0,    15,     0,     0,     0,
       0,     0,    16,    17,     0,     0,    18,    19,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   335,    21,    22,    23,     0,    24,
       1,    25,     0,     2,     3,     4,     0,   390,   297,     5,
       0,     6,     0,     0,     0,     8,     0,     0,   393,     0,
       0,    11,    12,    13,     0,     0,     0,     0,    26,    27,
       0,     0,     0,    16,    17,     0,     0,    18,    19,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,    23,     0,
      24,     1,    25,     0,     2,     3,     4,     0,     0,     0,
       5,     0,     6,     0,     0,     0,     8,     0,     0,     0,
       0,     0,    11,    12,    13,     0,     0,     0,   216,    26,
      27,     0,     0,     0,    16,    17,     0,     1,    18,    19,
       2,     0,     4,     0,     0,     0,    20,     0,     0,     0,
       0,     1,     8,     0,     2,     0,     4,    21,    22,    23,
      13,    24,     0,    25,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
      26,    27,     0,    21,    22,    23,    20,    24,     0,    25,
       0,     1,  -192,   255,     2,     0,     4,    21,    22,    23,
       0,    24,     0,    25,     0,     1,     8,   255,     2,     0,
       4,     0,     0,     0,    13,     0,    26,    27,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,    13,     1,
      26,    27,     2,     0,     4,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     8,   391,     0,    21,    22,    23,
      20,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    21,    22,    23,     0,    24,     0,    25,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
      26,    27,     0,     0,     0,    21,    22,    23,     0,    24,
       0,    25,     0,     0,    26,    27,   116,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-284))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       3,     0,   143,    13,   102,    11,    62,    10,   133,   134,
      86,    14,    15,   271,   210,    18,    92,   213,   301,   281,
      23,    24,    25,     6,     5,   150,   275,     7,    15,    15,
     155,    11,    31,    15,     6,   160,    15,     6,     3,    19,
      29,     6,     7,     8,   306,    34,     6,    12,    30,    14,
      15,    30,     0,    18,    19,    52,    53,    22,    91,    24,
      25,    26,    27,    30,    67,    30,     6,   316,    59,    60,
       3,    36,    37,    11,   215,    40,    41,    39,    61,    62,
     221,    28,    68,    48,   367,    72,    61,   351,    26,    61,
      67,    68,   356,    67,    59,    60,    61,   361,    63,    15,
      65,    39,   184,   185,    42,    43,    44,    45,    46,    47,
      68,    68,    39,    62,   378,   373,    15,    57,    58,    64,
      57,    61,    66,   264,    61,    67,    63,    92,    93,    70,
      31,    96,    69,    23,    49,   116,   261,   193,   194,    50,
      68,   144,   148,   146,   340,    51,    67,   153,    86,   345,
     131,    34,    91,    67,   135,   158,   232,    67,    67,   169,
      67,   141,   165,    67,    67,   290,    26,    39,   148,    62,
       6,    68,    72,   153,   299,    62,   317,    94,   303,    34,
      54,    55,    56,     3,    58,     6,     6,   285,     8,   287,
      67,    39,     3,   196,    39,     6,    62,     8,    18,   202,
     180,   204,    69,    68,    68,    64,    26,    18,    62,    67,
       6,     6,    68,     6,    67,    26,    67,   220,    67,    69,
      67,   297,    62,    67,   227,    67,   206,   230,    48,    67,
     233,    68,    52,   374,    67,   238,    68,    48,   363,    59,
      60,    61,    57,    63,    67,    65,    57,    58,    59,    60,
      61,   254,    63,   351,    65,    68,    31,    67,   356,   225,
     168,   163,   181,   361,   220,   183,   188,   337,   381,   272,
     182,    89,    92,    93,   376,   375,   275,    -1,    -1,   282,
     378,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   295,   296,    -1,    -1,    -1,    -1,   301,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,     6,     7,     8,   318,    -1,   316,    12,    -1,
      14,    15,   325,    -1,    18,    19,   329,    -1,    22,    -1,
      24,    25,    26,    27,   337,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   367,    59,    60,    61,    -1,    63,
       3,    65,    -1,     6,     7,     8,    -1,   380,   381,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    -1,   391,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    36,    37,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,
      63,     3,    65,    -1,     6,     7,     8,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    -1,    -1,    -1,    91,    92,
      93,    -1,    -1,    -1,    36,    37,    -1,     3,    40,    41,
       6,    -1,     8,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,     3,    18,    -1,     6,    -1,     8,    59,    60,    61,
      26,    63,    -1,    65,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    59,    60,    61,    48,    63,    -1,    65,
      -1,     3,    68,    69,     6,    -1,     8,    59,    60,    61,
      -1,    63,    -1,    65,    -1,     3,    18,    69,     6,    -1,
       8,    -1,    -1,    -1,    26,    -1,    92,    93,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,     3,
      92,    93,     6,    -1,     8,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    57,    -1,    59,    60,    61,
      48,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    -1,    63,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    -1,    -1,    59,    60,    61,    -1,    63,
      -1,    65,    -1,    -1,    92,    93,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,    12,    14,    15,    18,    19,
      22,    24,    25,    26,    27,    30,    36,    37,    40,    41,
      48,    59,    60,    61,    63,    65,    92,    93,    99,   100,
     101,   116,   117,   120,   121,   125,   131,   132,   133,   134,
     135,   136,   138,   142,   144,   146,   147,   150,   151,   152,
     163,   164,   166,   168,   169,   172,   174,   176,   178,   180,
     183,   186,   187,   188,   197,   198,   212,    52,   126,   127,
     163,   137,   212,   172,   210,     6,   163,   210,     6,   168,
     154,   163,   163,   139,   163,   172,   163,   190,   202,   163,
     191,   199,   163,   192,   214,   215,   218,     0,    91,   100,
     119,   213,    30,   162,   165,   167,   170,   173,   175,   177,
     179,   181,   184,   186,   196,     3,    72,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   122,
     123,   124,   163,   129,   211,    39,    61,   102,    68,   143,
     153,    28,   155,    68,    67,   140,    39,   145,    15,   203,
     204,   233,    62,    15,   200,   201,   229,    64,    68,   219,
     220,   233,    66,    70,   118,    67,   130,   164,    31,    23,
      11,    26,    39,    42,    43,    44,    45,    46,    47,    86,
     171,    50,    49,    51,    52,    53,    59,    60,   182,    54,
      55,    56,    58,   185,    57,    61,    63,    69,   189,   205,
     212,   212,    67,   128,    67,   130,    67,   130,   212,     6,
      61,   103,   104,   105,   112,    68,    91,   117,   156,    67,
      67,    68,   172,   156,   163,   163,   210,    67,   130,   210,
      67,   130,   163,    67,   130,   120,    91,   163,    34,   166,
     168,    26,    39,   172,   174,   176,   178,   180,   180,   183,
     186,   186,   193,   221,   222,    69,   163,   194,   206,   208,
       6,   163,   163,   172,    68,   112,   113,    62,    57,    58,
     107,   112,    72,   106,   156,    94,    34,   149,     6,   154,
     156,   148,    67,   141,   141,    39,   163,    39,   163,   216,
     217,   233,   163,   163,    62,    57,    58,   163,   223,   226,
      69,    68,    64,   207,    67,   130,   156,   115,    62,     6,
       6,   106,   163,   109,   110,   116,   157,    68,    29,   149,
     163,   164,   158,   159,   164,    67,   130,   163,   163,    72,
     227,   233,    67,   130,    69,   163,   194,    67,   130,   149,
      67,   114,    67,   108,    67,    67,   111,    96,   116,   156,
     163,    30,   232,   233,   234,   235,    30,   228,   229,   230,
     231,    67,   160,   161,   163,   224,   163,    68,   195,   209,
     208,   112,    57,   112,    68,   159,   159,   159,    67,   130,
      68,    67,   225,   194,     6,   106,   156,   235,   231,   159,
     163,    57,   226,   163
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
// Node *identificadorN = ast->bIDENTIFICADORNode($1.miUnion.nodeT);
 //$$.miUnion.nodeT = (ast->bFUNCIONNode($1.envolv.miUnion.nodeT, $3.envolv.miUnion.nodeT, $5.envolv.miUnion.nodeT));
}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 62 "pypar.y"
    {}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 65 "pypar.y"
    {}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 68 "pypar.y"
    {}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 70 "pypar.y"
    {}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 73 "pypar.y"
    {}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 76 "pypar.y"
    {}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 79 "pypar.y"
    {}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 81 "pypar.y"
    {}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 84 "pypar.y"
    {}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 86 "pypar.y"
    {}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 89 "pypar.y"
    {}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 92 "pypar.y"
    {}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 95 "pypar.y"
    {}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 97 "pypar.y"
    {}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 100 "pypar.y"
    {}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 103 "pypar.y"
    {}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 105 "pypar.y"
    {}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 108 "pypar.y"
    {}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 110 "pypar.y"
    {}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 113 "pypar.y"
    {}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 116 "pypar.y"
    {}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 119 "pypar.y"
    {}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 122 "pypar.y"
    {}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 124 "pypar.y"
    {}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 127 "pypar.y"
    {}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 130 "pypar.y"
    {}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 133 "pypar.y"
    {}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 136 "pypar.y"
    {}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 139 "pypar.y"
    {}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 142 "pypar.y"
    {}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 144 "pypar.y"
    {}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 147 "pypar.y"
    {}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 149 "pypar.y"
    {}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 152 "pypar.y"
    {}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 155 "pypar.y"
    {}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 158 "pypar.y"
    {}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 161 "pypar.y"
    {}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 164 "pypar.y"
    {}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 167 "pypar.y"
    {}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 170 "pypar.y"
    {}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 173 "pypar.y"
    {}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 176 "pypar.y"
    {}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 179 "pypar.y"
    {}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 182 "pypar.y"
    {}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 184 "pypar.y"
    {}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 187 "pypar.y"
    {}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 190 "pypar.y"
    {}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 193 "pypar.y"
    {}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 196 "pypar.y"
    {}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 199 "pypar.y"
    {}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 202 "pypar.y"
    {}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 205 "pypar.y"
    {}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 208 "pypar.y"
    {}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 211 "pypar.y"
    {}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 214 "pypar.y"
    {}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 217 "pypar.y"
    {}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 221 "pypar.y"
    {}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 223 "pypar.y"
    {}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 225 "pypar.y"
    {}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 227 "pypar.y"
    {}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 230 "pypar.y"
    {}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 232 "pypar.y"
    {}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 235 "pypar.y"
    {}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 237 "pypar.y"
    {}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 239 "pypar.y"
    {}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 240 "pypar.y"
    {}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 243 "pypar.y"
    {}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 246 "pypar.y"
    {(yyval.nodeT)=ast->bDELNode((yyvsp[(1) - (2)].cad));}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 250 "pypar.y"
    {}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 254 "pypar.y"
    {}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 257 "pypar.y"
    {}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 260 "pypar.y"
    {}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 263 "pypar.y"
    {}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 267 "pypar.y"
    {}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 271 "pypar.y"
    {}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 275 "pypar.y"
    {}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 278 "pypar.y"
    {}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 281 "pypar.y"
    {}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 284 "pypar.y"
    {}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 287 "pypar.y"
    {}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 290 "pypar.y"
    {}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 292 "pypar.y"
    {}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 295 "pypar.y"
    {}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 297 "pypar.y"
    {}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 300 "pypar.y"
    {}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 303 "pypar.y"
    {}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 306 "pypar.y"
    {}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 308 "pypar.y"
    {}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 311 "pypar.y"
    {}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 314 "pypar.y"
    {}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 316 "pypar.y"
    {}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 318 "pypar.y"
    {}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 321 "pypar.y"
    {}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 324 "pypar.y"
    {}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 327 "pypar.y"
    {}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 330 "pypar.y"
    {}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 334 "pypar.y"
    {}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 338 "pypar.y"
    {}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 340 "pypar.y"
    {}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 342 "pypar.y"
    {}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 344 "pypar.y"
    {}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 347 "pypar.y"
    {}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 351 "pypar.y"
    {}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 354 "pypar.y"
    {}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 357 "pypar.y"
    {}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 359 "pypar.y"
    {}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 361 "pypar.y"
    {}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 364 "pypar.y"
    {}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 366 "pypar.y"
    {}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 368 "pypar.y"
    {}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 370 "pypar.y"
    {}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 373 "pypar.y"
    {}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 375 "pypar.y"
    {}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 378 "pypar.y"
    {}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 381 "pypar.y"
    {}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 384 "pypar.y"
    {}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 387 "pypar.y"
    {}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 389 "pypar.y"
    {}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 392 "pypar.y"
    {}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 394 "pypar.y"
    {}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 396 "pypar.y"
    {}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 400 "pypar.y"
    {}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 403 "pypar.y"
    {}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 405 "pypar.y"
    {}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 407 "pypar.y"
    {}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 410 "pypar.y"
    {}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 412 "pypar.y"
    {}
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 414 "pypar.y"
    {}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 416 "pypar.y"
    {}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 419 "pypar.y"
    {}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 422 "pypar.y"
    {}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 424 "pypar.y"
    {}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 426 "pypar.y"
    {}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 428 "pypar.y"
    {}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 430 "pypar.y"
    {}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 432 "pypar.y"
    {}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 434 "pypar.y"
    {}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 436 "pypar.y"
    {}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 438 "pypar.y"
    {}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 440 "pypar.y"
    {}
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 442 "pypar.y"
    {}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 444 "pypar.y"
    {}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 446 "pypar.y"
    {}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 449 "pypar.y"
    {}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 452 "pypar.y"
    {}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 454 "pypar.y"
    {}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 456 "pypar.y"
    {}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 459 "pypar.y"
    {}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 461 "pypar.y"
    {}
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 463 "pypar.y"
    {}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 466 "pypar.y"
    {}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 468 "pypar.y"
    {}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 470 "pypar.y"
    {}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 473 "pypar.y"
    {}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 476 "pypar.y"
    {}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 478 "pypar.y"
    {}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 480 "pypar.y"
    {}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 483 "pypar.y"
    {}
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 485 "pypar.y"
    {}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 487 "pypar.y"
    {}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 489 "pypar.y"
    {}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 492 "pypar.y"
    {}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 495 "pypar.y"
    {}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 497 "pypar.y"
    {}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 499 "pypar.y"
    {}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 501 "pypar.y"
    {}
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 503 "pypar.y"
    {}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 505 "pypar.y"
    {}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 508 "pypar.y"
    {}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 510 "pypar.y"
    {}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 513 "pypar.y"
    {}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 515 "pypar.y"
    {}
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 517 "pypar.y"
    {}
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 520 "pypar.y"
    {}
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 523 "pypar.y"
    {}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 525 "pypar.y"
    {}
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 527 "pypar.y"
    {}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 529 "pypar.y"
    {}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 531 "pypar.y"
    {}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 533 "pypar.y"
    {}
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 535 "pypar.y"
    {}
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 537 "pypar.y"
    {}
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 539 "pypar.y"
    {}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 541 "pypar.y"
    {}
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 543 "pypar.y"
    {}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 545 "pypar.y"
    {}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 547 "pypar.y"
    {}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 549 "pypar.y"
    {}
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 551 "pypar.y"
    {}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 553 "pypar.y"
    {}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 555 "pypar.y"
    {}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 558 "pypar.y"
    {}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 561 "pypar.y"
    {}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 564 "pypar.y"
    {}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 567 "pypar.y"
    {}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 570 "pypar.y"
    {}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 573 "pypar.y"
    {}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 576 "pypar.y"
    {}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 579 "pypar.y"
    {}
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 583 "pypar.y"
    {}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 585 "pypar.y"
    {}
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 588 "pypar.y"
    {}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 591 "pypar.y"
    {}
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 593 "pypar.y"
    {}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 596 "pypar.y"
    {}
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 598 "pypar.y"
    {}
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 600 "pypar.y"
    {}
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 603 "pypar.y"
    {}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 605 "pypar.y"
    {}
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 608 "pypar.y"
    {}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 610 "pypar.y"
    {}
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 612 "pypar.y"
    {}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 614 "pypar.y"
    {}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 616 "pypar.y"
    {}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 619 "pypar.y"
    {}
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 622 "pypar.y"
    {}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 624 "pypar.y"
    {}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 626 "pypar.y"
    {}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 628 "pypar.y"
    {}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 630 "pypar.y"
    {}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 633 "pypar.y"
    {}
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 636 "pypar.y"
    {}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 639 "pypar.y"
    {}
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 641 "pypar.y"
    {}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 643 "pypar.y"
    {}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 646 "pypar.y"
    {}
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 648 "pypar.y"
    {}
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 650 "pypar.y"
    {}
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 652 "pypar.y"
    {}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 655 "pypar.y"
    {}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 658 "pypar.y"
    {}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 660 "pypar.y"
    {}
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 663 "pypar.y"
    {}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 665 "pypar.y"
    {}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 667 "pypar.y"
    {}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 670 "pypar.y"
    {}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 672 "pypar.y"
    {}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 675 "pypar.y"
    {}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 677 "pypar.y"
    {}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 679 "pypar.y"
    {}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 682 "pypar.y"
    {}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 684 "pypar.y"
    {}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 686 "pypar.y"
    {}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 688 "pypar.y"
    {}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 690 "pypar.y"
    {}
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 693 "pypar.y"
    {}
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 695 "pypar.y"
    {}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 697 "pypar.y"
    {}
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 699 "pypar.y"
    {}
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 702 "pypar.y"
    {}
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 704 "pypar.y"
    {}
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 707 "pypar.y"
    {}
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 709 "pypar.y"
    {}
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 711 "pypar.y"
    {}
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 714 "pypar.y"
    {}
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 717 "pypar.y"
    {}
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 720 "pypar.y"
    {}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 723 "pypar.y"
    {}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 726 "pypar.y"
    {}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 728 "pypar.y"
    {}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 731 "pypar.y"
    {}
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 734 "pypar.y"
    {}
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 737 "pypar.y"
    {}
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 740 "pypar.y"
    {}
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 743 "pypar.y"
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
#line 745 "pypar.y"

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


