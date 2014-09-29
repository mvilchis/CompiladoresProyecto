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
#define YYDEBUG 1
using namespace std;

extern FILE *yyin;
extern char *yytext;
extern void inicializar();

int yylex(); 
int yyerror(const char *s) { printf ("Error: %s   *%s*\n", s, yytext); return 1;}


#line 82 "pypar.cpp" /* yacc.c:339  */

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
#line 17 "pypar.y" /* yacc.c:355  */

  int numi;
  float numf;
  const char* cad;
  char car;

#line 227 "pypar.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PYPAR_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 242 "pypar.cpp" /* yacc.c:358  */

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
#define YYFINAL  100
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   645

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  139
/* YYNRULES -- Number of rules.  */
#define YYNRULES  273
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  421

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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    42,    42,    42,    65,    68,    70,    71,
      74,    75,    78,    81,    82,    84,    85,    88,    89,    91,
      92,    95,    97,    98,   101,   102,   105,   106,   109,   111,
     112,   115,   116,   119,   120,   123,   124,   127,   129,   130,
     132,   133,   135,   136,   137,   138,   139,   140,   141,   143,
     146,   147,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   164,   165,   165,   166,   167,   169,
     169,   170,   170,   171,   172,   174,   175,   178,   180,   182,
     183,   184,   185,   187,   189,   191,   193,   194,   196,   199,
     200,   202,   203,   205,   206,   208,   210,   210,   212,   214,
     214,   218,   219,   220,   221,   222,   224,   226,   226,   228,
     228,   230,   232,   234,   236,   236,   238,   240,   240,   242,
     242,   244,   244,   246,   248,   248,   250,   253,   253,   255,
     255,   257,   259,   261,   261,   263,   265,   265,   267,   267,
     269,   271,   271,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   275,   277,   277,   279,   281,   281,
     283,   287,   289,   290,   290,   294,   296,   296,   298,   298,
     300,   302,   302,   304,   304,   304,   304,   306,   306,   308,
     308,   308,   310,   312,   312,   314,   314,   316,   316,   318,
     318,   320,   320,   322,   322,   324,   324,   326,   326,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   338,   338,
     340,   342,   342,   344,   344,   346,   348,   348,   350,   350,
     352,   352,   352,   354,   356,   356,   358,   358,   358,   360,
     362,   364,   364,   366,   368,   368,   370,   370,   372,   374,
     374,   376,   376,   378,   380,   380,   382,   382,   384,   386,
     386,   388,   388,   388,   390,   390,   392,   392,   394,   394,
     396,   396,   398,   398,   400,   402,   404,   404,   406,   406,
     408,   410,   412,   412
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
  "INDENT", "SALIDA", "DEDENT", "FIN", "$accept", "GOAL", "file_input",
  "funcdef", "parameters", "parameters_aux", "varargslist",
  "varargslist_a", "varargslist_a_aux_a", "val_aux_a",
  "varargslist_a_aux_b", "val_aux_b", "varargslist_b", "val_b",
  "varargslist_b_aux", "fpdef", "fplist", "fpl_aux", "fplist_aux",
  "fp_aux", "stmt", "simple_stmt", "ss_aux", "simple_stmt_aux",
  "small_stmt", "expr_stmt", "expr_stmt_aux_b", "augassign", "print_stmt",
  "norma1", "norma2", "norma4", "norma5", "norma3", "comaS", "del_stmt",
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "return_stmt_aux", "raise_stmt", "s3", "s4", "s5", "global_stmt",
  "global_stmt_aux", "exec_stmt", "s7", "compound_stmt", "if_stmt",
  "if_stmt_aux", "s8", "while_stmt", "for_stmt", "with_stmt",
  "with_stmt_aux", "with_item", "s10", "suite", "suite_aux",
  "testlist_safe", "testlist_safe_aux", "old_test", "s13", "s15", "test",
  "or_test", "or_test_aux", "and_test", "and_test_aux", "not_test",
  "comparison", "comparison_aux", "comp_op", "expr", "expr_aux",
  "xor_expr", "xor_expr_aux", "and_expr", "shift_expr", "shift_expr_aux",
  "arith_expr", "arith_expr_aux", "ae_aux", "term", "term_aux", "t_aux",
  "factor", "factor_aux", "power", "s16", "s17", "s18", "s19", "s20",
  "s21", "s22", "power_aux", "atom", "string_aux", "listmaker",
  "listmaker_aux", "lm_aux", "testlist_comp", "testlist_comp_aux",
  "tc_aux", "trailer", "subscriptlist", "subscriptlist_aux", "subscript",
  "sliceop", "exprlist", "exprlist_aux", "testlist", "testlist_aux",
  "dictorsetmaker", "dictorsetmaker_aux_a", "dsm_aux_a", "dsm_aux_a_a",
  "dictorsetmaker_aux_b", "dsm_aux_b", "dsm_aux_b_a", "arglist",
  "arglist_aux_a", "arglist_aux_b", "al_aux", "s25", "argument", "s26",
  "list_iter", "list_for", "list_if", "s27", "comp_iter", "comp_for",
  "comp_if", "s28", YY_NULLPTR
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
     345,   346,   347,   348,   349,   350,   351,   352
};
# endif

#define YYPACT_NINF -345

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-345)))

#define YYTABLE_NINF -228

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     374,    45,  -345,   502,  -345,   552,  -345,   360,  -345,    44,
     552,   360,    62,   552,   552,   552,  -345,  -345,   552,   360,
    -345,  -345,  -345,   552,   552,   552,   374,  -345,  -345,    70,
    -345,  -345,   374,  -345,     2,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,    43,    54,    76,  -345,   100,    27,    59,   -10,
     -10,    -5,   106,   360,  -345,    46,  -345,   366,  -345,   552,
    -345,  -345,    47,  -345,  -345,    52,    71,    60,    55,  -345,
      64,  -345,    65,    85,    56,  -345,    68,    90,   121,    75,
    -345,    21,    77,  -345,    11,    74,  -345,  -345,  -345,  -345,
    -345,  -345,   206,    81,    86,   552,  -345,   552,  -345,   552,
    -345,   128,   116,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,   360,   360,  -345,   360,  -345,   360,   360,  -345,  -345,
    -345,  -345,  -345,   360,  -345,  -345,  -345,  -345,  -345,   360,
    -345,    41,   527,   150,   110,    46,   552,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
     552,    96,   552,   101,   360,   104,   552,    34,   105,    57,
     166,  -345,   552,   107,   360,  -345,    57,   552,  -345,   552,
    -345,   360,  -345,   115,  -345,  -345,   360,   552,  -345,   104,
    -345,  -345,   552,   552,  -345,   104,  -345,  -345,     2,  -345,
      92,   552,  -345,   160,    54,    76,  -345,  -345,   100,    27,
      59,   -10,   -10,    -5,   106,    15,   133,  -345,   481,   129,
     130,   134,   132,   138,   136,  -345,   360,  -345,  -345,  -345,
    -345,   552,  -345,    47,  -345,  -345,    52,  -345,  -345,   137,
    -345,    25,   135,  -345,  -345,     0,  -345,   139,    57,   112,
    -345,   170,    64,    65,    57,  -345,   178,   141,   141,   177,
     552,  -345,   183,   156,  -345,   158,   121,  -345,  -345,  -345,
    -345,   552,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,   552,  -345,  -345,  -345,   552,   552,  -345,   104,   552,
     148,   552,  -345,   527,   159,  -345,    47,  -345,  -345,    57,
     162,   165,  -345,   227,   228,  -345,   552,   168,  -345,   456,
     169,  -345,  -345,  -345,  -345,   552,   170,   552,  -345,  -345,
     552,  -345,   552,  -345,  -345,  -345,   171,  -345,  -345,  -345,
    -345,   172,  -345,  -345,  -345,  -345,   173,   136,  -345,   101,
     170,    25,   181,  -345,  -345,  -345,   182,  -345,    25,   184,
    -345,   310,    57,   176,  -345,  -345,    22,    23,   185,  -345,
     552,  -345,   552,   186,   552,  -345,  -345,  -345,  -345,  -345,
    -345,    25,  -345,   162,   188,   198,  -345,  -345,   139,  -345,
    -345,  -345,  -345,  -345,    57,   552,  -345,  -345,  -345,  -345,
     552,  -345,  -345,  -345,  -345,   552,   104,  -345,   190,   172,
     199,  -345,  -345,   234,   168,   178,    22,    23,   185,  -345,
     552,  -345,   552,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,   209,   202,    68,   207,    87,    84,     0,   206,     0,
       0,     0,     0,     0,     0,     0,    78,    83,    90,     0,
     181,   180,   179,   186,   188,   190,     5,   204,   203,     0,
       2,   105,     5,    35,    41,    42,    43,    44,    45,    46,
      79,    80,    81,    82,    47,    48,    36,   101,   102,   103,
     104,   235,   130,   134,   137,   139,   142,   156,   159,   164,
     164,   167,   172,     0,   178,   198,   205,     0,   208,     0,
      64,    65,    70,    85,    86,   232,     0,     0,     0,    77,
      97,   138,   115,   118,     0,    88,    92,   100,   219,     0,
     185,   214,     0,   187,   247,     0,   189,   236,   237,     3,
       1,     4,     0,    39,    76,     0,   131,     0,   132,     0,
     135,   152,   150,   149,   145,   146,   147,   144,   143,   148,
     140,     0,     0,   154,     0,   157,     0,     0,   160,   161,
     169,   168,   165,     0,   175,   176,   174,   173,   170,     0,
     177,   250,   194,     0,   184,   198,     0,    52,    53,    54,
      55,    63,    56,    57,    58,    59,    61,    60,    62,    49,
       0,    74,     0,    72,     0,    76,     0,    14,     0,     0,
       0,    95,     0,     0,     0,   116,     0,     0,    89,     0,
      98,     0,   215,    76,   216,   199,     0,     0,   210,    76,
     211,   200,     0,     0,   243,    76,   244,   201,    41,    38,
       0,    75,   233,     0,   134,   137,   153,   151,   142,   156,
     159,   164,   164,   167,   172,   261,     0,   191,     0,     0,
       0,   193,     0,     0,     0,   222,     0,   182,   197,    51,
      50,     0,    66,    70,    71,    67,   232,    75,   230,     0,
      26,     0,     0,     9,    10,     0,    11,    16,     0,     0,
     119,   110,    97,   115,     0,   117,   108,    94,    94,     0,
      75,   217,     0,   214,   212,   247,   242,   245,    40,    37,
     234,     0,   133,   136,   141,   155,   158,   163,   162,   166,
     171,     0,   258,   260,   220,     0,     0,   248,    76,   250,
       0,   194,   221,   194,     0,   183,    70,    69,   231,     0,
      32,     0,     7,     0,     0,    12,     0,    25,     6,     0,
       0,   111,    96,   114,   113,     0,   110,     0,    91,    99,
       0,   218,     0,   213,   246,   238,    76,   239,   129,   259,
     253,   255,   251,   249,   226,   193,   196,     0,   223,    72,
     110,     0,    30,    31,    27,    18,    20,    15,    14,    23,
     122,     0,     0,     0,   106,    93,   273,   267,   128,   126,
      75,   240,     0,   257,   194,   228,   195,   224,    73,   112,
      34,    29,    28,     0,    31,     0,    17,    13,    16,    22,
      21,   120,   121,   109,     0,     0,   272,   268,   269,   270,
       0,   266,   262,   263,   264,     0,    76,   123,     0,   255,
       0,   252,   229,     0,    25,   108,   273,   267,   125,   127,
       0,   254,     0,    19,    24,   107,   271,   265,   124,   241,
     256
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -345,  -345,    13,  -345,  -345,  -345,  -345,  -345,  -103,  -119,
    -345,  -345,  -345,  -345,  -144,  -157,  -345,  -345,   -39,   -38,
    -275,     1,  -345,    66,   161,  -345,  -345,  -345,  -345,  -345,
    -345,  -205,   -69,  -345,  -160,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,    14,  -345,    24,  -345,  -345,
    -345,  -345,  -132,  -284,  -345,  -345,  -345,    26,   102,  -345,
    -174,  -345,  -345,  -133,  -344,  -345,  -345,    -3,  -101,    73,
     174,    80,     3,  -345,    72,  -345,     6,    78,   175,    82,
     167,  -345,   -54,   -65,    83,  -345,   187,    79,  -345,   -49,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -272,  -345,   155,
    -345,   294,  -345,  -345,    38,  -345,  -345,  -345,  -345,  -345,
     -35,    12,  -345,     7,    87,    19,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,    39,  -345,    17,  -345,   -92,  -345,  -210,
    -345,  -345,   217,  -345,   -98,  -345,   -85,  -345,   -95
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    29,    30,    31,   168,   242,   243,   244,   245,   307,
     305,   376,   246,   380,   349,   370,   301,   372,   373,   374,
      32,   250,   200,   103,    34,    35,   159,   160,    36,    70,
      71,   163,   235,   232,   202,    37,    38,    39,    40,    41,
      42,    73,    43,    85,   178,   318,    44,   171,    45,   180,
      46,    47,   316,   311,    48,    49,    50,   173,    82,   175,
     251,   351,   357,   396,   358,   397,   106,    51,    52,   108,
      53,   110,    54,    55,   120,   121,    56,   123,    57,   125,
      58,    59,   128,    60,   132,   133,    61,   138,   139,    62,
      63,    64,   227,    89,    92,    95,   216,   222,   365,   144,
      65,    66,    93,   188,   189,    90,   182,   183,   145,   223,
     294,   224,   366,    76,   165,    67,   104,    96,    97,   325,
     326,    98,   194,   195,   217,   218,   287,   363,   401,   219,
     282,   391,   392,   393,   394,   386,   387,   388,   389
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,    33,   256,   184,   203,   238,   129,    78,   288,   196,
     247,    83,    84,    75,   140,    86,    81,    75,    79,   336,
      88,    91,    94,   261,    74,    87,   181,    33,   297,   264,
     181,   240,   354,    33,   350,   267,   186,   181,   186,    99,
     240,   406,   126,   127,     1,   101,   407,     2,     1,     4,
      77,   408,   385,   390,   130,   131,   369,   303,   304,     8,
       1,   211,   212,     2,     3,     4,   161,    13,    80,     5,
     100,     6,   102,   105,   308,     8,   382,   122,   192,   193,
     314,    11,    12,    13,   300,   107,   241,   281,   187,    20,
     214,   339,   402,    16,    17,   241,    -8,    18,    19,   109,
      21,    22,    23,  -192,    24,    20,    25,   141,   124,   142,
     166,   111,   205,   174,   162,   143,    21,    22,    23,   164,
      24,   167,    25,   169,   176,   340,   112,   208,   332,   179,
     283,   170,   172,    27,    28,   177,   181,   185,   215,   221,
     197,   191,   113,   114,   115,   116,   117,   118,   249,    27,
      28,   199,   399,   201,   206,   207,   225,   277,   278,   233,
     134,   135,   136,   231,   137,   229,   361,   226,   234,    83,
     236,   237,   252,   248,   257,   254,   258,   295,   383,   230,
     255,   327,   260,   269,   263,   239,   119,    75,   259,   265,
     266,   378,    75,   262,   271,   284,   289,   302,   270,   290,
     291,  -227,   292,   293,   310,   299,   309,   315,   317,     1,
     405,   306,     2,     3,     4,   215,   320,   334,     5,   356,
       6,   359,   322,   187,     8,   192,   338,   344,   296,   341,
      11,    12,    13,   345,   346,   348,   409,   352,   360,   362,
     413,   364,    16,    17,   384,   377,    18,    19,   371,   375,
     -33,   379,   395,   400,    20,   403,   412,   321,   410,   404,
     414,   342,   343,   198,   268,    21,    22,    23,   328,    24,
     368,    25,   319,   415,   253,   418,   312,   272,   329,   313,
     274,   204,   330,   331,   359,   273,   215,   275,   335,   359,
     221,   210,   276,   280,   359,    68,   279,   209,    27,    28,
     228,   323,   367,   347,   324,   337,   333,   411,   190,   417,
      33,   416,   353,     1,   355,     0,     2,     3,     4,     0,
     213,     0,     5,   298,     6,     7,     0,     0,     8,     9,
       0,     0,    10,     0,    11,    12,    13,    14,     0,     0,
      15,     0,     0,     0,     0,     0,    16,    17,     0,     0,
      18,    19,    33,     0,     0,     0,     0,   398,    20,   215,
       0,   335,     0,     1,     0,     0,     2,     0,     4,    21,
      22,    23,     0,    24,     0,    25,     0,     1,     8,     0,
       2,     3,     4,     0,     0,     0,     5,     0,     6,     7,
       0,     0,     8,     9,     0,     0,    10,     0,    11,    12,
      13,    14,    27,    28,    15,     0,   381,   419,    20,   420,
      16,    17,     0,     0,    18,    19,     0,     0,     0,    21,
      22,    23,    20,    24,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    21,    22,    23,     0,    24,   146,    25,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,    27,    28,     0,     0,     0,     0,     0,     1,
       0,     0,     2,     3,     4,    26,    27,    28,     5,     0,
       6,     7,     0,     0,     8,     9,     0,     0,    10,     0,
      11,    12,    13,    14,     1,     0,    15,     2,     0,     4,
       0,     0,    16,    17,     0,     0,    18,    19,     0,     8,
       0,     0,     0,     0,    20,     1,     0,    13,     2,     0,
       4,     0,     0,     0,     0,    21,    22,    23,     0,    24,
       8,    25,     0,     0,     0,     0,     0,     0,    13,    20,
       1,     0,     0,     2,     0,     4,     0,     0,   285,   286,
      21,    22,    23,     0,    24,     8,    25,     0,    27,    28,
      20,     0,     0,    13,    69,     1,     0,     0,     2,     0,
       4,    21,    22,    23,     0,    24,     0,    25,     0,     0,
       8,     0,     0,    27,    28,    20,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,    21,    22,    23,     0,
      24,     0,    25,     0,    27,    28,   220,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,    23,     0,    24,     0,    25,     0,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28
};

static const yytype_int16 yycheck[] =
{
       3,     0,   176,    88,   105,   165,    60,    10,   218,    94,
     167,    14,    15,     7,    63,    18,    13,    11,    11,   291,
      23,    24,    25,   183,     5,    19,    15,    26,   233,   189,
      15,     6,   316,    32,   309,   195,    15,    15,    15,    26,
       6,   385,    52,    53,     3,    32,   390,     6,     3,     8,
       6,   395,    30,    30,    59,    60,   340,    57,    58,    18,
       3,   126,   127,     6,     7,     8,    69,    26,     6,    12,
       0,    14,    70,    30,   248,    18,   351,    50,    67,    68,
     254,    24,    25,    26,   241,    31,    61,    72,    67,    48,
     139,   296,   364,    36,    37,    61,    62,    40,    41,    23,
      59,    60,    61,    62,    63,    48,    65,    61,    49,    63,
      39,    11,   109,    28,    67,    69,    59,    60,    61,    67,
      63,    61,    65,    68,    68,   299,    26,   121,   288,    39,
     215,    67,    67,    92,    93,    67,    15,    62,   141,   142,
      66,    64,    42,    43,    44,    45,    46,    47,    91,    92,
      93,    70,   362,    67,    26,    39,     6,   211,   212,   162,
      54,    55,    56,    67,    58,   146,   326,    57,    67,   172,
     164,    67,     6,    68,   177,    68,   179,   226,   352,   160,
     174,   266,    67,    91,   187,   166,    86,   181,   181,   192,
     193,   348,   186,   186,    34,    62,    67,    62,   201,    69,
      68,    67,    64,    67,    34,    68,    94,    29,    67,     3,
     384,    72,     6,     7,     8,   218,    39,    69,    12,   320,
      14,   322,    39,    67,    18,    67,    67,    62,   231,    67,
      24,    25,    26,     6,     6,    67,   396,    68,    67,    67,
       6,    68,    36,    37,    68,   348,    40,    41,    67,    67,
      62,    67,    67,    67,    48,    57,    57,   260,    68,   378,
     404,   300,   300,   102,   198,    59,    60,    61,   271,    63,
     339,    65,   258,   405,   172,   408,   252,   204,   281,   253,
     208,   107,   285,   286,   385,   205,   289,   209,   291,   390,
     293,   124,   210,   214,   395,     1,   213,   122,    92,    93,
     145,   263,   337,   306,   265,   293,   289,   399,    91,   407,
     309,   406,   315,     3,   317,    -1,     6,     7,     8,    -1,
     133,    -1,    12,   236,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    -1,    24,    25,    26,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,
      40,    41,   351,    -1,    -1,    -1,    -1,   360,    48,   362,
      -1,   364,    -1,     3,    -1,    -1,     6,    -1,     8,    59,
      60,    61,    -1,    63,    -1,    65,    -1,     3,    18,    -1,
       6,     7,     8,    -1,    -1,    -1,    12,    -1,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    -1,    24,    25,
      26,    27,    92,    93,    30,    -1,    96,   410,    48,   412,
      36,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,    59,
      60,    61,    48,    63,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    63,    72,    65,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    92,    93,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,     6,     7,     8,    91,    92,    93,    12,    -1,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,    -1,
      24,    25,    26,    27,     3,    -1,    30,     6,    -1,     8,
      -1,    -1,    36,    37,    -1,    -1,    40,    41,    -1,    18,
      -1,    -1,    -1,    -1,    48,     3,    -1,    26,     6,    -1,
       8,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,    63,
      18,    65,    -1,    -1,    -1,    -1,    -1,    -1,    26,    48,
       3,    -1,    -1,     6,    -1,     8,    -1,    -1,    57,    58,
      59,    60,    61,    -1,    63,    18,    65,    -1,    92,    93,
      48,    -1,    -1,    26,    52,     3,    -1,    -1,     6,    -1,
       8,    59,    60,    61,    -1,    63,    -1,    65,    -1,    -1,
      18,    -1,    -1,    92,    93,    48,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,
      63,    -1,    65,    -1,    92,    93,    69,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    -1,    63,    -1,    65,    -1,    92,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,    12,    14,    15,    18,    19,
      22,    24,    25,    26,    27,    30,    36,    37,    40,    41,
      48,    59,    60,    61,    63,    65,    91,    92,    93,    99,
     100,   101,   118,   119,   122,   123,   126,   133,   134,   135,
     136,   137,   138,   140,   144,   146,   148,   149,   152,   153,
     154,   165,   166,   168,   170,   171,   174,   176,   178,   179,
     181,   184,   187,   188,   189,   198,   199,   213,   199,    52,
     127,   128,   165,   139,   213,   174,   211,     6,   165,   211,
       6,   170,   156,   165,   165,   141,   165,   174,   165,   191,
     203,   165,   192,   200,   165,   193,   215,   216,   219,   100,
       0,   100,    70,   121,   214,    30,   164,    31,   167,    23,
     169,    11,    26,    42,    43,    44,    45,    46,    47,    86,
     172,   173,    50,   175,    49,   177,    52,    53,   180,   180,
      59,    60,   182,   183,    54,    55,    56,    58,   185,   186,
     187,    61,    63,    69,   197,   206,    72,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   124,
     125,   165,    67,   129,    67,   212,    39,    61,   102,    68,
      67,   145,    67,   155,    28,   157,    68,    67,   142,    39,
     147,    15,   204,   205,   234,    62,    15,    67,   201,   202,
     230,    64,    67,    68,   220,   221,   234,    66,   122,    70,
     120,    67,   132,   166,   168,   170,    26,    39,   174,   176,
     178,   181,   181,   184,   187,   165,   194,   222,   223,   227,
      69,   165,   195,   207,   209,     6,    57,   190,   197,   213,
     213,    67,   131,   165,    67,   130,   174,    67,   132,   213,
       6,    61,   103,   104,   105,   106,   110,   113,    68,    91,
     119,   158,     6,   156,    68,   174,   158,   165,   165,   211,
      67,   132,   211,   165,   132,   165,   165,   132,   121,    91,
     165,    34,   167,   169,   172,   175,   177,   180,   180,   182,
     185,    72,   228,   234,    62,    57,    58,   224,   227,    67,
      69,    68,    64,    67,   208,   187,   165,   129,   212,    68,
     113,   114,    62,    57,    58,   108,    72,   107,   158,    94,
      34,   151,   145,   155,   158,    29,   150,    67,   143,   143,
      39,   165,    39,   202,   221,   217,   218,   234,   165,   165,
     165,   165,   132,   223,    69,   165,   195,   209,    67,   129,
     158,    67,   116,   117,    62,     6,     6,   165,    67,   112,
     118,   159,    68,   165,   151,   165,   166,   160,   162,   166,
      67,   132,    67,   225,    68,   196,   210,   208,   130,   151,
     113,    67,   115,   116,   117,    67,   109,   106,   113,    67,
     111,    96,   118,   158,    68,    30,   233,   234,   235,   236,
      30,   229,   230,   231,   232,    67,   161,   163,   165,   227,
      67,   226,   195,    57,   107,   158,   162,   162,   162,   132,
      68,   225,    57,     6,   112,   150,   236,   232,   161,   165,
     165
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,   100,   100,   100,   101,   102,   103,   103,
     104,   104,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   111,   111,   112,   112,   113,   113,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   120,   120,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   123,
     124,   124,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   134,   135,
     135,   135,   135,   136,   137,   138,   139,   139,   140,   141,
     141,   142,   142,   143,   143,   144,   145,   145,   146,   147,
     147,   148,   148,   148,   148,   148,   149,   150,   150,   151,
     151,   152,   153,   154,   155,   155,   156,   157,   157,   158,
     158,   159,   159,   160,   161,   161,   162,   163,   163,   164,
     164,   165,   166,   167,   167,   168,   169,   169,   170,   170,
     171,   172,   172,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   174,   175,   175,   176,   177,   177,
     178,   179,   180,   180,   180,   181,   182,   182,   183,   183,
     184,   185,   185,   186,   186,   186,   186,   187,   187,   188,
     188,   188,   189,   190,   190,   191,   191,   192,   192,   193,
     193,   194,   194,   195,   195,   196,   196,   197,   197,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   199,   199,
     200,   201,   201,   202,   202,   203,   204,   204,   205,   205,
     206,   206,   206,   207,   208,   208,   209,   209,   209,   210,
     211,   212,   212,   213,   214,   214,   215,   215,   216,   217,
     217,   218,   218,   219,   220,   220,   221,   221,   222,   223,
     223,   224,   224,   224,   225,   225,   226,   226,   227,   227,
     228,   228,   229,   229,   230,   231,   232,   232,   233,   233,
     234,   235,   236,   236
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     5,     3,     0,     1,
       1,     1,     2,     4,     0,     2,     0,     3,     2,     3,
       0,     4,     1,     0,     4,     0,     1,     3,     3,     1,
       0,     1,     0,     2,     2,     1,     1,     4,     1,     0,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     3,     0,     3,
       0,     1,     0,     4,     0,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     0,     2,     2,
       0,     3,     0,     2,     0,     3,     3,     0,     3,     3,
       0,     1,     1,     1,     1,     1,     6,     5,     0,     3,
       0,     5,     7,     5,     3,     0,     2,     2,     0,     1,
       4,     2,     1,     2,     3,     2,     1,     2,     0,     4,
       0,     2,     2,     3,     0,     2,     3,     0,     2,     1,
       2,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     3,     0,     2,     3,     0,
       2,     2,     3,     3,     0,     2,     3,     0,     1,     1,
       2,     3,     0,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     3,     2,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     2,     0,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     2,     3,     0,     2,     1,     2,     3,     0,
       3,     3,     2,     3,     3,     0,     3,     1,     4,     2,
       3,     3,     0,     3,     3,     0,     1,     1,     4,     1,
       2,     5,     0,     2,     1,     2,     3,     0,     2,     3,
       0,     2,     4,     2,     3,     0,     3,     0,     2,     3,
       1,     0,     1,     1,     5,     3,     1,     0,     1,     1,
       5,     3,     1,     0
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
        case 2:
#line 37 "pypar.y" /* yacc.c:1646  */
    {printf("Exito\n");}
#line 1727 "pypar.cpp" /* yacc.c:1646  */
    break;


#line 1731 "pypar.cpp" /* yacc.c:1646  */
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
#line 415 "pypar.y" /* yacc.c:1906  */


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

