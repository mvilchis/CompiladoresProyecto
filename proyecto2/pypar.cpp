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
#define YYFINAL  140
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   847

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  179
/* YYNRULES -- Number of rules.  */
#define YYNRULES  345
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  513

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
       0,    33,    33,    34,    35,    61,    62,    63,    65,    66,
      69,    70,    73,    76,    77,    80,    83,    85,    86,    89,
      90,    93,    96,    97,    99,   100,   103,   104,   106,   107,
     110,   112,   113,   116,   117,   120,   121,   124,   125,   126,
     129,   130,   133,   134,   137,   138,   141,   143,   144,   146,
     147,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     159,   160,   165,   166,   168,   169,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   185,   186,
     188,   189,   191,   192,   195,   196,   198,   199,   202,   205,
     207,   209,   210,   211,   212,   213,   215,   217,   219,   221,
     223,   225,   225,   227,   229,   231,   232,   234,   235,   237,
     238,   240,   241,   242,   244,   245,   247,   248,   250,   251,
     253,   255,   257,   259,   259,   261,   263,   263,   265,   267,
     267,   269,   271,   271,   273,   275,   277,   277,   279,   279,
     283,   284,   285,   286,   287,   288,   289,   290,   292,   294,
     294,   296,   296,   298,   300,   302,   304,   304,   306,   306,
     308,   308,   310,   312,   312,   314,   316,   316,   318,   320,
     320,   322,   322,   324,   324,   326,   326,   328,   328,   330,
     331,   331,   332,   332,   333,   335,   335,   336,   336,   337,
     337,   338,   338,   339,   340,   340,   341,   342,   342,   343,
     343,   344,   345,   345,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   347,   348,   348,   349,   350,
     350,   351,   353,   354,   354,   355,   355,   356,   357,   357,
     358,   358,   359,   360,   360,   361,   361,   361,   361,   362,
     362,   363,   363,   363,   364,   366,   366,   367,   367,   367,
     368,   368,   369,   369,   370,   370,   371,   371,   372,   372,
     373,   373,   374,   375,   376,   377,   378,   378,   378,   378,
     379,   379,   380,   381,   381,   382,   382,   383,   384,   384,
     385,   385,   386,   387,   387,   387,   388,   389,   389,   390,
     390,   390,   391,   392,   393,   393,   394,   395,   395,   396,
     396,   398,   399,   399,   400,   400,   401,   402,   402,   403,
     403,   407,   407,   408,   408,   409,   411,   412,   412,   413,
     413,   413,   414,   414,   416,   416,   418,   418,   419,   419,
     421,   421,   422,   423,   424,   424,   425,   425,   426,   427,
     428,   428,   430,   431,   431,   433
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
  "INDENT", "SALIDA", "DEDENT", "FIN", "'`'", "$accept", "single_input",
  "decorator", "decorator_aux", "d_aux", "decorators", "decorated",
  "decorated_aux", "funcdef", "parameters", "parameters_aux",
  "varargslist", "varargslist_a", "varargslist_a_aux_a", "val_aux_a",
  "varargslist_a_aux_b", "val_aux_b", "varargslist_b", "val_b",
  "varargslist_b_aux", "fpdef", "fplist", "fpl_aux", "fplist_aux",
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

#define YYPACT_NINF -396

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-396)))

#define YYTABLE_NINF -291

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,  -396,  -396,   716,    33,   716,  -396,   338,    31,    46,
      70,    15,   716,   338,   113,   737,   716,   716,   716,   716,
     118,  -396,  -396,   716,   338,  -396,   716,  -396,  -396,   628,
     716,   716,   118,  -396,  -396,  -396,   716,   117,  -396,    49,
    -396,  -396,  -396,  -396,  -396,    62,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,    47,  -396,  -396,  -396,  -396,  -396,  -396,   119,  -396,
    -396,  -396,  -396,  -396,  -396,   338,   338,  -396,  -396,   338,
    -396,  -396,   133,  -396,   762,  -396,  -396,  -396,  -396,    80,
    -396,  -396,  -396,   108,  -396,    65,  -396,  -396,    29,  -396,
     102,   121,   524,   115,  -396,   144,    25,   112,   125,  -396,
    -396,  -396,  -396,   163,   128,  -396,   138,  -396,  -396,  -396,
     182,  -396,   145,   175,   152,   205,   160,  -396,  -396,   208,
     164,  -396,    45,   167,  -396,  -396,  -396,   173,  -396,   139,
    -396,  -396,  -396,  -396,  -396,   166,   628,  -396,   174,   737,
    -396,   211,   223,   114,   197,   200,   111,  -396,  -396,    22,
      97,  -396,   123,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,   716,   183,   716,   184,
     186,   716,   187,   189,   249,   251,  -396,   102,   716,  -396,
     716,   165,  -396,    69,    42,   192,    60,  -396,  -396,  -396,
     524,   194,   105,   338,  -396,   524,   716,  -396,   195,   196,
     259,  -396,   716,  -396,   716,  -396,   716,   199,  -396,   338,
    -396,   201,  -396,  -396,   338,  -396,   204,  -396,  -396,   716,
    -396,   206,  -396,  -396,   210,   176,   207,  -396,   588,   185,
    -396,  -396,  -396,   716,  -396,   243,   737,   737,   252,   240,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,   338,   338,   338,
    -396,  -396,   338,  -396,  -396,   338,  -396,  -396,  -396,  -396,
     338,   338,   218,   636,   275,  -396,  -396,  -396,   716,  -396,
     220,   524,   338,  -396,   215,    65,   219,   187,  -396,  -396,
     221,   222,  -396,   224,  -396,   454,   217,   716,  -396,    89,
     225,   228,  -396,   524,   182,  -396,   286,  -396,  -396,  -396,
     263,   293,   716,   524,  -396,  -396,  -396,   294,   118,  -396,
     138,   138,  -396,   716,  -396,   262,   716,  -396,   264,   716,
    -396,   205,   716,  -396,   242,  -396,    85,  -396,   716,  -396,
    -396,  -396,   716,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,   244,  -396,   233,   238,   245,   246,
    -396,  -396,   241,  -396,  -396,  -396,   524,  -396,  -396,  -396,
    -396,   254,  -396,  -396,    65,  -396,  -396,  -396,  -396,   331,
     524,  -396,     8,   247,   302,   248,   524,  -396,  -396,  -396,
     255,   257,  -396,  -396,  -396,  -396,    13,  -396,  -396,  -396,
    -396,  -396,   737,  -396,   730,  -396,  -396,   260,  -396,  -396,
    -396,   716,   716,    23,  -396,   261,  -396,  -396,  -396,   250,
     716,  -396,   265,   263,   308,   102,  -396,  -396,  -396,  -396,
    -396,   716,  -396,   524,   253,  -396,   524,  -396,  -396,   286,
    -396,   716,  -396,    50,    31,   101,   287,  -396,  -396,   716,
    -396,  -396,  -396,   716,  -396,  -396,   256,  -396,  -396,  -396,
     274,   106,  -396,  -396,  -396,  -396,  -396,   524,  -396,  -396,
     291,   730,  -396,  -396,  -396,  -396,   292,   730,  -396,  -396,
    -396,  -396,   730,   295,  -396,   297,   303,  -396,   716,  -396,
    -396,  -396,  -396,   524,    50,   730,   101,  -396,   730,  -396,
     716,   652,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
     716,  -396,  -396
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      63,   271,   266,    85,     0,   314,    97,     0,    23,     0,
       0,   108,     0,     0,     0,     0,     0,     0,   314,     0,
       0,    90,    96,   115,     0,   243,     0,   242,   241,   249,
     251,   253,     0,     2,   268,   267,     0,     0,    11,     0,
     147,   145,     3,    50,    51,    61,    52,    53,    54,    55,
      91,    92,    93,    95,    94,    56,   101,   102,    57,    58,
      59,     0,   140,   141,   142,   143,   144,   298,   190,   195,
     198,   200,   203,   217,   220,   224,   224,   229,   234,     0,
     240,   261,   269,   192,     0,   146,    99,    78,    81,   312,
     313,    98,   295,     0,    35,     0,   187,    19,     0,    20,
      25,     0,    63,     0,   110,     0,     0,   106,     0,    89,
     133,   199,   164,   167,     0,   345,   119,   130,   127,   103,
     137,   100,   117,   139,     0,   281,     0,   248,   247,   276,
       0,   250,   310,     0,   252,   299,   300,     6,   344,     0,
       1,    10,    12,    14,    13,    48,     0,     4,    86,     0,
     191,   193,   196,   201,   215,   218,     0,   221,   222,   227,
     232,   239,   246,   270,    66,    67,    68,    69,    77,    70,
      71,    72,    73,    75,    74,    76,    63,     0,   314,     0,
      86,     0,    41,     0,     0,     0,    21,    25,     0,    34,
       0,     0,   171,     0,    23,     0,     0,   107,   105,   109,
      63,   131,     0,     0,   165,    63,     0,   135,   128,   125,
       0,   121,     0,   114,     0,   134,     0,    86,    79,     0,
     277,    86,   278,   262,     0,   272,    86,   273,   263,     0,
     306,    86,   307,   264,   318,     0,   342,   265,    63,     0,
      62,    65,    64,    87,   296,     0,     0,     0,   213,   211,
     210,   206,   207,   208,   205,   204,   209,     0,     0,     0,
     226,   225,     0,   231,   230,     0,   237,   238,   236,   235,
       0,     0,   318,   257,     0,   244,   260,    60,     0,    84,
       0,    63,    87,   293,     0,     0,    39,    40,    36,    27,
      29,     0,    24,    32,   282,    63,     0,   176,   155,   152,
       0,     0,    18,    63,   137,   111,     0,   104,   124,   113,
     152,     0,     0,    63,   166,   150,   118,     0,     0,   136,
     119,   119,    83,    87,    88,     0,    87,   279,     0,    87,
     274,   305,    87,   308,     0,     9,     0,     5,     0,    49,
      46,   297,     0,   194,   197,   214,   212,   202,   216,   219,
     223,   228,   233,   245,     0,   254,     0,   256,     0,     0,
     288,   285,    83,   311,   315,   294,    63,    43,    38,    37,
      42,     0,    26,    22,    31,    30,   174,    44,    45,    63,
      63,   168,   178,     0,   161,     0,    63,    16,    15,   120,
       0,    86,   153,   132,   163,   162,   152,   129,   126,   116,
     138,    82,     0,   280,     0,   275,   301,    86,   302,   309,
       7,     0,     0,   329,   316,    86,   343,   189,   283,     0,
     257,   284,     0,   152,     0,    25,   172,   173,   157,   169,
     170,     0,   175,    63,     0,   156,    63,   159,   112,    87,
     122,     0,   148,   341,    23,   335,   186,   183,   182,    87,
     303,   321,   323,     0,   326,   328,   317,   319,   289,   256,
     259,   257,   154,    28,    33,   177,   151,    63,   158,   123,
       0,     0,   340,   336,   337,   338,     0,     0,   334,   330,
     331,   332,     0,    86,   179,     0,   325,   327,   257,   291,
     258,   287,   160,    63,   341,     0,   335,   181,    87,   185,
       0,     0,   320,   292,   149,   339,   184,   333,   180,   304,
       0,   322,   324
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -396,  -396,   283,  -396,  -396,  -396,  -396,  -396,   330,  -396,
    -396,   136,  -396,  -396,  -181,  -396,  -396,  -396,  -396,  -396,
     -90,  -396,  -396,    86,  -396,    -5,     1,  -396,  -396,   137,
     202,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -176,   212,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -119,   -63,    59,
      75,  -396,  -396,  -396,     0,  -396,  -396,  -396,  -396,  -396,
      78,  -396,   384,  -396,  -396,  -286,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,    73,  -396,    88,  -396,  -198,  -396,
    -396,  -396,  -396,  -396,  -250,  -396,  -396,   -56,  -396,    -3,
    -146,  -396,   147,  -396,    -4,  -396,  -396,  -396,     5,  -396,
     146,  -396,   141,   142,   319,  -396,   143,  -396,  -396,   148,
    -396,  -396,   -64,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -395,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,   -55,  -396,     6,  -396,    16,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,    12,
     368,   140,  -396,  -396,  -396,  -396,   -91,  -396,  -396,   282,
    -396,   -82,  -396,  -115,  -396,   -79,  -396,  -396,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    37,    38,   235,   334,    39,    40,   142,    41,   195,
     301,    96,    97,    98,   189,   186,   372,    99,   375,   293,
     100,   183,   369,   286,   287,   376,   192,   239,   145,    43,
      44,    45,   240,   176,    46,   177,   217,    87,   244,   218,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,   105,   106,   107,   307,   121,   213,   207,   308,   118,
     309,   391,   119,   209,   120,   208,    58,   201,    59,    60,
     211,   215,   378,    62,   396,   384,    63,    64,    65,   298,
     299,   435,    66,   202,   112,   204,   300,   431,   193,   379,
     381,   432,   445,   483,   446,   447,   484,   101,   150,    67,
      68,   151,    69,   152,    70,    71,   153,   257,    72,   154,
      73,   155,    74,    75,   157,   262,    76,   159,   265,    77,
     160,   270,    78,    79,    80,   275,   126,   130,   133,   354,
     358,   489,   162,    81,    82,   131,   225,   226,   127,   220,
     221,    83,   276,   359,   422,   360,   490,    93,   180,    84,
     148,   134,   135,   406,   407,   136,   230,   231,   179,    91,
      85,   335,   336,   414,   486,   502,   415,   454,   478,   479,
     480,   481,   472,   473,   474,   475,   139,   236,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,    42,   310,   245,   283,   182,   291,   315,   187,   108,
     222,   111,    92,   113,   114,   161,   116,   232,    92,   109,
     122,    90,   128,   124,   392,   460,   125,   129,   132,   123,
     115,   117,   137,   138,    90,    94,   429,    94,   219,    89,
       1,   324,   441,     2,     3,   327,     4,   383,    94,     5,
     330,     6,     7,     8,     9,   333,    10,    11,     4,    12,
     219,    13,    14,    15,    16,   219,   304,    17,    10,    18,
      19,    94,    20,    21,    22,   430,   103,    23,    24,   296,
     471,   263,   264,   364,   104,    25,   184,   185,     1,    26,
      95,     2,    95,   503,   197,   453,    27,    28,    29,  -188,
      30,     8,    31,    95,   -17,   388,   198,   297,    32,     1,
     442,    15,     2,   229,   102,   395,   224,   140,   305,   110,
      32,   306,     8,   383,   117,   248,    95,   297,    33,    34,
      35,   477,    15,    25,   146,    36,   163,   462,   147,   242,
     249,   178,   411,   412,    27,    28,    29,   181,    30,   149,
      31,   266,   267,   268,    25,   269,   250,   251,   252,   253,
     254,   255,   241,   260,   261,    27,    28,    29,   423,    30,
    -286,    31,   312,   313,   188,   356,   194,    34,    35,   196,
     271,   199,   428,    36,   272,   292,   273,   294,   437,   190,
     280,   203,   274,   200,    90,   367,   205,   284,    34,    35,
     256,   399,   400,   316,    36,   206,   352,   353,   314,   320,
     210,   321,   212,   322,   214,   440,   408,   156,   156,   216,
     219,   494,   223,   224,    92,   325,   331,   496,   228,    92,
     328,   450,   497,   233,   234,   466,   238,   237,   468,   457,
     341,   243,   246,   344,   464,   506,   247,   258,   508,   259,
     278,   288,   281,   282,   285,   289,   443,   290,   448,   295,
     303,   311,   347,   318,   317,   319,   323,   337,   326,   492,
     357,   329,    -8,   332,   338,   362,   340,   342,   345,   346,
    -255,   361,   363,   366,   425,   380,   368,   365,   371,   373,
     387,   374,   304,   386,   382,   504,   377,   383,   455,   393,
     397,   402,   419,   404,   410,  -290,   418,   499,   -80,   113,
     421,   424,   434,   420,   463,   433,   436,   438,   -87,   458,
     401,   467,   141,   403,   439,   448,   405,   449,   456,   409,
     302,   448,   461,   413,     1,   416,   448,     2,     3,   417,
       4,     1,   488,     5,     2,     6,     7,     8,     9,   448,
      10,    11,   448,    12,   482,    13,    14,    15,    16,   493,
     495,    17,   498,    18,    19,   500,    20,    21,    22,   143,
     501,    23,    24,   370,   427,   339,   469,   398,   277,    25,
     377,   390,   389,    26,    61,   394,    25,   385,   476,   279,
      27,    28,    29,   343,    30,   158,    31,    27,    28,    29,
     349,    30,    32,    31,   348,   350,   491,   144,   451,   452,
     511,   227,   355,   351,   507,   505,     0,   459,     0,     0,
       0,     0,     0,    34,    35,     0,     0,   426,   465,    36,
      34,    35,     0,     0,     0,     0,    36,     0,   470,     0,
       0,     0,     0,     0,     0,     0,   485,     0,     0,     0,
     487,     0,     0,     0,     0,     0,     0,     1,   357,     0,
       2,     3,     0,     4,     0,     0,     5,     0,     6,     7,
       8,     9,     0,    10,    11,     0,    12,     0,    13,    14,
      15,    16,     0,     0,    17,   459,    18,    19,     0,    20,
      21,    22,     0,     0,    23,    24,     0,   509,   413,     0,
       0,     0,    25,     0,     0,     0,    26,   512,     0,     0,
       0,     0,     0,    27,    28,    29,     0,    30,     0,    31,
       0,     0,     0,     0,     0,    32,     0,     1,     0,     0,
       2,     3,     0,     0,     0,     0,     5,     0,     6,     0,
       8,     0,     0,     0,    11,     0,    34,    35,    13,    14,
      15,     0,    36,     0,     0,     0,    18,    19,     0,    20,
      21,    22,     0,     0,    23,    24,     0,     0,     0,     0,
       0,     0,    25,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,    30,     0,    31,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     0,
       5,     0,     6,     0,     8,     0,     0,     0,    11,     0,
       0,     0,    13,    14,    15,   191,    34,    35,     0,     0,
      18,    19,    36,    20,    21,    22,     0,     0,    23,    24,
       0,     1,     0,     0,     2,     0,    25,     0,     0,     1,
      26,     0,     2,     0,     8,     0,     0,    27,    28,    29,
       0,    30,     8,    31,    15,     1,     0,     0,     2,     0,
      18,     0,    15,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,    25,     0,    15,   -47,
      34,    35,     0,     0,    25,     0,    36,    27,    28,    29,
       0,    30,     0,    31,     0,    27,    28,    29,     0,    30,
      25,    31,     0,     0,     0,   356,     0,     0,     0,   510,
       0,    27,    28,    29,     0,    30,     0,    31,     0,     1,
      34,    35,     2,     0,     0,     0,    36,     0,    34,    35,
       0,     0,     8,     1,    36,     0,     2,     0,     0,     0,
       1,     0,    15,     2,    34,    35,   444,     0,     0,     0,
      36,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,    15,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    25,    30,
       0,    31,     0,     0,     0,    25,     0,     0,     0,    27,
      28,    29,     0,    30,     0,    31,    27,    28,    29,     0,
      30,     0,    31,     0,     0,     0,     0,     0,    34,    35,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,    34,    35,     0,     0,     0,     0,    36,    34,
      35,     0,     0,     0,     0,    36,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175
};

static const yytype_int16 yycheck[] =
{
       3,     0,   200,   149,   180,    95,   187,   205,    98,    12,
     125,    15,     7,    16,    17,    79,    19,   132,    13,    13,
      23,     5,    29,    26,   310,   420,    29,    30,    31,    24,
      18,     6,    32,    36,    18,     6,    28,     6,    15,     6,
       3,   217,    29,     6,     7,   221,     9,    34,     6,    12,
     226,    14,    15,    16,    17,   231,    19,    20,     9,    22,
      15,    24,    25,    26,    27,    15,     6,    30,    19,    32,
      33,     6,    35,    36,    37,    67,     6,    40,    41,    10,
      30,    59,    60,   281,    69,    48,    57,    58,     3,    52,
      61,     6,    61,   488,    69,    72,    59,    60,    61,    68,
      63,    16,    65,    61,    62,   303,   106,    38,    71,     3,
     396,    26,     6,    68,    68,   313,    15,     0,    58,     6,
      71,    61,    16,    34,     6,    11,    61,    38,    91,    92,
      93,    30,    26,    48,    72,    98,     3,   423,    91,   146,
      26,    61,    57,    58,    59,    60,    61,    39,    63,    30,
      65,    54,    55,    56,    48,    58,    42,    43,    44,    45,
      46,    47,   146,    52,    53,    59,    60,    61,   366,    63,
      64,    65,    67,    68,    72,    69,    61,    92,    93,    35,
      57,    69,   380,    98,    61,   188,    63,   190,   386,    68,
     178,    28,    69,    68,   178,   285,    68,   181,    92,    93,
      86,   320,   321,   206,    98,    67,   270,   271,   203,   212,
      28,   214,    67,   216,    39,   391,   331,    75,    76,    67,
      15,   471,    62,    15,   219,   219,   229,   477,    64,   224,
     224,   407,   482,    66,    61,   433,    70,    98,   436,   415,
     243,    67,    31,   247,   425,   495,    23,    50,   498,    49,
      67,    62,    68,    67,    67,     6,   402,     6,   404,    94,
      68,    67,   257,    67,    69,     6,    67,    91,    67,   467,
     273,    67,    62,    67,    67,   278,    91,    34,    26,    39,
      62,     6,    62,    68,   374,    68,    67,   282,    67,    67,
      62,    67,     6,    68,   297,   493,   295,    34,   413,     6,
       6,    39,    69,    39,    62,    67,    62,   483,    67,   312,
      64,    57,    10,    68,     6,    68,    68,    62,    62,    69,
     323,    68,    39,   326,    67,   471,   329,    67,    67,   332,
     194,   477,    67,   336,     3,   338,   482,     6,     7,   342,
       9,     3,    68,    12,     6,    14,    15,    16,    17,   495,
      19,    20,   498,    22,    67,    24,    25,    26,    27,    68,
      68,    30,    67,    32,    33,    68,    35,    36,    37,    39,
      67,    40,    41,   287,   379,   238,   439,   318,   176,    48,
     379,   306,   304,    52,     0,   312,    48,   299,   444,   177,
      59,    60,    61,   246,    63,    76,    65,    59,    60,    61,
     259,    63,    71,    65,   258,   262,   461,    39,   411,   412,
     501,   129,   272,   265,   496,   494,    -1,   420,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    96,   431,    98,
      92,    93,    -1,    -1,    -1,    -1,    98,    -1,   441,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   449,    -1,    -1,    -1,
     453,    -1,    -1,    -1,    -1,    -1,    -1,     3,   461,    -1,
       6,     7,    -1,     9,    -1,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    24,    25,
      26,    27,    -1,    -1,    30,   488,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    -1,   500,   501,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    52,   510,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    63,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    71,    -1,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      16,    -1,    -1,    -1,    20,    -1,    92,    93,    24,    25,
      26,    -1,    98,    -1,    -1,    -1,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    63,    -1,    65,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    16,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    91,    92,    93,    -1,    -1,
      32,    33,    98,    35,    36,    37,    -1,    -1,    40,    41,
      -1,     3,    -1,    -1,     6,    -1,    48,    -1,    -1,     3,
      52,    -1,     6,    -1,    16,    -1,    -1,    59,    60,    61,
      -1,    63,    16,    65,    26,     3,    -1,    -1,     6,    -1,
      32,    -1,    26,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    26,    91,
      92,    93,    -1,    -1,    48,    -1,    98,    59,    60,    61,
      -1,    63,    -1,    65,    -1,    59,    60,    61,    -1,    63,
      48,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    57,
      -1,    59,    60,    61,    -1,    63,    -1,    65,    -1,     3,
      92,    93,     6,    -1,    -1,    -1,    98,    -1,    92,    93,
      -1,    -1,    16,     3,    98,    -1,     6,    -1,    -1,    -1,
       3,    -1,    26,     6,    92,    93,    16,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    48,    63,
      -1,    65,    -1,    -1,    -1,    48,    -1,    -1,    -1,    59,
      60,    61,    -1,    63,    -1,    65,    59,    60,    61,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    98,    92,
      93,    -1,    -1,    -1,    -1,    98,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     6,     7,     9,    12,    14,    15,    16,    17,
      19,    20,    22,    24,    25,    26,    27,    30,    32,    33,
      35,    36,    37,    40,    41,    48,    52,    59,    60,    61,
      63,    65,    71,    91,    92,    93,    98,   100,   101,   104,
     105,   107,   125,   128,   129,   130,   133,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   165,   167,
     168,   171,   172,   175,   176,   177,   181,   198,   199,   201,
     203,   204,   207,   209,   211,   212,   215,   218,   221,   222,
     223,   232,   233,   240,   248,   259,   277,   136,   198,     6,
     248,   258,   207,   246,     6,    61,   110,   111,   112,   116,
     119,   196,    68,     6,    69,   150,   151,   152,   198,   246,
       6,   203,   183,   198,   198,   258,   198,     6,   158,   161,
     163,   154,   198,   207,   198,   198,   225,   237,   277,   198,
     226,   234,   198,   227,   250,   251,   254,   163,   198,   275,
       0,   101,   106,   107,   259,   127,    72,    91,   249,    30,
     197,   200,   202,   205,   208,   210,   212,   213,   213,   216,
     219,   221,   231,     3,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   132,   134,    61,   257,
     247,    39,   119,   120,    57,    58,   114,   119,    72,   113,
      68,    91,   125,   187,    61,   108,    35,    69,   163,    69,
      68,   166,   182,    28,   184,    68,    67,   156,   164,   162,
      28,   169,    67,   155,    39,   170,    67,   135,   138,    15,
     238,   239,   272,    62,    15,   235,   236,   268,    64,    68,
     255,   256,   272,    66,    61,   102,   276,    98,    70,   126,
     131,   248,   277,    67,   137,   199,    31,    23,    11,    26,
      42,    43,    44,    45,    46,    47,    86,   206,    50,    49,
      52,    53,   214,    59,    60,   217,    54,    55,    56,    58,
     220,    57,    61,    63,    69,   224,   241,   129,    67,   138,
     258,    68,    67,   137,   248,    67,   122,   123,    62,     6,
       6,   113,   198,   118,   198,    94,    10,    38,   178,   179,
     185,   109,   110,    68,     6,    58,    61,   153,   157,   159,
     187,    67,    67,    68,   207,   187,   198,    69,    67,     6,
     198,   198,   198,    67,   137,   246,    67,   137,   246,    67,
     137,   198,    67,   137,   103,   260,   261,    91,    67,   128,
      91,   198,    34,   201,   203,    26,    39,   207,   209,   211,
     215,   218,   221,   221,   228,   260,    69,   198,   229,   242,
     244,     6,   198,    62,   187,   207,    68,   119,    67,   121,
     122,    67,   115,    67,    67,   117,   124,   125,   171,   188,
      68,   189,   198,    34,   174,   185,    68,    62,   187,   169,
     159,   160,   174,     6,   183,   187,   173,     6,   158,   156,
     156,   198,    39,   198,    39,   198,   252,   253,   272,   198,
      62,    57,    58,   198,   262,   265,   198,   198,    62,    69,
      68,    64,   243,   187,    57,   119,    96,   124,   187,    28,
      67,   186,   190,    68,    10,   180,    68,   187,    62,    67,
     137,    29,   174,   199,    16,   191,   193,   194,   199,    67,
     137,   198,   198,    72,   266,   272,    67,   137,    69,   198,
     229,    67,   174,     6,   113,   198,   187,    68,   187,   157,
     198,    30,   271,   272,   273,   274,   196,    30,   267,   268,
     269,   270,    67,   192,   195,   198,   263,   198,    68,   230,
     245,   244,   187,    68,   193,    68,   193,   193,    67,   137,
      68,    67,   264,   229,   187,   274,   193,   270,   193,   198,
      57,   265,   198
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,    99,   100,   100,   100,   101,   102,   102,   103,   103,
     104,   104,   105,   106,   106,   107,   108,   109,   109,   110,
     110,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   117,   117,   118,   118,   119,   119,   120,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   126,   126,   127,
     127,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   133,   133,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   139,
     140,   141,   141,   141,   141,   141,   142,   143,   144,   145,
     146,   147,   147,   148,   149,   150,   150,   151,   151,   152,
     152,   153,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   158,   159,   160,   160,   161,   162,   162,   163,   164,
     164,   165,   166,   166,   167,   168,   169,   169,   170,   170,
     171,   171,   171,   171,   171,   171,   171,   171,   172,   173,
     173,   174,   174,   175,   176,   177,   178,   178,   179,   179,
     180,   180,   181,   182,   182,   183,   184,   184,   185,   186,
     186,   187,   187,   188,   188,   189,   189,   190,   190,   191,
     192,   192,   193,   193,   194,   195,   195,   196,   196,   197,
     197,   198,   198,   199,   200,   200,   201,   202,   202,   203,
     203,   204,   205,   205,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   207,   208,   208,   209,   210,
     210,   211,   212,   213,   213,   214,   214,   215,   216,   216,
     217,   217,   218,   219,   219,   220,   220,   220,   220,   221,
     221,   222,   222,   222,   223,   224,   224,   225,   225,   225,
     226,   226,   227,   227,   228,   228,   229,   229,   230,   230,
     231,   231,   232,   232,   232,   232,   232,   232,   232,   232,
     233,   233,   234,   235,   235,   236,   236,   237,   238,   238,
     239,   239,   240,   241,   241,   241,   242,   243,   243,   244,
     244,   244,   245,   246,   247,   247,   248,   249,   249,   250,
     250,   251,   252,   252,   253,   253,   254,   255,   255,   256,
     256,   257,   257,   258,   258,   259,   260,   261,   261,   262,
     262,   262,   263,   263,   264,   264,   265,   265,   266,   266,
     267,   267,   268,   269,   270,   270,   271,   271,   272,   273,
     274,   274,   275,   276,   276,   277
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     4,     0,     3,     0,     1,
       2,     1,     2,     1,     1,     5,     3,     0,     1,     1,
       1,     2,     4,     0,     2,     0,     3,     2,     3,     0,
       4,     1,     0,     4,     0,     1,     3,     3,     1,     0,
       1,     0,     2,     2,     1,     1,     4,     1,     0,     3,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     0,     3,     2,     3,     0,     0,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     2,     4,     2,     1,     2,     0,     2,
       1,     1,     3,     1,     2,     0,     3,     0,     2,     0,
       2,     2,     3,     3,     0,     2,     3,     0,     2,     3,
       0,     3,     3,     0,     3,     3,     2,     0,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     5,
       0,     3,     0,     5,     7,     4,     3,     3,     4,     3,
       3,     0,     5,     3,     0,     2,     2,     0,     2,     1,
       1,     1,     4,     2,     1,     2,     0,     2,     0,     2,
       3,     2,     1,     1,     4,     2,     0,     1,     0,     4,
       0,     2,     1,     2,     3,     0,     2,     3,     0,     2,
       1,     2,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     3,     0,     2,     3,
       0,     2,     2,     3,     0,     1,     1,     2,     3,     0,
       1,     1,     2,     3,     0,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     3,     2,     0,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       2,     0,     3,     3,     3,     3,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     3,     0,     2,     1,     2,
       3,     0,     4,     3,     3,     2,     3,     3,     0,     3,
       1,     4,     2,     3,     3,     0,     3,     3,     0,     1,
       1,     4,     1,     2,     5,     0,     2,     1,     2,     3,
       0,     3,     0,     1,     0,     5,     2,     3,     0,     2,
       4,     2,     3,     0,     3,     0,     2,     3,     1,     0,
       1,     1,     5,     3,     1,     0,     1,     1,     5,     3,
       1,     0,     2,     3,     0,     2
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
      
#line 1824 "pypar.cpp" /* yacc.c:1646  */
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
#line 435 "pypar.y" /* yacc.c:1906  */


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
