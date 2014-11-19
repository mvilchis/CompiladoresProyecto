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
#define YYFINAL  92
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   543

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNRULES -- Number of states.  */
#define YYNSTATES  385

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
      54,    57,    62,    63,    65,    66,    69,    70,    72,    76,
      80,    82,    83,    87,    88,    90,    92,    97,    99,   100,
     104,   105,   107,   109,   111,   113,   115,   117,   119,   122,
     125,   127,   130,   131,   133,   135,   137,   139,   141,   143,
     145,   147,   149,   151,   153,   155,   158,   160,   164,   168,
     169,   173,   174,   178,   179,   181,   182,   185,   187,   189,
     191,   193,   195,   197,   200,   202,   203,   207,   211,   212,
     216,   220,   221,   223,   225,   227,   229,   231,   238,   244,
     245,   249,   250,   256,   264,   270,   274,   275,   278,   281,
     282,   284,   289,   292,   294,   297,   299,   302,   306,   309,
     314,   315,   318,   321,   325,   326,   329,   333,   334,   337,
     339,   342,   346,   347,   349,   351,   353,   355,   357,   359,
     361,   363,   366,   368,   371,   374,   378,   379,   382,   386,
     387,   390,   394,   395,   398,   402,   406,   407,   410,   414,
     415,   417,   419,   422,   426,   427,   429,   431,   433,   435,
     438,   440,   442,   444,   448,   451,   452,   454,   455,   457,
     458,   460,   461,   463,   464,   466,   467,   469,   470,   473,
     474,   478,   482,   486,   488,   490,   492,   494,   496,   498,
     501,   503,   506,   508,   511,   515,   516,   519,   521,   524,
     528,   529,   533,   537,   540,   544,   548,   549,   553,   555,
     560,   563,   567,   571,   572,   576,   580,   581,   583,   585,
     590,   592,   595,   601,   602,   605,   607,   610,   614,   615,
     618,   622,   623,   626,   631,   634,   638,   639,   643,   644,
     647,   651,   653,   654,   656,   658,   664,   668,   670,   671,
     673,   675,   681,   685,   687
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      99,     0,    -1,   100,    -1,   100,    91,    -1,   117,   100,
      -1,    -1,    19,     6,   102,    68,   153,    -1,    61,   103,
      62,    -1,   104,    -1,    -1,   105,   107,    -1,   113,   106,
     109,    -1,   105,   113,   106,    67,    -1,    -1,    72,   160,
      -1,    -1,    58,     6,   108,    -1,    57,     6,    -1,    67,
      57,     6,    -1,    -1,   110,   111,    -1,   110,    67,   113,
     106,    -1,    -1,    67,    -1,    -1,    67,   160,    -1,    -1,
       6,    -1,    61,   114,    62,    -1,   113,   116,   115,    -1,
      67,    -1,    -1,   116,    67,   113,    -1,    -1,   118,    -1,
     143,    -1,   121,   120,   119,    91,    -1,    70,    -1,    -1,
     120,    70,   121,    -1,    -1,   122,    -1,   126,    -1,   132,
      -1,   133,    -1,   134,    -1,   139,    -1,   141,    -1,   209,
     123,    -1,   125,   209,    -1,   124,    -1,    72,   209,    -1,
      -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,    84,    -1,    83,
      -1,    85,    -1,    78,    -1,     7,   127,    -1,   128,    -1,
      52,   160,   129,    -1,   160,   130,   131,    -1,    -1,    67,
     160,   131,    -1,    -1,   130,    67,   160,    -1,    -1,    67,
      -1,    -1,    24,   207,    -1,    36,    -1,   135,    -1,   136,
      -1,   137,    -1,    37,    -1,    14,    -1,    12,   138,    -1,
     209,    -1,    -1,    25,     6,   140,    -1,   140,    67,     6,
      -1,    -1,    41,   169,   142,    -1,    39,   160,   112,    -1,
      -1,   144,    -1,   147,    -1,   148,    -1,   149,    -1,   101,
      -1,    30,   160,    68,   153,   145,   146,    -1,   145,    29,
     160,    68,   153,    -1,    -1,    34,    68,   153,    -1,    -1,
      22,   160,    68,   153,   146,    -1,    15,   207,    39,   209,
      68,   153,   146,    -1,    27,   151,   150,    68,   153,    -1,
     150,    67,   151,    -1,    -1,   160,   152,    -1,    28,   169,
      -1,    -1,   118,    -1,    91,    94,   154,    96,    -1,   154,
     117,    -1,   117,    -1,   156,   157,    -1,   161,    -1,   158,
     131,    -1,   158,    67,   156,    -1,    67,   156,    -1,    30,
     161,    34,   160,    -1,    -1,   161,   159,    -1,   163,   162,
      -1,   162,    31,   163,    -1,    -1,   165,   164,    -1,   164,
      23,   165,    -1,    -1,    26,   165,    -1,   166,    -1,   169,
     167,    -1,   167,   168,   169,    -1,    -1,    47,    -1,    46,
      -1,    43,    -1,    44,    -1,    45,    -1,    86,    -1,    42,
      -1,    39,    -1,    26,    39,    -1,    11,    -1,    11,    26,
      -1,   171,   170,    -1,   170,    50,   171,    -1,    -1,   173,
     172,    -1,   172,    49,   173,    -1,    -1,   175,   174,    -1,
     174,    51,   175,    -1,    -1,   177,   176,    -1,   176,    53,
     177,    -1,   176,    52,   177,    -1,    -1,   180,   178,    -1,
     178,   179,   180,    -1,    -1,    60,    -1,    59,    -1,   183,
     181,    -1,   181,   182,   183,    -1,    -1,    58,    -1,    56,
      -1,    54,    -1,    55,    -1,   184,   183,    -1,   185,    -1,
      60,    -1,    59,    -1,   194,   193,   186,    -1,    57,   183,
      -1,    -1,   199,    -1,    -1,   196,    -1,    -1,   211,    -1,
      -1,   218,    -1,    -1,   160,    -1,    -1,   206,    -1,    -1,
     193,   202,    -1,    -1,    61,   187,    62,    -1,    63,   188,
      64,    -1,    65,   189,    66,    -1,     6,    -1,    93,    -1,
      92,    -1,   195,    -1,    18,    -1,     8,    -1,   195,     3,
      -1,     3,    -1,   160,   197,    -1,   226,    -1,   198,   131,
      -1,   198,    67,   160,    -1,    -1,   160,   200,    -1,   230,
      -1,   201,   131,    -1,   201,    67,   160,    -1,    -1,    61,
     190,    62,    -1,    63,   203,    64,    -1,    69,     6,    -1,
     205,   204,   131,    -1,   204,    67,   205,    -1,    -1,    69,
      69,    69,    -1,   160,    -1,   191,    68,   191,   192,    -1,
      68,   191,    -1,   169,   208,   131,    -1,   208,    67,   169,
      -1,    -1,   160,   210,   131,    -1,   210,    67,   160,    -1,
      -1,   212,    -1,   215,    -1,   160,    68,   160,   213,    -1,
     230,    -1,   214,   131,    -1,   214,    67,   160,    68,   160,
      -1,    -1,   160,   216,    -1,   230,    -1,   217,   131,    -1,
     217,    67,   160,    -1,    -1,   219,   220,    -1,   219,   223,
      67,    -1,    -1,   223,   131,    -1,    58,   160,   221,   222,
      -1,    57,   160,    -1,   221,    67,   223,    -1,    -1,    67,
      57,   160,    -1,    -1,   160,   224,    -1,   160,    72,   160,
      -1,   230,    -1,    -1,   226,    -1,   227,    -1,    15,   207,
      39,   155,   228,    -1,    30,   156,   228,    -1,   225,    -1,
      -1,   230,    -1,   231,    -1,    15,   207,    39,   161,   232,
      -1,    30,   156,   232,    -1,   229,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    51,    52,    54,    58,    63,    65,    66,
      69,    72,    76,    79,    82,    87,    90,    95,    99,   103,
     107,   111,   112,   116,   117,   121,   122,   125,   126,   128,
     130,   132,   135,   136,   139,   140,   142,   145,   148,   152,
     155,   157,   160,   163,   166,   169,   172,   175,   179,   181,
     182,   183,   184,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   202,   208,   209,   213,   214,
     218,   221,   223,   226,   229,   232,   237,   240,   243,   244,
     245,   249,   252,   255,   257,   258,   261,   266,   271,   274,
     276,   277,   279,   282,   285,   288,   291,   296,   303,   310,
     312,   313,   316,   319,   327,   329,   330,   332,   334,   335,
     337,   338,   342,   345,   349,   353,   357,   361,   364,   368,
     375,   379,   384,   388,   392,   396,   400,   405,   409,   412,
     414,   416,   417,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   431,   433,   434,   436,   438,   439,
     441,   443,   444,   446,   448,   449,   450,   452,   454,   455,
     457,   458,   460,   462,   463,   465,   466,   467,   468,   471,
     472,   474,   475,   477,   479,   480,   482,   483,   485,   486,
     488,   489,   491,   492,   494,   495,   497,   498,   500,   501,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   514,
     515,   517,   520,   521,   524,   525,   527,   529,   530,   532,
     533,   535,   536,   537,   539,   541,   542,   544,   545,   546,
     548,   550,   552,   555,   559,   561,   562,   564,   565,   567,
     569,   570,   572,   573,   575,   577,   578,   580,   581,   583,
     585,   586,   588,   589,   590,   592,   593,   595,   596,   599,
     600,   602,   603,   605,   606,   608,   610,   612,   613,   615,
     616,   618,   620,   622,   623
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
  "varargslist_aux_c", "n2", "n3", "s5", "fpdef", "fplist", "fpl_aux",
  "fplist_aux", "stmt", "simple_stmt", "ss_aux", "simple_stmt_aux",
  "small_stmt", "expr_stmt", "expr_stmt_aux_b", "expr_stmt_aux_b_a",
  "augassign", "print_stmt", "s29", "s30", "s31", "s32", "comaS",
  "del_stmt", "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt",
  "return_stmt", "return_stmt_aux", "global_stmt", "global_stmt_aux",
  "exec_stmt", "s7", "compound_stmt", "if_stmt", "if_stmt_aux", "s8",
  "while_stmt", "for_stmt", "with_stmt", "with_stmt_aux", "with_item",
  "s10", "suite", "suite_aux", "testlist_safe", "old_test", "n10", "s13",
  "s15", "test", "or_test", "or_test_aux", "and_test", "and_test_aux",
  "not_test", "comparison", "comparison_aux", "comp_op", "expr",
  "expr_aux", "xor_expr", "xor_expr_aux", "and_expr", "and_expr_aux",
  "shift_expr", "shift_expr_aux", "arith_expr", "arith_expr_aux", "ae_aux",
  "term", "term_aux", "t_aux", "factor", "factor_aux", "power", "s16",
  "s17", "s18", "s19", "s20", "s21", "s22", "power_aux", "atom",
  "string_aux", "listmaker", "listmaker_aux", "lm_aux", "testlist_comp",
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
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     115,   115,   116,   116,   117,   117,   118,   119,   119,   120,
     120,   121,   121,   121,   121,   121,   121,   121,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   133,   134,   134,
     134,   135,   136,   137,   138,   138,   139,   140,   140,   141,
     142,   142,   143,   143,   143,   143,   143,   144,   145,   145,
     146,   146,   147,   148,   149,   150,   150,   151,   152,   152,
     153,   153,   154,   154,   155,   156,   157,   158,   158,   159,
     159,   160,   161,   162,   162,   163,   164,   164,   165,   165,
     166,   167,   167,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   169,   170,   170,   171,   172,   172,
     173,   174,   174,   175,   176,   176,   176,   177,   178,   178,
     179,   179,   180,   181,   181,   182,   182,   182,   182,   183,
     183,   184,   184,   185,   186,   186,   187,   187,   188,   188,
     189,   189,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   195,
     195,   196,   197,   197,   198,   198,   199,   200,   200,   201,
     201,   202,   202,   202,   203,   204,   204,   205,   205,   205,
     206,   207,   208,   208,   209,   210,   210,   211,   211,   212,
     213,   213,   214,   214,   215,   216,   216,   217,   217,   218,
     219,   219,   220,   220,   220,   221,   221,   222,   222,   223,
     223,   224,   224,   225,   225,   226,   227,   228,   228,   229,
     229,   230,   231,   232,   232
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     5,     3,     1,     0,
       2,     3,     4,     0,     2,     0,     3,     2,     3,     0,
       2,     4,     0,     1,     0,     2,     0,     1,     3,     3,
       1,     0,     3,     0,     1,     1,     4,     1,     0,     3,
       0,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     3,     0,
       3,     0,     3,     0,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     0,     3,     3,     0,     3,
       3,     0,     1,     1,     1,     1,     1,     6,     5,     0,
       3,     0,     5,     7,     5,     3,     0,     2,     2,     0,
       1,     4,     2,     1,     2,     1,     2,     3,     2,     4,
       0,     2,     2,     3,     0,     2,     3,     0,     2,     1,
       2,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     3,     0,     2,     3,     0,
       2,     3,     0,     2,     3,     3,     0,     2,     3,     0,
       1,     1,     2,     3,     0,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     2,     0,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     2,     3,     0,     2,     1,     2,     3,
       0,     3,     3,     2,     3,     3,     0,     3,     1,     4,
       2,     3,     3,     0,     3,     3,     0,     1,     1,     4,
       1,     2,     5,     0,     2,     1,     2,     3,     0,     2,
       3,     0,     2,     4,     2,     3,     0,     3,     0,     2,
       3,     1,     0,     1,     1,     5,     3,     1,     0,     1,
       1,     5,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,   200,   193,    69,   198,    85,    82,     0,   197,     0,
       0,     0,     0,     0,     0,     0,    77,    81,     0,   172,
     171,   177,   179,   181,   195,   194,     0,     2,    96,     5,
      34,    40,    41,    42,    43,    44,    45,    78,    79,    80,
      46,    47,    35,    92,    93,    94,    95,   226,   120,   124,
     127,   129,   132,   146,   149,   152,   156,   159,   164,     0,
     170,   189,   196,    52,     0,    65,    66,    73,    83,    84,
     223,     0,     0,     0,    76,    88,   128,   106,   109,     0,
      91,   210,     0,   176,   205,     0,   178,   238,     0,   180,
     227,   228,     1,     3,     4,    38,    75,     0,   121,   122,
     125,   130,   144,   147,   150,   153,   157,   162,   169,   175,
     199,     0,    53,    54,    55,    56,    64,    57,    58,    59,
      60,    62,    61,    63,    48,    50,     0,    71,    75,    75,
       0,    13,     0,     0,    86,     0,     0,   107,     0,     0,
      89,     0,   206,    75,   207,   190,     0,   201,    75,   202,
     191,     0,   234,    75,   235,   192,    37,     0,    74,   224,
       0,     0,     0,   142,     0,   140,   139,   135,   136,   137,
     134,   133,   138,     0,     0,     0,     0,     0,     0,   161,
     160,     0,   167,   168,   166,   165,     0,     0,   241,   185,
       0,   173,   188,    51,    49,     0,    67,    74,    68,    74,
     221,     0,    27,     0,     0,     8,     0,    15,     0,     0,
     110,   101,     0,     0,     0,   108,    99,    26,     0,    74,
     208,     0,    74,   203,   233,    74,   236,    39,    36,   225,
       0,   123,   126,   143,   141,   131,   145,   148,   151,   155,
     154,   158,   163,   174,     0,   182,     0,     0,   218,     0,
       0,   216,   213,    75,    72,   222,     0,    33,     0,     7,
       0,     0,    10,    15,     0,    22,     6,     0,     0,   102,
      87,   105,   104,   101,     0,    90,     0,   209,     0,   204,
     229,    75,   230,   237,   119,   211,     0,     0,   252,   239,
      75,     0,   185,   212,    75,    74,    70,   101,    31,    28,
      17,    19,     0,    14,    11,    24,   113,     0,     0,     0,
      97,    25,   264,   258,     0,   115,    74,   231,   244,   246,
       0,   249,   251,   240,   242,   217,   184,   187,    74,   214,
     103,    30,    29,     0,    16,    12,    23,    20,   111,   112,
     100,     0,     0,   263,   259,   260,   261,     0,   257,   253,
     254,   255,     0,   114,    75,     0,   248,   250,   185,   219,
     186,   215,    32,     0,    15,     0,   264,   258,   118,    74,
     116,     0,     0,   243,   220,    18,    21,    98,   262,   256,
     117,   232,     0,   245,   247
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    28,   132,   204,   205,   206,   265,   262,
     334,   304,   305,   337,   275,   207,   258,   332,   298,    29,
     210,   157,    95,    31,    32,   124,   125,   126,    33,    65,
      66,   196,   128,   159,    34,    35,    36,    37,    38,    39,
      68,    40,   134,    41,   140,    42,    43,   273,   269,    44,
      45,    46,   135,    77,   137,   211,   307,   313,   314,   353,
     354,    98,    47,    48,    99,    49,   100,    50,    51,   101,
     173,    52,   102,    53,   103,    54,   104,    55,   105,    56,
     106,   181,    57,   107,   186,    58,    59,    60,   191,    82,
      85,    88,   244,   249,   359,   109,    61,    62,    86,   147,
     148,    83,   142,   143,   192,   250,   294,   251,   360,    71,
     129,    63,    96,    89,    90,   280,   281,    91,   152,   153,
     245,   246,   289,   356,   373,   290,   321,   348,   349,   350,
     351,   343,   344,   345,   346
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -272
static const yytype_int16 yypact[] =
{
      45,  -272,  -272,   272,  -272,   415,  -272,   450,  -272,    10,
     415,   450,    20,   415,   415,   415,  -272,  -272,   450,  -272,
    -272,   415,   415,   415,  -272,  -272,    31,   -48,  -272,    45,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,    24,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,   450,
    -272,  -272,    44,   451,   415,  -272,  -272,  -272,  -272,  -272,
    -272,    23,    -5,    -2,  -272,  -272,  -272,  -272,    40,    12,
      49,    81,    47,  -272,   105,    58,  -272,    17,    57,  -272,
    -272,  -272,  -272,  -272,   -48,    56,    63,   415,  -272,   101,
     120,    72,    94,    96,    95,    -7,    41,   148,  -272,   132,
    -272,   415,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,   415,    82,    84,    86,
     415,    16,    92,   335,    99,    35,   450,  -272,   335,   415,
    -272,   450,  -272,   100,  -272,  -272,   450,  -272,   104,  -272,
    -272,   415,  -272,   109,  -272,  -272,   379,    77,   415,  -272,
     129,   415,   415,   146,   138,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,   450,   450,   450,   450,   450,   450,  -272,
    -272,   450,  -272,  -272,  -272,  -272,   450,   450,   117,   404,
     176,  -272,  -272,  -272,  -272,   415,  -272,   415,  -272,   450,
    -272,   116,  -272,    33,   123,  -272,    70,   115,   335,   102,
    -272,   154,   191,   415,   335,  -272,  -272,   133,   160,   415,
    -272,   166,   415,  -272,    81,   415,  -272,  -272,  -272,  -272,
     415,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,   145,  -272,    32,   139,   141,   144,
     149,  -272,  -272,   147,  -272,  -272,   335,  -272,   153,  -272,
     212,   214,  -272,   115,   415,  -272,  -272,    45,   155,  -272,
    -272,  -272,  -272,     8,   415,  -272,   415,  -272,   415,  -272,
    -272,   157,  -272,  -272,  -272,  -272,   415,   415,     2,  -272,
     158,   152,   415,  -272,   159,  -272,  -272,   154,   161,  -272,
    -272,   162,   169,  -272,  -272,   171,  -272,   285,   335,   415,
    -272,  -272,    19,    69,   175,  -272,   415,  -272,  -272,  -272,
     415,  -272,  -272,   177,  -272,  -272,  -272,   178,   172,  -272,
    -272,    33,  -272,   187,  -272,  -272,    33,  -272,  -272,  -272,
    -272,   180,   415,  -272,  -272,  -272,  -272,   415,  -272,  -272,
    -272,  -272,   415,  -272,   182,   183,   186,  -272,   415,  -272,
    -272,  -272,  -272,   239,   115,   335,    19,    69,  -272,   415,
    -272,   415,   428,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,   415,  -272,  -272
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,  -272,   221,  -272,  -272,  -272,  -272,  -272,  -257,  -272,
    -272,  -272,  -272,  -272,  -272,  -179,  -272,  -272,  -272,  -252,
       1,  -272,  -272,    98,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -120,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -232,  -272,
    -272,  -272,  -272,    42,  -272,  -135,  -272,  -272,  -213,  -272,
    -272,  -272,    -3,   -95,  -272,    97,  -272,     0,  -272,  -272,
    -272,    18,  -272,    85,  -272,    87,  -272,    80,  -272,   -65,
    -272,  -272,    79,  -272,  -272,   -45,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -271,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,   -62,  -272,    -6,
    -272,    39,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -109,  -272,  -272,   185,  -272,
    -100,  -272,   -77,  -272,   -96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -186
static const yytype_int16 yytable[] =
{
      67,    30,   160,   216,   144,    74,   302,    73,   198,   200,
     154,    78,    79,    76,   108,   306,    72,   141,    81,    84,
      87,   327,   202,   220,   257,    70,    75,   263,   223,    70,
      30,    92,   141,   226,   141,     1,    80,   309,     2,   202,
       4,   310,   268,    93,    69,   177,   178,   110,     1,   342,
       8,     2,     3,     4,    97,   339,   131,     5,    13,     6,
       7,   127,   130,     8,     9,   330,   133,    10,   136,    11,
      12,    13,    14,   266,   320,    15,   202,   203,    -9,   272,
     138,    16,    17,   163,   146,   151,    18,   374,   139,   286,
     287,    19,    20,    21,   203,    22,   141,    23,   164,   347,
     179,   180,   213,   214,    19,    20,    21,   376,    22,   145,
      23,   165,   239,   240,   166,   167,   168,   169,   170,   171,
     146,   297,   150,   155,    24,    25,   156,   260,   261,   366,
     158,   203,   161,   296,   367,   218,   217,    24,    25,   368,
     221,   242,   243,   162,   174,   175,   176,   282,   224,   195,
     193,   197,   362,   199,   215,   229,   380,   364,   172,    70,
     208,   317,   232,   230,    70,   194,   212,   219,   228,   201,
     324,   222,   233,   340,   329,     1,   225,   234,     2,  -183,
       4,   312,   252,   315,   256,   259,   248,   264,   268,   187,
       8,   235,   253,   188,   254,   189,   267,   270,    13,   276,
     274,   190,   182,   183,   184,   278,   185,   285,   291,  -184,
      78,   322,   292,   293,   295,   299,   277,   255,   300,   279,
     301,   325,   283,   308,   316,   323,   328,   284,   331,   333,
     377,    19,    20,    21,   370,    22,   335,    23,   336,   -74,
    -185,   247,   352,   288,   363,   375,   358,   315,   365,   369,
      94,   371,   315,   372,   227,   271,   238,   315,   231,   236,
     241,   303,   237,   383,    24,    25,   361,   379,    30,   149,
     378,   311,     0,     0,   315,     1,     0,     0,     2,     0,
       4,     0,     0,   318,   319,     0,     0,     0,     1,   326,
       8,     2,     3,     4,     0,     0,     0,     5,    13,     6,
       7,     0,     0,     8,     9,     0,   341,    10,    30,    11,
      12,    13,    14,   355,     0,    15,     0,   357,     0,     0,
       0,    16,    17,     0,    64,   248,    18,     0,     0,     0,
       0,    19,    20,    21,     0,    22,     0,    23,     1,     0,
       0,     2,     3,     4,    19,    20,    21,     5,    22,     6,
      23,     0,     0,     8,     0,   326,     0,     0,     0,    11,
      12,    13,     0,     0,    24,    25,     0,     0,   381,   288,
       0,    16,    17,     0,     0,     0,    18,    24,    25,   384,
       0,   338,     1,     0,     0,     2,     3,     4,     0,     0,
       0,     5,     0,     6,    19,    20,    21,     8,    22,     0,
      23,     0,     0,    11,    12,    13,     0,     1,     0,     0,
       2,     0,     4,     0,     0,    16,    17,     0,     1,     0,
      18,     2,     8,     4,     0,     0,   209,    24,    25,     0,
      13,     1,     0,     8,     2,     0,     4,     0,    19,    20,
      21,    13,    22,     0,    23,     0,     8,     0,     0,     0,
       0,     0,     0,     1,    13,     0,     2,     0,     4,     0,
       0,     0,     0,    19,    20,    21,     0,    22,     8,    23,
       0,    24,    25,   247,    19,    20,    21,     0,    22,     0,
      23,     0,     0,     0,     0,   382,     0,    19,    20,    21,
       0,    22,     0,    23,     0,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    19,
      20,    21,     0,    22,     0,    23,     0,     0,     0,     0,
      24,    25,     0,   111,     0,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,     0,     0,     0,
       0,     0,    24,    25
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-272))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       3,     0,    97,   138,    81,    11,   263,    10,   128,   129,
      87,    14,    15,    13,    59,   267,     6,    15,    21,    22,
      23,   292,     6,   143,   203,     7,     6,   206,   148,    11,
      29,     0,    15,   153,    15,     3,    18,    29,     6,     6,
       8,   273,    34,    91,     5,    52,    53,     3,     3,    30,
      18,     6,     7,     8,    30,   307,    61,    12,    26,    14,
      15,    64,    39,    18,    19,   297,    68,    22,    28,    24,
      25,    26,    27,   208,    72,    30,     6,    61,    62,   214,
      68,    36,    37,    11,    15,    68,    41,   358,    39,    57,
      58,    59,    60,    61,    61,    63,    15,    65,    26,    30,
      59,    60,    67,    68,    59,    60,    61,   364,    63,    62,
      65,    39,   177,   178,    42,    43,    44,    45,    46,    47,
      15,   256,    64,    66,    92,    93,    70,    57,    58,   342,
      67,    61,    31,   253,   347,   141,   139,    92,    93,   352,
     146,   186,   187,    23,    50,    49,    51,   224,   151,    67,
     111,    67,   331,    67,   136,   158,   369,   336,    86,   141,
      68,   281,   162,    34,   146,   126,    67,    67,    91,   130,
     290,    67,    26,   308,   294,     3,    67,    39,     6,    62,
       8,   276,     6,   278,    68,    62,   189,    72,    34,    57,
      18,   173,   195,    61,   197,    63,    94,     6,    26,    39,
      67,    69,    54,    55,    56,    39,    58,    62,    69,    68,
     213,   288,    68,    64,    67,    62,   219,   199,     6,   222,
       6,    69,   225,    68,    67,    67,    67,   230,    67,    67,
     365,    59,    60,    61,   354,    63,    67,    65,    67,    62,
      68,    69,    67,   246,    57,     6,    68,   342,    68,    67,
      29,    68,   347,    67,   156,   213,   176,   352,   161,   174,
     181,   264,   175,   372,    92,    93,   328,   367,   267,    84,
     366,   274,    -1,    -1,   369,     3,    -1,    -1,     6,    -1,
       8,    -1,    -1,   286,   287,    -1,    -1,    -1,     3,   292,
      18,     6,     7,     8,    -1,    -1,    -1,    12,    26,    14,
      15,    -1,    -1,    18,    19,    -1,   309,    22,   307,    24,
      25,    26,    27,   316,    -1,    30,    -1,   320,    -1,    -1,
      -1,    36,    37,    -1,    52,   328,    41,    -1,    -1,    -1,
      -1,    59,    60,    61,    -1,    63,    -1,    65,     3,    -1,
      -1,     6,     7,     8,    59,    60,    61,    12,    63,    14,
      65,    -1,    -1,    18,    -1,   358,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    92,    93,    -1,    -1,   371,   372,
      -1,    36,    37,    -1,    -1,    -1,    41,    92,    93,   382,
      -1,    96,     3,    -1,    -1,     6,     7,     8,    -1,    -1,
      -1,    12,    -1,    14,    59,    60,    61,    18,    63,    -1,
      65,    -1,    -1,    24,    25,    26,    -1,     3,    -1,    -1,
       6,    -1,     8,    -1,    -1,    36,    37,    -1,     3,    -1,
      41,     6,    18,     8,    -1,    -1,    91,    92,    93,    -1,
      26,     3,    -1,    18,     6,    -1,     8,    -1,    59,    60,
      61,    26,    63,    -1,    65,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    26,    -1,     6,    -1,     8,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    63,    18,    65,
      -1,    92,    93,    69,    59,    60,    61,    -1,    63,    -1,
      65,    -1,    -1,    -1,    -1,    57,    -1,    59,    60,    61,
      -1,    63,    -1,    65,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    59,
      60,    61,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,
      92,    93,    -1,    72,    -1,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    92,    93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,    12,    14,    15,    18,    19,
      22,    24,    25,    26,    27,    30,    36,    37,    41,    59,
      60,    61,    63,    65,    92,    93,    99,   100,   101,   117,
     118,   121,   122,   126,   132,   133,   134,   135,   136,   137,
     139,   141,   143,   144,   147,   148,   149,   160,   161,   163,
     165,   166,   169,   171,   173,   175,   177,   180,   183,   184,
     185,   194,   195,   209,    52,   127,   128,   160,   138,   209,
     169,   207,     6,   160,   207,     6,   165,   151,   160,   160,
     169,   160,   187,   199,   160,   188,   196,   160,   189,   211,
     212,   215,     0,    91,   100,   120,   210,    30,   159,   162,
     164,   167,   170,   172,   174,   176,   178,   181,   183,   193,
       3,    72,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   123,   124,   125,   160,   130,   208,
      39,    61,   102,    68,   140,   150,    28,   152,    68,    39,
     142,    15,   200,   201,   230,    62,    15,   197,   198,   226,
      64,    68,   216,   217,   230,    66,    70,   119,    67,   131,
     161,    31,    23,    11,    26,    39,    42,    43,    44,    45,
      46,    47,    86,   168,    50,    49,    51,    52,    53,    59,
      60,   179,    54,    55,    56,    58,   182,    57,    61,    63,
      69,   186,   202,   209,   209,    67,   129,    67,   131,    67,
     131,   209,     6,    61,   103,   104,   105,   113,    68,    91,
     118,   153,    67,    67,    68,   169,   153,   160,   207,    67,
     131,   207,    67,   131,   160,    67,   131,   121,    91,   160,
      34,   163,   165,    26,    39,   169,   171,   173,   175,   177,
     177,   180,   183,   183,   190,   218,   219,    69,   160,   191,
     203,   205,     6,   160,   160,   169,    68,   113,   114,    62,
      57,    58,   107,   113,    72,   106,   153,    94,    34,   146,
       6,   151,   153,   145,    67,   112,    39,   160,    39,   160,
     213,   214,   230,   160,   160,    62,    57,    58,   160,   220,
     223,    69,    68,    64,   204,    67,   131,   153,   116,    62,
       6,     6,   106,   160,   109,   110,   117,   154,    68,    29,
     146,   160,   161,   155,   156,   161,    67,   131,   160,   160,
      72,   224,   230,    67,   131,    69,   160,   191,    67,   131,
     146,    67,   115,    67,   108,    67,    67,   111,    96,   117,
     153,   160,    30,   229,   230,   231,   232,    30,   225,   226,
     227,   228,    67,   157,   158,   160,   221,   160,    68,   192,
     206,   205,   113,    57,   113,    68,   156,   156,   156,    67,
     131,    68,    67,   222,   191,     6,   106,   153,   232,   228,
     156,   160,    57,   223,   160
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
    {//Nada
}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 54 "pypar.y"
    {//Nada
}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 58 "pypar.y"
    {
  (yyval.nodeT)=ast->bFUNCIONNode(ast->bIDENTIFICADORNode((yyvsp[(2) - (5)].cad)), (yyvsp[(3) - (5)].nodeT), (yyvsp[(5) - (5)].nodeT));
}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 63 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(2) - (3)].nodeT);}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 65 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 66 "pypar.y"
    {//nodoParametro Void
}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 69 "pypar.y"
    {
	//Nodo Parametro Identificador $1, $2
	}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 72 "pypar.y"
    {
	//Nodo Parametro $2, $3
}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 76 "pypar.y"
    {
	//Nodo Parametro $1 $2 $3 
	}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 79 "pypar.y"
    {//NAda
}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 82 "pypar.y"
    { 
	(yyval.nodeT)=ast->bIGUALNode();
	//Duda agregar Nodo Test
	
	}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 87 "pypar.y"
    {//NADA
}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 90 "pypar.y"
    {
	// Nodo parametro con (ast->bIDENTIFICADORNode($2), $1)
	//Agregar nodo n1

	}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 95 "pypar.y"
    {
	(yyval.nodeT)=ast->bIDENTIFICADORNode((yyvsp[(2) - (2)].cad));
	}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 99 "pypar.y"
    {
	
	(yyval.nodeT)=ast->bIDENTIFICADORNode((yyvsp[(3) - (3)].cad));
	}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 103 "pypar.y"
    { 
//Nodo Parametro vacio
}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 107 "pypar.y"
    { 
	//Nodo parametro con lo que regrese n2 y n3
}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 111 "pypar.y"
    { (yyval.nodeT)=(yyvsp[(4) - (4)].nodeT);}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 112 "pypar.y"
    {
//Nodo Parametro vacio
}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 116 "pypar.y"
    {}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 117 "pypar.y"
    {
//Nodo Parametro vacio
}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 121 "pypar.y"
    { (yyval.nodeT)=(yyvsp[(2) - (2)].nodeT);}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 122 "pypar.y"
    {//NADA
}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 125 "pypar.y"
    { (yyval.nodeT)=ast->bIDENTIFICADORNode((yyvsp[(1) - (1)].cad));}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 126 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(2) - (3)].nodeT); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 128 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(2) - (3)].nodeT);}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 130 "pypar.y"
    {//Nada
}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 132 "pypar.y"
    {//Nada
}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 135 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(3) - (3)].nodeT);}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 136 "pypar.y"
    {}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 139 "pypar.y"
    { (yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 140 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 142 "pypar.y"
    {//nada
}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 145 "pypar.y"
    {
	//Nada
}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 148 "pypar.y"
    {
	//Nada
	}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 152 "pypar.y"
    { 
	(yyval.nodeT)=(yyvsp[(3) - (3)].nodeT);
}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 155 "pypar.y"
    {}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 157 "pypar.y"
    {
	//Nodo nivel
}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 160 "pypar.y"
    {
	//Nodo nivel
}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 163 "pypar.y"
    {
	//Nodo nivel
}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 166 "pypar.y"
    {
	//Nodo nivel
}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 169 "pypar.y"
    {
	//Nodo nivel
}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 172 "pypar.y"
    {
	//Nodo nivel
}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 175 "pypar.y"
    {
	//Nodo nivel
}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 179 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(2) - (2)].nodeT);}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 181 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (2)].nodeT);}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 182 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 183 "pypar.y"
    {(yyval.nodeT)=ast->bIGUALNode();}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 184 "pypar.y"
    {
//Nada
}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 188 "pypar.y"
    {(yyval.nodeT)=ast->bMASIGUALNode();}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 189 "pypar.y"
    {(yyval.nodeT)=ast->bMENOSIGUALNode();}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 190 "pypar.y"
    {(yyval.nodeT)=ast->bASIGUALNode();}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 191 "pypar.y"
    {(yyval.nodeT)=ast->bDIAIGUALNode();}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 192 "pypar.y"
    {(yyval.nodeT)=ast->bPORIGUALNode();}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 193 "pypar.y"
    {(yyval.nodeT)= ast->bAMPIGUALNode();}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 194 "pypar.y"
    {(yyval.nodeT)=ast->bPIPEIGUALNode();}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 195 "pypar.y"
    {(yyval.nodeT)=ast->bCIRCIGUALNode();}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 196 "pypar.y"
    {(yyval.nodeT)=ast->bDMENORIGUALNode();}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 197 "pypar.y"
    {(yyval.nodeT)=ast->bDMAYORIGUALNode();}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 198 "pypar.y"
    {(yyval.nodeT)=ast->bDASTIGUALNode();}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 199 "pypar.y"
    {(yyval.nodeT)=ast->bDDIAIGUALNode();}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 202 "pypar.y"
    {
	LNodeList *nl = new LNodeList();
	nl->push_front((yyvsp[(2) - (2)].nodeT)); 
	(yyval.nodeT)=ast->bPRINTNode(nl);
	}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 208 "pypar.y"
    { (yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 209 "pypar.y"
    { (yyval.nodeT)=ast->bDMAYORIGUALNode();
	//Falta meter el nodo s31
}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 213 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(2) - (3)].nodeT);}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 214 "pypar.y"
    {
//Nada
}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 218 "pypar.y"
    {
	(yyval.nodeT)=(yyvsp[(2) - (3)].nodeT);
}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 221 "pypar.y"
    {}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 223 "pypar.y"
    {
	(yyval.nodeT)=(yyvsp[(3) - (3)].nodeT);
}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 226 "pypar.y"
    {
//Nada
}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 229 "pypar.y"
    {
//Nada
}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 232 "pypar.y"
    {
//Nada
}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 237 "pypar.y"
    {(yyval.nodeT)=ast->bDELNode((yyvsp[(1) - (2)].cad));}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 240 "pypar.y"
    {(yyval.nodeT)=ast->bPASSNode(); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 243 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 244 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 245 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 249 "pypar.y"
    {(yyval.nodeT)=ast->bBREAKNode();}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 252 "pypar.y"
    {(yyval.nodeT)=ast->bCONTINUENode();}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 255 "pypar.y"
    {(yyval.nodeT)=ast->bRETURNNode((yyvsp[(2) - (2)].nodeT));}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 257 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 258 "pypar.y"
    {(yyval.nodeT)=NULL;}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 261 "pypar.y"
    { 
	(yyval.nodeT)=ast->bIDENTIFICADORNode((yyvsp[(2) - (3)].cad));
	//Falta trabajar con global_stmt_aux
}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 266 "pypar.y"
    {
	(yyval.nodeT)=ast->bIDENTIFICADORNode((yyvsp[(3) - (3)].cad));
	//falta trabajar con global_stmt_aux
	}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 271 "pypar.y"
    {}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 274 "pypar.y"
    {}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 276 "pypar.y"
    {}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 277 "pypar.y"
    {}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 279 "pypar.y"
    {
	//Nivel
	}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 282 "pypar.y"
    {
	//Nivel
}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 285 "pypar.y"
    {
	//Nivel
}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 288 "pypar.y"
    {
	//Nivel
}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 291 "pypar.y"
    {
	//Nivel
}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 296 "pypar.y"
    { 
	LNodeList *nl = new LNodeList();
	nl->push_front((yyvsp[(5) - (6)].nodeT));
	nl->push_front((yyvsp[(4) - (6)].nodeT));
	nl->push_front((yyvsp[(2) - (6)].nodeT));
	(yyval.nodeT)=ast->bIFNode(nl);}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 303 "pypar.y"
    {
	LNodeList *nl = new LNodeList();
	nl->push_front((yyvsp[(1) - (5)].nodeT));
	nl->push_front((yyvsp[(5) - (5)].nodeT));
	nl->push_front((yyvsp[(3) - (5)].nodeT));
	(yyval.nodeT)=ast->bIFNode(nl);
	}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 310 "pypar.y"
    {(yyval.nodeT)=NULL;}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 312 "pypar.y"
    { (yyval.nodeT)=(yyvsp[(3) - (3)].nodeT); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 313 "pypar.y"
    {(yyval.nodeT)=NULL;}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 316 "pypar.y"
    { (yyval.nodeT)=ast->bWHILENode((yyvsp[(2) - (5)].nodeT),(yyvsp[(4) - (5)].nodeT));}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 319 "pypar.y"
    {
	LNodeList *nl = new LNodeList();
	nl->push_front((yyvsp[(6) - (7)].nodeT));
	nl->push_front((yyvsp[(4) - (7)].nodeT));
	nl->push_front((yyvsp[(2) - (7)].nodeT)); 
	(yyval.nodeT)=ast->bFORNode(nl);
	}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 327 "pypar.y"
    {}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 329 "pypar.y"
    {}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 330 "pypar.y"
    {}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 332 "pypar.y"
    {}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 334 "pypar.y"
    {}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 335 "pypar.y"
    {}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 337 "pypar.y"
    { (yyval.nodeT)=(yyvsp[(1) - (1)].nodeT); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 338 "pypar.y"
    {
	//Nivel
}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 342 "pypar.y"
    {
	//Nivel
	}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 345 "pypar.y"
    {
	//Nivel
}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 349 "pypar.y"
    {
//Nivel
}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 353 "pypar.y"
    {
//Nivel
}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 357 "pypar.y"
    {
(yyval.nodeT)=(yyvsp[(1) - (2)].nodeT);
}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 361 "pypar.y"
    {
(yyval.nodeT)=(yyvsp[(3) - (3)].nodeT);
}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 364 "pypar.y"
    {
(yyval.nodeT)=(yyvsp[(2) - (2)].nodeT);
}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 368 "pypar.y"
    {
LNodeList *nl = new LNodeList();
nl->push_front((yyvsp[(2) - (4)].nodeT)); 
nl->push_front((yyvsp[(3) - (4)].cad)); 
(yyval.nodeT)=ast->bIFNode(nl);

}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 375 "pypar.y"
    {
//Nada
}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 379 "pypar.y"
    {
(yyval.nodeT)=(yyvsp[(2) - (2)].nodeT);
}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 384 "pypar.y"
    {
(yyval.nodeT)=ast->bORNode((yyvsp[(1) - (2)].nodeT),(yyvsp[(2) - (2)].nodeT));
}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 388 "pypar.y"
    {
(yyval.nodeT)=ast->bORNode((yyvsp[(1) - (3)].nodeT),(yyvsp[(3) - (3)].nodeT));

}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 392 "pypar.y"
    {
//Nada
}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 396 "pypar.y"
    {
	(yyval.nodeT)=ast->bANDNode((yyvsp[(1) - (2)].nodeT),(yyvsp[(2) - (2)].nodeT));
}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 400 "pypar.y"
    {
	(yyval.nodeT)=ast->bANDNode((yyvsp[(1) - (3)].nodeT),(yyvsp[(3) - (3)].nodeT));
}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 405 "pypar.y"
    {
//Nada
}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 409 "pypar.y"
    {
	(yyval.nodeT)=ast->bNOTNode((yyvsp[(2) - (2)].nodeT));
}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 412 "pypar.y"
    {}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 414 "pypar.y"
    {}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 416 "pypar.y"
    {}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 417 "pypar.y"
    {}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 419 "pypar.y"
    {(yyval.nodeT)=ast->bMENORNode();}
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 420 "pypar.y"
    {(yyval.nodeT)=ast->bMAYORNode();}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 421 "pypar.y"
    {(yyval.nodeT)=ast->bDIGNode();}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 422 "pypar.y"
    {(yyval.nodeT)=ast->bMAYIGNode();}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 423 "pypar.y"
    {(yyval.nodeT)=ast->bMENIGNode();}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 424 "pypar.y"
    {(yyval.nodeT)=ast->bMENORMAYORNode();}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 425 "pypar.y"
    {(yyval.nodeT)=ast->bNIGNode();}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 426 "pypar.y"
    {(yyval.nodeT)=ast->bINNode();}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 427 "pypar.y"
    {(yyval.nodeT)=ast->bNOTINNode();}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 428 "pypar.y"
    {(yyval.nodeT)=ast->bISNode();}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 429 "pypar.y"
    {(yyval.nodeT)=ast->bISNOTNode();}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 431 "pypar.y"
    {}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 433 "pypar.y"
    {}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 434 "pypar.y"
    {}
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 436 "pypar.y"
    {}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 438 "pypar.y"
    {}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 439 "pypar.y"
    {}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 441 "pypar.y"
    {}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 443 "pypar.y"
    {}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 444 "pypar.y"
    {}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 446 "pypar.y"
    {}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 448 "pypar.y"
    {}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 449 "pypar.y"
    {}
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 450 "pypar.y"
    {}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 452 "pypar.y"
    {}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 454 "pypar.y"
    {}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 455 "pypar.y"
    {}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 457 "pypar.y"
    {(yyval.nodeT)=ast->bMASNode();}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 458 "pypar.y"
    {(yyval.nodeT)=ast->bMENOSNode();}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 460 "pypar.y"
    {}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 462 "pypar.y"
    {}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 463 "pypar.y"
    {}
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 465 "pypar.y"
    {(yyval.nodeT)=ast->bPORNode();}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 466 "pypar.y"
    {(yyval.nodeT)=ast->bDIVNode();}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 467 "pypar.y"
    {(yyval.nodeT)=ast->bMODNode();}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 468 "pypar.y"
    {(yyval.nodeT)=ast->bDDIAGNode();}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 471 "pypar.y"
    {}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 472 "pypar.y"
    {}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 474 "pypar.y"
    {(yyval.nodeT)=ast->bMASNode();}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 475 "pypar.y"
    {(yyval.nodeT)=ast->bMENOSNode();}
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 477 "pypar.y"
    {}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 479 "pypar.y"
    {}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 480 "pypar.y"
    {}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 482 "pypar.y"
    {}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 483 "pypar.y"
    {}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 485 "pypar.y"
    {}
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 486 "pypar.y"
    {}
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 488 "pypar.y"
    {}
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 489 "pypar.y"
    {}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 491 "pypar.y"
    {}
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 492 "pypar.y"
    {}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 494 "pypar.y"
    {}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 495 "pypar.y"
    {}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 497 "pypar.y"
    {}
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 498 "pypar.y"
    {}
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 500 "pypar.y"
    {}
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 501 "pypar.y"
    {}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 503 "pypar.y"
    {}
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 504 "pypar.y"
    {}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 505 "pypar.y"
    {}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 506 "pypar.y"
    {(yyval.nodeT)=ast->bIDENTIFICADORNode((yyvsp[(1) - (1)].cad));}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 507 "pypar.y"
    {(yyval.nodeT)=ast->bFLOATNode((yyvsp[(1) - (1)].numf));}
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 508 "pypar.y"
    {(yyval.nodeT)=ast->bINTNode((yyvsp[(1) - (1)].numi));}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 509 "pypar.y"
    {(yyval.nodeT)=(yyvsp[(1) - (1)].nodeT);}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 510 "pypar.y"
    {(yyval.nodeT)=ast->bTRUENode();}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 511 "pypar.y"
    {(yyval.nodeT)=ast->bFALSENode();}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 514 "pypar.y"
    {}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 515 "pypar.y"
    {}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 517 "pypar.y"
    {}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 520 "pypar.y"
    {}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 521 "pypar.y"
    {}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 524 "pypar.y"
    {}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 525 "pypar.y"
    {}
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 527 "pypar.y"
    {}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 529 "pypar.y"
    {}
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 530 "pypar.y"
    {}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 532 "pypar.y"
    {}
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 533 "pypar.y"
    {}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 535 "pypar.y"
    {}
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 536 "pypar.y"
    {}
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 537 "pypar.y"
    {}
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 539 "pypar.y"
    {}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 541 "pypar.y"
    {}
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 542 "pypar.y"
    {}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 544 "pypar.y"
    {}
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 545 "pypar.y"
    {}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 546 "pypar.y"
    {}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 548 "pypar.y"
    {}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 550 "pypar.y"
    { (yyval.nodeT)=(yyvsp[(2) - (3)].nodeT);}
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 552 "pypar.y"
    {
(yyval.nodeT)=(yyvsp[(3) - (3)].nodeT);
}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 555 "pypar.y"
    {
//Nada
}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 559 "pypar.y"
    {}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 561 "pypar.y"
    {}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 562 "pypar.y"
    {}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 564 "pypar.y"
    {}
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 565 "pypar.y"
    {}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 567 "pypar.y"
    {}
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 569 "pypar.y"
    {}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 570 "pypar.y"
    {}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 572 "pypar.y"
    {}
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 573 "pypar.y"
    {}
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 575 "pypar.y"
    {}
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 577 "pypar.y"
    {}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 578 "pypar.y"
    {}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 580 "pypar.y"
    {}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 581 "pypar.y"
    {}
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 583 "pypar.y"
    {}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 585 "pypar.y"
    {}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 586 "pypar.y"
    {}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 588 "pypar.y"
    {}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 589 "pypar.y"
    {}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 590 "pypar.y"
    {}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 592 "pypar.y"
    {}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 593 "pypar.y"
    {}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 595 "pypar.y"
    {}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 596 "pypar.y"
    {}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 599 "pypar.y"
    {}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 600 "pypar.y"
    {}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 602 "pypar.y"
    {}
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 603 "pypar.y"
    {}
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 605 "pypar.y"
    {}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 606 "pypar.y"
    {}
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 608 "pypar.y"
    {}
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 610 "pypar.y"
    {}
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 612 "pypar.y"
    {}
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 613 "pypar.y"
    {}
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 615 "pypar.y"
    {}
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 616 "pypar.y"
    {}
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 618 "pypar.y"
    {}
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 620 "pypar.y"
    {}
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 622 "pypar.y"
    {}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 623 "pypar.y"
    {}
    break;



/* Line 1806 of yacc.c  */
#line 3938 "pypar.cpp"
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
#line 625 "pypar.y"

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


