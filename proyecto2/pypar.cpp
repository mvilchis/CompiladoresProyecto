/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "pypar.y" /* yacc.c:339  */


#include <stdio.h>
#include <string>
using namespace std;

int yylex(); 
int yyerror(const char *s) { printf ("Error: %s\n", s); return 1;}

#line 76 "pypar.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "pypar.hpp".  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 11 "pypar.y" /* yacc.c:355  */

  int numi;
  float numf;
  const char* cad;
  char car;

#line 221 "pypar.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PYPAR_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 236 "pypar.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  146
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   938

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  186
/* YYNRULES -- Number of rules.  */
#define YYNRULES  359
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  528

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   352

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
       2,     2,     2,     2,     2,     2,    98,     2,     2,     2,
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    31,    31,    34,    35,    36,    39,    42,
      43,    46,    47,    48,    51,    54,    55,    58,    59,    62,
      63,    64,    66,    67,    70,    71,    74,    77,    78,    81,
      84,    86,    87,    90,    91,    94,    97,    98,   100,   101,
     104,   105,   107,   108,   111,   113,   114,   117,   118,   121,
     122,   125,   126,   127,   130,   131,   134,   135,   138,   139,
     142,   144,   145,   147,   148,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   160,   161,   166,   167,   169,   170,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   186,   187,   189,   190,   192,   193,   196,   197,
     199,   200,   203,   206,   208,   210,   211,   212,   213,   214,
     216,   218,   220,   222,   224,   226,   226,   228,   230,   232,
     233,   235,   236,   238,   239,   241,   242,   243,   245,   246,
     248,   249,   251,   252,   254,   256,   258,   260,   260,   262,
     264,   264,   266,   268,   268,   270,   272,   272,   274,   276,
     278,   278,   280,   280,   284,   285,   286,   287,   288,   289,
     290,   291,   293,   295,   295,   297,   297,   299,   301,   303,
     305,   305,   307,   307,   309,   309,   311,   313,   313,   315,
     317,   317,   319,   321,   321,   323,   323,   325,   325,   327,
     327,   329,   329,   331,   333,   333,   335,   335,   337,   339,
     339,   341,   341,   343,   343,   345,   345,   347,   349,   349,
     351,   353,   353,   355,   355,   357,   359,   359,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   363,
     365,   365,   367,   369,   369,   371,   375,   377,   377,   379,
     379,   381,   383,   383,   385,   385,   387,   389,   389,   391,
     391,   391,   391,   393,   393,   395,   395,   395,   397,   399,
     399,   401,   401,   401,   403,   403,   405,   405,   407,   407,
     409,   409,   411,   411,   413,   413,   415,   416,   417,   418,
     419,   420,   421,   422,   424,   424,   426,   428,   428,   430,
     430,   432,   434,   434,   436,   436,   438,   440,   440,   440,
     442,   444,   444,   446,   446,   446,   448,   450,   452,   452,
     454,   456,   456,   458,   458,   460,   462,   462,   464,   464,
     466,   468,   468,   470,   470,   472,   472,   474,   474,   476,
     478,   480,   480,   482,   482,   482,   484,   484,   486,   486,
     488,   488,   490,   490,   492,   492,   494,   496,   498,   498,
     500,   500,   502,   504,   506,   506,   508,   510,   510,   512
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "INDENT", "SALIDA", "DEDENT", "FIN", "'`'", "$accept", "GOAL",
  "single_input", "file_input", "file_input_aux", "fi_aux", "eval_input",
  "eval_input_aux", "ei_aux", "decorator", "decorator_aux", "d_aux",
  "decorators", "decorated", "decorated_aux", "funcdef", "parameters",
  "parameters_aux", "varargslist", "varargslist_a", "varargslist_a_aux_a",
  "val_aux_a", "varargslist_a_aux_b", "val_aux_b", "varargslist_b",
  "val_b", "varargslist_b_aux", "fpdef", "fplist", "fpl_aux", "fplist_aux",
  "fp_aux", "stmt", "simple_stmt", "ss_aux", "simple_stmt_aux",
  "small_stmt", "expr_stmt", "expr_stmt_aux_b", "es_aux_b", "augassign",
  "print_stmt", "print_stmt_aux_a", "print_stmt_aux_b", "s1", "comaS",
  "s2", "del_stmt", "pass_stmt", "flow_stmt", "break_stmt",
  "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "import_stmt", "import_name", "import_from", "import_from_aux_a",
  "import_punto_kleene", "import_punto_mas", "import_from_aux_b", "s3",
  "s4", "s5", "import_as_name", "dotted_as_name", "import_as_names",
  "import_as_names_aux", "dotted_as_names", "dotted_as_names_aux",
  "dotted_name", "dotted_name_aux", "global_stmt", "global_stmt_aux",
  "exec_stmt", "assert_stmt", "s6", "s7", "compound_stmt", "if_stmt",
  "if_stmt_aux", "s8", "while_stmt", "for_stmt", "try_stmt",
  "try_stmt_aux", "ts_aux", "s9", "with_stmt", "with_stmt_aux",
  "with_item", "s10", "except_clause", "except_clause_aux", "suite",
  "suite_aux", "s11", "s12", "testlist_safe", "testlist_safe_aux",
  "old_test", "old_lambdef", "s13", "s14", "s15", "test", "or_test",
  "or_test_aux", "and_test", "and_test_aux", "not_test", "comparison",
  "comparison_aux", "comp_op", "expr", "expr_aux", "xor_expr",
  "xor_expr_aux", "and_expr", "shift_expr", "shift_expr_aux", "shift_sim",
  "arith_expr", "arith_expr_aux", "ae_aux", "term", "term_aux", "t_aux",
  "factor", "factor_aux", "power", "s16", "s17", "s18", "s19", "s20",
  "s21", "s22", "power_aux", "atom", "string_aux", "listmaker",
  "listmaker_aux", "lm_aux", "testlist_comp", "testlist_comp_aux",
  "tc_aux", "lambdef", "trailer", "subscriptlist", "subscriptlist_aux",
  "subscript", "sliceop", "exprlist", "exprlist_aux", "testlist",
  "testlist_aux", "dictorsetmaker", "dictorsetmaker_aux_a", "dsm_aux_a",
  "dsm_aux_a_a", "dictorsetmaker_aux_b", "dsm_aux_b", "dsm_aux_b_a", "s23",
  "s24", "classdef", "arglist", "arglist_aux_a", "arglist_aux_b", "al_aux",
  "s25", "argument", "s26", "list_iter", "list_for", "list_if", "s27",
  "comp_iter", "comp_for", "comp_if", "s28", "testlist1", "testlist1_aux",
  "yield_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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
     345,   346,   347,   348,   349,   350,   351,   352,    96
};
# endif

#define YYPACT_NINF -405

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-405)))

#define YYTABLE_NINF -305

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      56,  -405,  -405,   819,    35,   819,  -405,   342,    33,   -15,
      58,    40,   819,   342,    61,   840,   819,   819,   819,   819,
      71,  -405,  -405,   819,   342,  -405,   819,  -405,  -405,   731,
     819,   819,    71,   118,  -405,  -405,   819,   128,  -405,  -405,
      46,   356,  -405,  -405,    27,  -405,  -405,  -405,   130,  -405,
    -405,    60,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,    44,  -405,  -405,
    -405,  -405,  -405,  -405,   116,  -405,  -405,  -405,  -405,  -405,
    -405,   342,   342,  -405,  -405,   342,  -405,  -405,   149,  -405,
     240,  -405,  -405,  -405,  -405,   111,  -405,  -405,  -405,   135,
    -405,    63,  -405,  -405,    68,  -405,   105,   108,   627,   120,
    -405,   147,    26,   115,   123,  -405,  -405,  -405,  -405,   150,
     126,  -405,   121,  -405,  -405,  -405,   157,  -405,   136,   165,
     138,   192,   146,  -405,  -405,   198,   151,  -405,    19,   153,
    -405,  -405,  -405,   155,  -405,   119,  -405,  -405,  -405,  -405,
    -405,  -405,   467,  -405,  -405,  -405,  -405,   163,   731,  -405,
     156,   840,  -405,   189,   202,    94,   177,   186,    -5,  -405,
    -405,   109,   143,  -405,   110,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,   139,
     148,   819,   170,   819,   176,   179,   819,   181,   187,   245,
     246,  -405,   105,   819,  -405,   819,   162,  -405,   104,    23,
     191,    73,  -405,  -405,  -405,   627,   194,   -10,   342,  -405,
     627,   819,  -405,   193,   201,   264,  -405,   819,  -405,   819,
    -405,   819,   205,  -405,   342,  -405,   208,  -405,  -405,   342,
    -405,   209,  -405,  -405,   819,  -405,   210,  -405,  -405,   211,
     188,   213,  -405,   691,   190,  -405,  -405,  -405,   819,  -405,
     244,   840,   840,   256,   247,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,   342,   342,   342,  -405,  -405,   342,  -405,  -405,
     342,  -405,  -405,  -405,  -405,   342,   342,   222,   739,   281,
    -405,  -405,  -405,  -405,  -405,   819,  -405,   226,   627,   342,
    -405,   221,    63,   223,   181,  -405,  -405,   224,   227,  -405,
     229,  -405,   557,   225,   819,  -405,   117,   234,   235,  -405,
     627,   157,  -405,   297,  -405,  -405,  -405,   271,   301,   819,
     627,  -405,  -405,  -405,   302,    71,  -405,   121,   121,  -405,
     819,  -405,   270,   819,  -405,   273,   819,  -405,   192,   819,
    -405,   266,  -405,   206,  -405,   819,  -405,  -405,  -405,   819,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,   267,  -405,   261,   265,   268,   275,  -405,  -405,   274,
    -405,  -405,  -405,   627,  -405,  -405,  -405,  -405,   277,  -405,
    -405,    63,  -405,  -405,   469,   627,  -405,    83,   276,   325,
     279,   627,  -405,  -405,  -405,   280,   282,  -405,  -405,  -405,
    -405,    21,  -405,  -405,  -405,  -405,  -405,   840,  -405,   833,
    -405,  -405,   286,  -405,  -405,  -405,   819,   819,    30,  -405,
     288,  -405,  -405,  -405,   289,   819,  -405,   290,   271,   354,
     105,  -405,  -405,  -405,  -405,  -405,   819,  -405,   627,   293,
    -405,   627,  -405,  -405,   297,  -405,   819,  -405,    22,    33,
      36,   299,  -405,  -405,   819,  -405,  -405,  -405,   819,  -405,
    -405,   305,  -405,  -405,  -405,   296,    97,  -405,  -405,  -405,
    -405,  -405,   627,  -405,  -405,   306,   833,  -405,  -405,  -405,
    -405,   309,   833,  -405,  -405,  -405,  -405,   833,   312,  -405,
     316,   318,  -405,   819,  -405,  -405,  -405,  -405,   627,    22,
     833,    36,  -405,   833,  -405,   819,   755,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,   819,  -405,  -405
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      77,   285,   280,    99,     0,   328,   111,     0,    37,     0,
       0,   122,     0,     0,     0,     0,     0,     0,   328,     0,
       0,   104,   110,   129,     0,   257,     0,   256,   255,   263,
     265,   267,     0,    12,   282,   281,     0,     0,     2,     3,
       0,     9,     4,    25,     0,   161,   159,    13,    58,    64,
      65,    75,    66,    67,    68,    69,   105,   106,   107,   109,
     108,    70,   115,   116,    71,    72,    73,    59,   154,   155,
     156,   157,   158,   312,   204,   209,   212,   214,   217,   231,
     234,   238,   238,   243,   248,     0,   254,   275,   283,   206,
      16,   160,   113,    92,    95,   326,   327,   112,   309,     0,
      49,     0,   201,    33,     0,    34,    39,     0,    77,     0,
     124,     0,     0,   120,     0,   103,   147,   213,   178,   181,
       0,   359,   133,   144,   141,   117,   151,   114,   131,   153,
       0,   295,     0,   262,   261,   290,     0,   264,   324,     0,
     266,   313,   314,    20,   358,     0,     1,     8,    12,    11,
      58,    59,     0,    24,    26,    28,    27,    62,     0,     7,
     100,     0,   205,   207,   210,   215,   229,   232,     0,   235,
     236,   241,   246,   253,   260,   284,    80,    81,    82,    83,
      91,    84,    85,    86,    87,    89,    88,    90,    18,     0,
      15,    77,     0,   328,     0,   100,     0,    55,     0,     0,
       0,    35,    39,     0,    48,     0,     0,   185,     0,    37,
       0,     0,   121,   119,   123,    77,   145,     0,     0,   179,
      77,     0,   149,   142,   139,     0,   135,     0,   128,     0,
     148,     0,   100,    93,     0,   291,   100,   292,   276,     0,
     286,   100,   287,   277,     0,   320,   100,   321,   278,   332,
       0,   356,   279,    77,     0,    76,    79,    78,   101,   310,
       0,     0,     0,   227,   225,   224,   220,   221,   222,   219,
     218,   223,     0,     0,     0,   240,   239,     0,   245,   244,
       0,   251,   252,   250,   249,     0,     0,   332,   271,     0,
     258,   274,    14,    17,    74,     0,    98,     0,    77,   101,
     307,     0,     0,    53,    54,    50,    41,    43,     0,    38,
      46,   296,    77,     0,   190,   169,   166,     0,     0,    32,
      77,   151,   125,     0,   118,   138,   127,   166,     0,     0,
      77,   180,   164,   132,     0,     0,   150,   133,   133,    97,
     101,   102,     0,   101,   293,     0,   101,   288,   319,   101,
     322,     0,    23,     0,    19,     0,    63,    60,   311,     0,
     208,   211,   228,   226,   216,   230,   233,   237,   242,   247,
     259,     0,   268,     0,   270,     0,     0,   302,   299,    97,
     325,   329,   308,    77,    57,    52,    51,    56,     0,    40,
      36,    45,    44,   188,    77,    77,   182,   192,     0,   175,
       0,    77,    30,    29,   134,     0,   100,   167,   146,   177,
     176,   166,   143,   140,   130,   152,    96,     0,   294,     0,
     289,   315,   100,   316,   323,    21,     0,     0,   343,   330,
     100,   357,   203,   297,     0,   271,   298,     0,   166,     0,
      39,   186,   187,   171,   183,   184,     0,   189,    77,     0,
     170,    77,   173,   126,   101,   136,     0,   162,   355,    37,
     349,   200,   197,   196,   101,   317,   335,   337,     0,   340,
     342,   331,   333,   303,   270,   273,   271,   168,    42,    47,
     191,   165,    77,   172,   137,     0,     0,   354,   350,   351,
     352,     0,     0,   348,   344,   345,   346,     0,   100,   193,
       0,   339,   341,   271,   305,   272,   301,   174,    77,   355,
       0,   349,   195,   101,   199,     0,     0,   334,   306,   163,
     353,   198,   347,   194,   318,     0,   336,   338
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -405,  -405,  -405,  -405,   328,  -405,  -405,   197,  -405,   350,
    -405,  -405,  -405,  -405,  -405,   355,  -405,  -405,   200,  -405,
    -405,  -183,  -405,  -405,  -405,  -405,  -405,   -96,  -405,  -405,
      96,  -405,  -287,     1,  -405,  -405,   145,   215,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -192,   218,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -277,   -43,    77,    90,  -405,  -405,
    -405,    -2,  -405,  -405,  -405,  -405,  -405,    93,  -405,   418,
    -405,  -405,  -305,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,    91,  -405,   106,  -405,  -208,  -405,  -405,  -405,  -405,
    -405,  -327,  -405,  -405,   -34,  -405,    -3,  -159,  -405,   167,
    -405,    -9,  -405,  -405,  -405,    11,  -405,   158,  -405,   152,
      82,   347,  -405,   159,  -405,  -405,   161,  -405,  -405,   -75,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -404,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,   -46,  -405,     8,  -405,    38,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,    -1,   389,   164,  -405,
    -405,  -405,  -405,   -79,  -405,  -405,   303,  -405,   -72,  -405,
    -127,  -405,   -67,  -405,  -405,   -14
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    37,    38,    39,    40,    41,    42,   189,   190,    43,
     250,   351,    44,    45,   154,    46,   210,   318,   102,   103,
     104,   204,   201,   389,   105,   392,   310,   106,   198,   386,
     303,   304,    47,   207,   254,   157,    49,    50,    51,   255,
     191,    52,   192,   232,    93,   259,   233,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,   111,   112,
     113,   324,   127,   228,   222,   325,   124,   326,   406,   125,
     224,   126,   223,    64,   216,    65,    66,   226,   230,   151,
      68,   411,   399,    69,    70,    71,   315,   316,   450,    72,
     217,   118,   219,   317,   446,   208,   394,   396,   447,   460,
     498,   461,   462,   499,   107,   162,    73,    74,   163,    75,
     164,    76,    77,   165,   272,    78,   166,    79,   167,    80,
      81,   169,   277,    82,   171,   280,    83,   172,   285,    84,
      85,    86,   290,   132,   136,   139,   371,   375,   504,   174,
      87,    88,   137,   240,   241,   133,   235,   236,    89,   291,
     376,   437,   377,   505,    99,   195,   152,   160,   140,   141,
     421,   422,   142,   245,   246,   194,    97,    91,   352,   353,
     429,   501,   517,   430,   469,   493,   494,   495,   496,   487,
     488,   489,   490,   145,   251,    92
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      94,    48,   260,   300,   237,   197,   117,   327,   202,   114,
     173,   247,   332,   119,   120,   134,   122,   121,    98,   308,
     128,   115,   407,   130,    98,   393,   131,   135,   138,   100,
     143,   475,   123,   144,   234,   129,     4,   234,    90,   100,
     341,    95,   150,    96,   344,   234,    10,   275,   276,   347,
     456,   239,   486,   108,   350,   398,    96,   329,   330,     1,
     414,   415,     2,     3,   109,     4,   492,   116,     5,   100,
       6,     7,     8,     9,   100,    10,    11,   123,    12,   321,
      13,    14,    15,    16,   101,   -31,    17,   244,    18,    19,
     381,    20,    21,    22,   101,   212,    23,    24,    32,   518,
       1,  -202,   468,     2,    25,   263,   457,   442,    26,   110,
     213,   444,   403,     8,   313,    27,    28,    29,    -5,    30,
     264,    31,   410,    15,   101,   199,   200,    32,   146,   101,
      -6,   322,   158,   477,   323,   159,   265,   266,   267,   268,
     269,   270,   314,   147,   257,    25,   161,    33,    34,    35,
     445,   398,   175,   -10,    36,   314,    27,    28,    29,   509,
      30,  -300,    31,   168,   168,   511,   373,   286,   278,   279,
     512,   287,   193,   288,   196,   438,   205,   203,   218,   289,
     271,   209,   211,   521,   214,   225,   523,   443,   221,    34,
      35,   215,   297,   452,   220,    36,   256,   281,   282,   283,
     309,   284,   311,   227,   229,   231,   384,   234,   238,     1,
     369,   370,     2,   239,   455,   243,   249,   252,   333,   248,
     261,   423,     8,   258,   337,   262,   338,   273,   339,   331,
     465,    96,    15,   253,   301,   274,   292,   295,   472,   188,
     481,   348,   342,   483,   298,    98,   299,   345,   302,   305,
      98,   306,   307,   361,    25,   358,   312,   479,   458,   320,
     463,   328,   334,   426,   427,    27,    28,    29,   335,    30,
     336,    31,   340,   -22,   507,   343,   346,   349,   359,   354,
     355,   357,   362,   364,  -269,   374,   363,   378,   380,   383,
     385,   388,   379,   395,   390,   440,   391,   402,    34,    35,
     519,   470,   401,   321,    36,   398,   514,   408,   412,   417,
     382,   397,   419,   150,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   119,   463,   425,   433,
     434,   188,  -304,   463,   439,   449,   435,   416,   463,   436,
     418,   -94,   453,   420,   448,     1,   424,   451,     2,   454,
     428,   463,   431,   464,   463,   471,   432,   476,   473,     1,
     478,   482,     2,     3,   503,     4,   497,  -101,     5,   149,
       6,     7,     8,     9,   508,    10,    11,   510,    12,   513,
      13,    14,    15,    16,   515,   516,    17,   293,    18,    19,
      25,    20,    21,    22,   153,   150,    23,    24,   356,   155,
     387,    27,    28,    29,    25,    30,   294,    31,    26,   319,
     296,   484,   413,   405,   404,    27,    28,    29,    67,    30,
     409,    31,   400,   466,   467,   491,   366,    32,   360,   170,
     506,   365,   474,   156,    34,    35,   367,   526,   242,   522,
      36,   368,   520,   480,     0,     0,     0,   148,    34,    35,
       0,   372,     0,   485,    36,     0,     0,     0,     0,     0,
       0,   500,     0,     0,     0,   502,     0,     0,     0,     0,
       0,     0,     1,   374,     0,     2,     3,     0,     4,     0,
       0,     5,     0,     6,     7,     8,     9,     0,    10,    11,
       0,    12,     0,    13,    14,    15,    16,     0,     0,    17,
     474,    18,    19,     0,    20,    21,    22,     0,     0,    23,
      24,     0,   524,   428,     0,     0,     0,    25,     0,     0,
       0,    26,   527,     0,     0,     0,     0,     0,    27,    28,
      29,     0,    30,     0,    31,     0,     0,     0,     0,     0,
      32,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,     0,     0,     0,     0,     0,     0,     0,
       1,    34,    35,     2,     3,   441,     4,    36,     0,     5,
       0,     6,     7,     8,     9,     0,    10,    11,     0,    12,
       0,    13,    14,    15,    16,     0,     0,    17,     0,    18,
      19,     0,    20,    21,    22,     0,     0,    23,    24,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
      30,     0,    31,     0,     0,     0,     0,     0,    32,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     0,     5,
       0,     6,     0,     8,     0,     0,     0,    11,     0,    34,
      35,    13,    14,    15,     0,    36,     0,     0,     0,    18,
      19,     0,    20,    21,    22,     0,     0,    23,    24,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
      30,     0,    31,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     0,     5,     0,     6,     0,     8,     0,     0,
       0,    11,     0,     0,     0,    13,    14,    15,   206,    34,
      35,     0,     0,    18,    19,    36,    20,    21,    22,     0,
       0,    23,    24,     0,     1,     0,     0,     2,     0,    25,
       0,     0,     1,    26,     0,     2,     0,     8,     0,     0,
      27,    28,    29,     0,    30,     8,    31,    15,     1,     0,
       0,     2,     0,    18,     0,    15,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    15,   -61,    34,    35,     0,     0,    25,     0,    36,
      27,    28,    29,     0,    30,     0,    31,     0,    27,    28,
      29,     0,    30,    25,    31,     0,     0,     0,   373,     0,
       0,     0,   525,     0,    27,    28,    29,     0,    30,     0,
      31,     0,     1,    34,    35,     2,     0,     0,     0,    36,
       0,    34,    35,     0,     0,     8,     1,    36,     0,     2,
       0,     0,     0,     1,     0,    15,     2,    34,    35,   459,
       0,     0,     0,    36,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,     0,    15,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    25,    30,     0,    31,     0,     0,     0,    25,     0,
       0,     0,    27,    28,    29,     0,    30,     0,    31,    27,
      28,    29,     0,    30,     0,    31,     0,     0,     0,     0,
       0,    34,    35,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,    34,    35,     0,     0,     0,
       0,    36,    34,    35,     0,     0,     0,     0,    36
};

static const yytype_int16 yycheck[] =
{
       3,     0,   161,   195,   131,   101,    15,   215,   104,    12,
      85,   138,   220,    16,    17,    29,    19,    18,     7,   202,
      23,    13,   327,    26,    13,   312,    29,    30,    31,     6,
      32,   435,     6,    36,    15,    24,     9,    15,     0,     6,
     232,     6,    41,     5,   236,    15,    19,    52,    53,   241,
      29,    15,    30,    68,   246,    34,    18,    67,    68,     3,
     337,   338,     6,     7,     6,     9,    30,     6,    12,     6,
      14,    15,    16,    17,     6,    19,    20,     6,    22,     6,
      24,    25,    26,    27,    61,    62,    30,    68,    32,    33,
     298,    35,    36,    37,    61,    69,    40,    41,    71,   503,
       3,    68,    72,     6,    48,    11,   411,   394,    52,    69,
     112,    28,   320,    16,    10,    59,    60,    61,     0,    63,
      26,    65,   330,    26,    61,    57,    58,    71,     0,    61,
       0,    58,    72,   438,    61,    91,    42,    43,    44,    45,
      46,    47,    38,    97,   158,    48,    30,    91,    92,    93,
      67,    34,     3,    97,    98,    38,    59,    60,    61,   486,
      63,    64,    65,    81,    82,   492,    69,    57,    59,    60,
     497,    61,    61,    63,    39,   383,    68,    72,    28,    69,
      86,    61,    35,   510,    69,    28,   513,   395,    67,    92,
      93,    68,   193,   401,    68,    98,   158,    54,    55,    56,
     203,    58,   205,    67,    39,    67,   302,    15,    62,     3,
     285,   286,     6,    15,   406,    64,    61,    98,   221,    66,
      31,   348,    16,    67,   227,    23,   229,    50,   231,   218,
     422,   193,    26,    70,   196,    49,    97,    67,   430,    91,
     448,   244,   234,   451,    68,   234,    67,   239,    67,    62,
     239,     6,     6,   262,    48,   258,    94,   440,   417,    68,
     419,    67,    69,    57,    58,    59,    60,    61,    67,    63,
       6,    65,    67,    62,   482,    67,    67,    67,    34,    91,
      67,    91,    26,   272,    62,   288,    39,     6,    62,    68,
      67,    67,   295,    68,    67,   391,    67,    62,    92,    93,
     508,   428,    68,     6,    98,    34,   498,     6,     6,    39,
     299,   314,    39,   312,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   329,   486,    62,    62,
      69,    91,    67,   492,    57,    10,    68,   340,   497,    64,
     343,    67,    62,   346,    68,     3,   349,    68,     6,    67,
     353,   510,   355,    67,   513,    67,   359,    67,    69,     3,
       6,    68,     6,     7,    68,     9,    67,    62,    12,    41,
      14,    15,    16,    17,    68,    19,    20,    68,    22,    67,
      24,    25,    26,    27,    68,    67,    30,   190,    32,    33,
      48,    35,    36,    37,    44,   394,    40,    41,   253,    44,
     304,    59,    60,    61,    48,    63,   191,    65,    52,   209,
     192,   454,   335,   323,   321,    59,    60,    61,     0,    63,
     329,    65,   316,   426,   427,   459,   274,    71,   261,    82,
     476,   273,   435,    44,    92,    93,   277,   516,   135,   511,
      98,   280,   509,   446,    -1,    -1,    -1,    91,    92,    93,
      -1,   287,    -1,   456,    98,    -1,    -1,    -1,    -1,    -1,
      -1,   464,    -1,    -1,    -1,   468,    -1,    -1,    -1,    -1,
      -1,    -1,     3,   476,    -1,     6,     7,    -1,     9,    -1,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    24,    25,    26,    27,    -1,    -1,    30,
     503,    32,    33,    -1,    35,    36,    37,    -1,    -1,    40,
      41,    -1,   515,   516,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    52,   525,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      71,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    92,    93,     6,     7,    96,     9,    98,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    19,    20,    -1,    22,
      -1,    24,    25,    26,    27,    -1,    -1,    30,    -1,    32,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    71,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    16,    -1,    -1,    -1,    20,    -1,    92,
      93,    24,    25,    26,    -1,    98,    -1,    -1,    -1,    32,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,
      63,    -1,    65,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    14,    -1,    16,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    91,    92,
      93,    -1,    -1,    32,    33,    98,    35,    36,    37,    -1,
      -1,    40,    41,    -1,     3,    -1,    -1,     6,    -1,    48,
      -1,    -1,     3,    52,    -1,     6,    -1,    16,    -1,    -1,
      59,    60,    61,    -1,    63,    16,    65,    26,     3,    -1,
      -1,     6,    -1,    32,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    26,    91,    92,    93,    -1,    -1,    48,    -1,    98,
      59,    60,    61,    -1,    63,    -1,    65,    -1,    59,    60,
      61,    -1,    63,    48,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    57,    -1,    59,    60,    61,    -1,    63,    -1,
      65,    -1,     3,    92,    93,     6,    -1,    -1,    -1,    98,
      -1,    92,    93,    -1,    -1,    16,     3,    98,    -1,     6,
      -1,    -1,    -1,     3,    -1,    26,     6,    92,    93,    16,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    48,    63,    -1,    65,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    59,    60,    61,    -1,    63,    -1,    65,    59,
      60,    61,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      -1,    98,    92,    93,    -1,    -1,    -1,    -1,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     6,     7,     9,    12,    14,    15,    16,    17,
      19,    20,    22,    24,    25,    26,    27,    30,    32,    33,
      35,    36,    37,    40,    41,    48,    52,    59,    60,    61,
      63,    65,    71,    91,    92,    93,    98,   100,   101,   102,
     103,   104,   105,   108,   111,   112,   114,   131,   132,   135,
     136,   137,   140,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   172,   174,   175,   178,   179,   182,
     183,   184,   188,   205,   206,   208,   210,   211,   214,   216,
     218,   219,   222,   225,   228,   229,   230,   239,   240,   247,
     255,   266,   284,   143,   205,     6,   255,   265,   214,   253,
       6,    61,   117,   118,   119,   123,   126,   203,    68,     6,
      69,   157,   158,   159,   205,   253,     6,   210,   190,   205,
     205,   265,   205,     6,   165,   168,   170,   161,   205,   214,
     205,   205,   232,   244,   284,   205,   233,   241,   205,   234,
     257,   258,   261,   170,   205,   282,     0,    97,    91,   103,
     132,   178,   255,   108,   113,   114,   266,   134,    72,    91,
     256,    30,   204,   207,   209,   212,   215,   217,   219,   220,
     220,   223,   226,   228,   238,     3,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    91,   106,
     107,   139,   141,    61,   264,   254,    39,   126,   127,    57,
      58,   121,   126,    72,   120,    68,    91,   132,   194,    61,
     115,    35,    69,   170,    69,    68,   173,   189,    28,   191,
      68,    67,   163,   171,   169,    28,   176,    67,   162,    39,
     177,    67,   142,   145,    15,   245,   246,   279,    62,    15,
     242,   243,   275,    64,    68,   262,   263,   279,    66,    61,
     109,   283,    98,    70,   133,   138,   255,   284,    67,   144,
     206,    31,    23,    11,    26,    42,    43,    44,    45,    46,
      47,    86,   213,    50,    49,    52,    53,   221,    59,    60,
     224,    54,    55,    56,    58,   227,    57,    61,    63,    69,
     231,   248,    97,   106,   136,    67,   145,   265,    68,    67,
     144,   255,    67,   129,   130,    62,     6,     6,   120,   205,
     125,   205,    94,    10,    38,   185,   186,   192,   116,   117,
      68,     6,    58,    61,   160,   164,   166,   194,    67,    67,
      68,   214,   194,   205,    69,    67,     6,   205,   205,   205,
      67,   144,   253,    67,   144,   253,    67,   144,   205,    67,
     144,   110,   267,   268,    91,    67,   135,    91,   205,    34,
     208,   210,    26,    39,   214,   216,   218,   222,   225,   228,
     228,   235,   267,    69,   205,   236,   249,   251,     6,   205,
      62,   194,   214,    68,   126,    67,   128,   129,    67,   122,
      67,    67,   124,   131,   195,    68,   196,   205,    34,   181,
     192,    68,    62,   194,   176,   166,   167,   181,     6,   190,
     194,   180,     6,   165,   163,   163,   205,    39,   205,    39,
     205,   259,   260,   279,   205,    62,    57,    58,   205,   269,
     272,   205,   205,    62,    69,    68,    64,   250,   194,    57,
     126,    96,   131,   194,    28,    67,   193,   197,    68,    10,
     187,    68,   194,    62,    67,   144,    29,   181,   206,    16,
     198,   200,   201,   206,    67,   144,   205,   205,    72,   273,
     279,    67,   144,    69,   205,   236,    67,   181,     6,   120,
     205,   194,    68,   194,   164,   205,    30,   278,   279,   280,
     281,   203,    30,   274,   275,   276,   277,    67,   199,   202,
     205,   270,   205,    68,   237,   252,   251,   194,    68,   200,
      68,   200,   200,    67,   144,    68,    67,   271,   236,   194,
     281,   200,   277,   200,   205,    57,   272,   205
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,    99,   100,   100,   100,   101,   101,   101,   102,   103,
     103,   104,   104,   104,   105,   106,   106,   107,   107,   108,
     109,   109,   110,   110,   111,   111,   112,   113,   113,   114,
     115,   116,   116,   117,   117,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   124,   124,   125,   125,   126,
     126,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   133,   133,   134,   134,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   136,   136,   137,   137,   138,   138,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   143,
     144,   144,   145,   146,   147,   148,   148,   148,   148,   148,
     149,   150,   151,   152,   153,   154,   154,   155,   156,   157,
     157,   158,   158,   159,   159,   160,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   165,   166,   167,   167,   168,
     169,   169,   170,   171,   171,   172,   173,   173,   174,   175,
     176,   176,   177,   177,   178,   178,   178,   178,   178,   178,
     178,   178,   179,   180,   180,   181,   181,   182,   183,   184,
     185,   185,   186,   186,   187,   187,   188,   189,   189,   190,
     191,   191,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   197,   197,   198,   199,   199,   200,   200,   201,   202,
     202,   203,   203,   204,   204,   205,   205,   206,   207,   207,
     208,   209,   209,   210,   210,   211,   212,   212,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   214,
     215,   215,   216,   217,   217,   218,   219,   220,   220,   221,
     221,   222,   223,   223,   224,   224,   225,   226,   226,   227,
     227,   227,   227,   228,   228,   229,   229,   229,   230,   231,
     231,   232,   232,   232,   233,   233,   234,   234,   235,   235,
     236,   236,   237,   237,   238,   238,   239,   239,   239,   239,
     239,   239,   239,   239,   240,   240,   241,   242,   242,   243,
     243,   244,   245,   245,   246,   246,   247,   248,   248,   248,
     249,   250,   250,   251,   251,   251,   252,   253,   254,   254,
     255,   256,   256,   257,   257,   258,   259,   259,   260,   260,
     261,   262,   262,   263,   263,   264,   264,   265,   265,   266,
     267,   268,   268,   269,   269,   269,   270,   270,   271,   271,
     272,   272,   273,   273,   274,   274,   275,   276,   277,   277,
     278,   278,   279,   280,   281,   281,   282,   283,   283,   284
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     2,     1,
       0,     2,     1,     1,     3,     1,     0,     2,     1,     4,
       0,     3,     0,     1,     2,     1,     2,     1,     1,     5,
       3,     0,     1,     1,     1,     2,     4,     0,     2,     0,
       3,     2,     3,     0,     4,     1,     0,     4,     0,     1,
       3,     3,     1,     0,     1,     0,     2,     2,     1,     1,
       4,     1,     0,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     0,     3,     2,     3,     0,
       0,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     2,     4,     2,
       1,     2,     0,     2,     1,     1,     3,     1,     2,     0,
       3,     0,     2,     0,     2,     2,     3,     3,     0,     2,
       3,     0,     2,     3,     0,     3,     3,     0,     3,     3,
       2,     0,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     5,     0,     3,     0,     5,     7,     4,
       3,     3,     4,     3,     3,     0,     5,     3,     0,     2,
       2,     0,     2,     1,     1,     1,     4,     2,     1,     2,
       0,     2,     0,     2,     3,     2,     1,     1,     4,     2,
       0,     1,     0,     4,     0,     2,     1,     2,     3,     0,
       2,     3,     0,     2,     1,     2,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       3,     0,     2,     3,     0,     2,     2,     3,     0,     1,
       1,     2,     3,     0,     1,     1,     2,     3,     0,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     3,     2,
       0,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     2,     0,     3,     3,     3,     3,
       1,     1,     1,     1,     2,     1,     2,     1,     2,     3,
       0,     2,     1,     2,     3,     0,     4,     3,     3,     2,
       3,     3,     0,     3,     1,     4,     2,     3,     3,     0,
       3,     3,     0,     1,     1,     4,     1,     2,     5,     0,
       2,     1,     2,     3,     0,     3,     0,     1,     0,     5,
       2,     3,     0,     2,     4,     2,     3,     0,     3,     0,
       2,     3,     1,     0,     1,     1,     5,     3,     1,     0,
       1,     1,     5,     3,     1,     0,     2,     3,     0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
#line 1851 "pypar.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 514 "pypar.y" /* yacc.c:1906  */


int main(int argc, char *argv[]) {
    /*++argv, --argc;
    if(argc > 0) {
        yyin = fopen(argv[0],"r");
    }else  {
    yyin =stdin;

    }*/

	yyparse();

	return 0;
}
