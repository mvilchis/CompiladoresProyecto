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
#define YYFINAL  104
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   783

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  147
/* YYNRULES -- Number of rules.  */
#define YYNRULES  288
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  415

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
      43,    46,    47,    48,    51,    54,    55,    58,    59,    63,
      66,    68,    69,    72,    73,    76,    79,    80,    82,    83,
      86,    87,    89,    90,    93,    95,    96,    99,   100,   103,
     104,   107,   108,   109,   112,   113,   116,   117,   120,   121,
     124,   126,   127,   129,   130,   132,   133,   134,   135,   136,
     137,   138,   140,   141,   143,   144,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   160,   161,
     163,   164,   166,   167,   170,   171,   173,   174,   177,   180,
     182,   184,   185,   186,   187,   189,   191,   193,   195,   196,
     198,   201,   202,   204,   205,   207,   208,   210,   212,   212,
     214,   216,   216,   220,   221,   222,   223,   224,   226,   228,
     228,   230,   230,   232,   234,   236,   238,   238,   240,   242,
     242,   244,   244,   246,   246,   248,   250,   250,   252,   255,
     255,   257,   257,   259,   261,   263,   263,   265,   267,   267,
     269,   269,   271,   273,   273,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   277,   279,   279,   281,
     283,   283,   285,   289,   291,   291,   293,   293,   295,   297,
     297,   299,   299,   301,   303,   303,   305,   305,   305,   305,
     307,   307,   309,   309,   309,   311,   313,   313,   315,   315,
     317,   317,   319,   319,   321,   321,   323,   323,   325,   325,
     327,   327,   329,   330,   331,   332,   333,   334,   335,   336,
     338,   338,   340,   342,   342,   344,   344,   346,   348,   348,
     350,   350,   352,   352,   352,   354,   356,   356,   358,   358,
     358,   360,   362,   364,   364,   366,   368,   368,   370,   370,
     372,   374,   374,   376,   376,   378,   380,   380,   382,   382,
     384,   386,   386,   388,   388,   388,   390,   390,   392,   392,
     394,   394,   396,   396,   398,   398,   400,   402,   404,   404,
     406,   406,   408,   410,   412,   412,   414,   416,   416
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
  "eval_input_aux", "ei_aux", "funcdef", "parameters", "parameters_aux",
  "varargslist", "varargslist_a", "varargslist_a_aux_a", "val_aux_a",
  "varargslist_a_aux_b", "val_aux_b", "varargslist_b", "val_b",
  "varargslist_b_aux", "fpdef", "fplist", "fpl_aux", "fplist_aux",
  "fp_aux", "stmt", "simple_stmt", "ss_aux", "simple_stmt_aux",
  "small_stmt", "expr_stmt", "expr_stmt_aux_b", "augassign", "print_stmt",
  "print_stmt_aux_a", "print_stmt_aux_b", "s1", "comaS", "s2", "del_stmt",
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "return_stmt_aux", "raise_stmt", "s3", "s4", "s5", "global_stmt",
  "global_stmt_aux", "exec_stmt", "s7", "compound_stmt", "if_stmt",
  "if_stmt_aux", "s8", "while_stmt", "for_stmt", "with_stmt",
  "with_stmt_aux", "with_item", "s10", "suite", "suite_aux",
  "testlist_safe", "testlist_safe_aux", "old_test", "s13", "s15", "test",
  "or_test", "or_test_aux", "and_test", "and_test_aux", "not_test",
  "comparison", "comparison_aux", "comp_op", "expr", "expr_aux",
  "xor_expr", "xor_expr_aux", "and_expr", "shift_expr", "shift_expr_aux",
  "shift_sim", "arith_expr", "arith_expr_aux", "ae_aux", "term",
  "term_aux", "t_aux", "factor", "factor_aux", "power", "s16", "s17",
  "s18", "s19", "s20", "s21", "s22", "power_aux", "atom", "string_aux",
  "listmaker", "listmaker_aux", "lm_aux", "testlist_comp",
  "testlist_comp_aux", "tc_aux", "trailer", "subscriptlist",
  "subscriptlist_aux", "subscript", "sliceop", "exprlist", "exprlist_aux",
  "testlist", "testlist_aux", "dictorsetmaker", "dictorsetmaker_aux_a",
  "dsm_aux_a", "dsm_aux_a_a", "dictorsetmaker_aux_b", "dsm_aux_b",
  "dsm_aux_b_a", "arglist", "arglist_aux_a", "arglist_aux_b", "al_aux",
  "s25", "argument", "s26", "list_iter", "list_for", "list_if", "s27",
  "comp_iter", "comp_for", "comp_if", "s28", "testlist1", "testlist1_aux", YY_NULLPTR
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

#define YYPACT_NINF -320

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-320)))

#define YYTABLE_NINF -240

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      36,  -320,  -320,   685,   685,  -320,    46,    41,   685,    46,
      59,   685,   685,   685,  -320,  -320,   685,    46,  -320,   685,
    -320,  -320,   685,   685,   685,    71,  -320,  -320,   685,    74,
    -320,  -320,   -62,   304,  -320,  -320,  -320,    75,  -320,  -320,
      -5,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,   -13,  -320,  -320,  -320,  -320,  -320,    70,  -320,  -320,
    -320,  -320,  -320,  -320,    46,    46,  -320,  -320,    46,  -320,
    -320,   101,   199,  -320,  -320,  -320,  -320,  -320,    77,    52,
      58,  -320,  -320,  -320,  -320,   107,    64,  -320,    69,    98,
      73,   128,    91,  -320,   140,    93,  -320,    42,    97,  -320,
    -320,  -320,  -320,    61,  -320,  -320,  -320,  -320,  -320,  -320,
     296,    96,   685,  -320,   103,   685,  -320,   137,   152,   104,
     126,   130,    -8,  -320,  -320,    10,    67,  -320,    51,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,    83,    92,   685,   117,   119,   685,    24,
     121,   505,   124,    35,    46,  -320,   505,   685,  -320,   685,
    -320,   685,   125,  -320,    46,  -320,   127,  -320,  -320,    46,
    -320,   134,  -320,  -320,   685,  -320,   138,  -320,  -320,   142,
    -320,   568,   106,  -320,   685,  -320,   172,   685,   685,   181,
     171,  -320,  -320,  -320,  -320,  -320,  -320,  -320,    46,    46,
      46,  -320,  -320,    46,  -320,  -320,    46,  -320,  -320,  -320,
    -320,    46,    46,   150,   609,   207,  -320,  -320,  -320,  -320,
    -320,   685,  -320,    46,  -320,   146,  -320,    30,   153,  -320,
    -320,    32,  -320,   144,   505,   123,  -320,   185,   214,   685,
     505,  -320,  -320,   155,   155,  -320,   685,  -320,   184,   685,
    -320,   186,   685,  -320,   128,   685,  -320,   685,  -320,  -320,
    -320,   685,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,   162,  -320,   584,   157,   160,   161,   164,
    -320,  -320,   163,  -320,   505,   166,   173,  -320,   232,   233,
    -320,   144,   685,  -320,  -320,   462,   176,  -320,  -320,  -320,
    -320,    12,   685,  -320,  -320,  -320,   685,  -320,   685,  -320,
    -320,   174,  -320,  -320,  -320,  -320,  -320,   685,   685,     7,
    -320,   180,   179,   685,  -320,   183,   185,    30,   188,   166,
    -320,  -320,   189,   190,  -320,   192,  -320,   398,   505,   685,
    -320,  -320,    38,    68,   194,  -320,   685,  -320,  -320,  -320,
     685,  -320,  -320,   178,  -320,  -320,  -320,   195,   139,  -320,
    -320,  -320,  -320,  -320,   196,  -320,  -320,    30,  -320,  -320,
    -320,  -320,   198,   685,  -320,  -320,  -320,  -320,   685,  -320,
    -320,  -320,  -320,   685,   197,  -320,   200,   202,  -320,   685,
    -320,  -320,  -320,   245,   144,   505,    38,    68,  -320,   685,
    -320,   685,   649,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,   685,  -320,  -320
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      65,   221,   216,    85,    99,    96,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    95,   102,     0,   194,     0,
     193,   192,   199,   201,   203,    12,   218,   217,     0,     0,
       2,     3,     0,     9,     4,   117,    13,    48,    54,    55,
      63,    56,    57,    58,    59,    91,    92,    93,    94,    60,
      61,    49,   113,   114,   115,   116,   247,   142,   146,   149,
     151,   154,   168,   171,   175,   175,   180,   185,     0,   191,
     211,   219,    16,    78,    81,    97,    98,   244,     0,     0,
       0,    89,   109,   150,   127,   130,     0,   100,   104,   112,
       0,   231,     0,   198,   226,     0,   200,   259,     0,   202,
     248,   249,   288,     0,     1,     8,    12,    11,    48,    49,
       0,    52,     0,     7,    86,     0,   143,   144,   147,   152,
     166,   169,     0,   172,   173,   178,   183,   190,   197,   220,
      66,    67,    68,    69,    77,    70,    71,    72,    73,    75,
      74,    76,    18,     0,    15,     0,     0,    86,     0,    27,
       0,    65,   107,     0,     0,   128,    65,     0,   101,     0,
     110,     0,    86,    79,     0,   227,    86,   228,   212,     0,
     222,    86,   223,   213,     0,   255,    86,   256,   214,   286,
     215,    65,     0,    64,    87,   245,     0,     0,     0,   164,
     162,   161,   157,   158,   159,   156,   155,   160,     0,     0,
       0,   177,   176,     0,   182,   181,     0,   188,   189,   187,
     186,     0,     0,   262,   207,     0,   195,   210,    14,    17,
      62,     0,    84,    87,   242,     0,    39,     0,     0,    22,
      23,     0,    24,    29,    65,     0,   131,   122,     0,     0,
      65,   129,   120,   106,   106,    83,    87,    88,     0,    87,
     229,     0,    87,   224,   254,    87,   257,     0,    53,    50,
     246,     0,   145,   148,   165,   163,   153,   167,   170,   174,
     179,   184,   196,     0,   204,     0,     0,   206,     0,     0,
     237,   234,    83,   243,    65,    45,     0,    20,     0,     0,
      25,    29,     0,    38,    19,    65,     0,   123,   108,   126,
     125,   122,     0,   103,   111,    82,     0,   230,     0,   225,
     250,    86,   251,   258,   287,   141,   232,     0,     0,   273,
     260,    86,     0,   207,   233,     0,   122,     0,    43,    44,
      40,    31,    33,     0,    28,    36,   134,    65,    65,     0,
     118,   105,   285,   279,   140,   138,    87,   252,   265,   267,
       0,   270,   272,   261,   263,   238,   206,   209,   207,   124,
      47,    42,    41,    46,     0,    30,    26,    35,    34,   132,
     133,   121,     0,     0,   284,   280,   281,   282,     0,   278,
     274,   275,   276,     0,    86,   135,     0,   269,   271,   207,
     240,   208,   236,     0,    29,    65,   285,   279,   137,    87,
     139,     0,     0,   264,   241,    32,    37,   119,   283,   277,
     136,   253,     0,   266,   268
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,  -320,  -320,   229,  -320,  -320,   141,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -277,  -320,  -320,  -320,  -320,
    -320,  -203,  -320,  -320,   -58,  -320,  -255,     1,  -320,  -320,
      86,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -139,   145,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
      43,  -320,  -320,  -320,  -320,   288,  -320,  -320,  -270,  -320,
    -320,  -320,  -320,    53,  -320,  -153,  -320,  -320,  -320,  -319,
    -320,  -320,    -3,  -113,  -320,   108,  -320,     0,  -320,  -320,
    -320,    -2,  -320,    94,  -320,   100,    54,   236,  -320,    95,
    -320,  -320,    88,  -320,  -320,   -51,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -297,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,   -61,  -320,     9,
    -320,    29,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -100,  -320,  -320,   209,  -320,
     -93,  -320,   -85,  -320,   -91,  -320,  -320
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    29,    30,    31,    32,    33,    34,   143,   144,    35,
     150,   228,   229,   230,   231,   293,   290,   365,   232,   368,
     335,   233,   286,   362,   328,   329,    36,   236,   182,   111,
      38,    39,    40,   145,    41,   146,   162,    73,   185,   163,
      42,    43,    44,    45,    46,    47,    75,    48,    87,   158,
     303,    49,   152,    50,   160,   109,    52,   301,   297,    53,
      54,    55,   153,    84,   155,   237,   337,   343,   384,   344,
     385,   116,    56,    57,   117,    58,   118,    59,    60,   119,
     198,    61,   120,    62,   121,    63,    64,   123,   203,    65,
     125,   206,    66,   126,   211,    67,    68,    69,   216,    92,
      95,    98,   273,   278,   390,   128,    70,    71,    96,   170,
     171,    93,   165,   166,   217,   279,   325,   280,   391,    78,
     147,   110,   114,    99,   100,   310,   311,   101,   175,   176,
     274,   275,   320,   387,   403,   321,   351,   379,   380,   381,
     382,   374,   375,   376,   377,   103,   179
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,    37,   186,   242,    77,    80,   167,    77,   224,    85,
      86,    83,   177,    88,   333,    89,    90,   127,    81,    91,
      94,    97,   164,   247,   285,   102,   357,   250,   291,    72,
     226,   340,   253,    76,   108,   105,   226,   256,   226,     1,
     336,   339,     2,     3,   201,   202,   296,    79,     4,     1,
       5,     6,     2,   164,   396,     7,   359,   164,     8,   397,
       9,    10,    11,    12,   398,    82,    13,   112,   373,   204,
     205,    -5,    14,    15,   104,    -6,    16,    17,   113,   350,
     410,   294,   370,   169,    18,   227,   -21,   300,    19,   288,
     289,   227,   404,   227,    18,    20,    21,    22,   378,    23,
     115,    24,   239,   240,   129,    20,    21,    22,   212,    23,
     174,    24,   213,   149,   214,   189,   148,   406,   122,   122,
     215,   207,   208,   209,   360,   210,   151,    25,    26,    27,
     190,   326,   156,   -10,    28,   154,   157,   159,    26,    27,
     161,   183,     1,   164,    28,     2,   191,   192,   193,   194,
     195,   196,   241,   168,   243,   169,   244,   173,   245,   180,
     271,   272,    77,   178,   394,    11,   181,    77,   187,   312,
     184,   254,   347,   248,   220,   188,   199,   225,   251,   200,
     218,   260,   354,   142,   221,   371,   223,    18,   263,   234,
     197,   238,   246,   342,   249,   345,   266,   259,    20,    21,
      22,   252,    23,  -235,    24,   255,   261,   264,   276,   257,
     265,   277,  -205,   281,   284,   287,   292,   295,   282,   296,
     298,   283,   302,   306,   316,   308,   322,  -239,   324,   323,
     -80,    26,    27,   327,   352,   330,    85,    28,   331,   332,
     -87,   346,   407,   305,   338,   400,   307,   353,   355,   309,
     358,   405,   313,   393,   314,   361,   364,   366,   315,   367,
     345,   383,   107,   389,   399,   345,   395,   258,   401,   402,
     345,   363,   319,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   219,   345,   304,    51,   334,
     142,   222,   299,   267,   270,   262,   108,   392,   269,   341,
     268,   124,   413,   172,   409,   408,     0,     1,     0,     0,
       2,     3,     0,     0,   348,   349,     4,     0,     5,     6,
     356,     0,     0,     7,     0,     0,     8,     0,     9,    10,
      11,    12,     0,     0,    13,     0,   372,     0,   108,     0,
      14,    15,     0,   386,    16,    17,     0,   388,     0,     0,
       0,     0,    18,     0,     0,   277,    19,     0,     0,     0,
       0,     0,     0,    20,    21,    22,     0,    23,     0,    24,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,     0,     0,     0,     0,   356,     0,     0,     0,
       0,     0,     0,     0,     0,   106,    26,    27,   411,   319,
       0,     1,    28,     0,     2,     3,     0,     0,     0,   414,
       4,     0,     5,     6,     0,     0,     0,     7,     0,     0,
       8,     0,     9,    10,    11,    12,     0,     0,    13,     0,
       0,     0,     0,     0,    14,    15,     0,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,    20,    21,    22,
       0,    23,     0,    24,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     0,     4,     0,     5,     6,     0,     0,
       0,     7,     0,     0,     8,     0,     9,    10,    11,    12,
      26,    27,    13,     0,   369,     0,    28,     0,    14,    15,
       0,     0,    16,    17,     0,     0,     0,     0,     1,     0,
      18,     2,     3,     0,    19,     0,     0,     4,     0,     5,
       0,    20,    21,    22,     0,    23,     0,    24,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,     0,     0,    16,    17,     0,     0,     0,
       0,     0,     0,    18,    26,    27,     0,    19,     0,     0,
      28,     0,     0,     0,    20,    21,    22,     0,    23,     0,
      24,     1,     0,     0,     2,     3,     0,     0,     0,     0,
       4,     0,     5,     0,     0,     0,     0,     1,     0,     0,
       2,     0,     9,    10,    11,     0,   235,    26,    27,     0,
       0,     0,     0,    28,    14,    15,     0,     0,    16,    17,
      11,     0,     1,     0,     0,     2,    18,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,    20,    21,    22,
       0,    23,    18,    24,     0,    11,     0,     0,     0,     0,
       0,   317,   318,    20,    21,    22,     0,    23,     0,    24,
       0,     0,     1,     0,     0,     2,     0,    18,     0,   -51,
      26,    27,     0,     0,     0,     0,    28,     0,    20,    21,
      22,     0,    23,     0,    24,    11,    26,    27,   276,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     1,     0,
       0,     2,     0,     0,     0,     0,     0,    18,     0,     0,
       0,    26,    27,     0,     0,     0,   412,    28,    20,    21,
      22,    11,    23,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,    26,    27,     0,    20,    21,    22,    28,    23,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    27,     0,
       0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
       3,     0,   115,   156,     6,     8,    91,     9,   147,    12,
      13,    11,    97,    16,   291,    17,    19,    68,     9,    22,
      23,    24,    15,   162,   227,    28,   323,   166,   231,     0,
       6,   301,   171,     4,    33,    97,     6,   176,     6,     3,
     295,    29,     6,     7,    52,    53,    34,     6,    12,     3,
      14,    15,     6,    15,   373,    19,   326,    15,    22,   378,
      24,    25,    26,    27,   383,     6,    30,    72,    30,    59,
      60,     0,    36,    37,     0,     0,    40,    41,    91,    72,
     399,   234,   337,    15,    48,    61,    62,   240,    52,    57,
      58,    61,   389,    61,    48,    59,    60,    61,    30,    63,
      30,    65,    67,    68,     3,    59,    60,    61,    57,    63,
      68,    65,    61,    61,    63,    11,    39,   394,    64,    65,
      69,    54,    55,    56,   327,    58,    68,    91,    92,    93,
      26,   284,    68,    97,    98,    28,    67,    39,    92,    93,
      67,   112,     3,    15,    98,     6,    42,    43,    44,    45,
      46,    47,   154,    62,   157,    15,   159,    64,   161,    98,
     211,   212,   164,    66,   367,    26,    70,   169,    31,   254,
      67,   174,   311,   164,   145,    23,    50,   148,   169,    49,
      97,   184,   321,    91,    67,   338,    67,    48,   188,    68,
      86,    67,    67,   306,    67,   308,   198,    91,    59,    60,
      61,    67,    63,    64,    65,    67,    34,    26,    69,    67,
      39,   214,    62,     6,    68,    62,    72,    94,   221,    34,
       6,   223,    67,    39,    62,    39,    69,    67,    64,    68,
      67,    92,    93,    67,   319,    62,   239,    98,     6,     6,
      62,    67,   395,   246,    68,   384,   249,    67,    69,   252,
      67,     6,   255,    57,   257,    67,    67,    67,   261,    67,
     373,    67,    33,    68,    67,   378,    68,   181,    68,    67,
     383,   329,   275,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,   144,   399,   244,     0,   292,
      91,   146,   239,   199,   206,   187,   295,   358,   203,   302,
     200,    65,   402,    94,   397,   396,    -1,     3,    -1,    -1,
       6,     7,    -1,    -1,   317,   318,    12,    -1,    14,    15,
     323,    -1,    -1,    19,    -1,    -1,    22,    -1,    24,    25,
      26,    27,    -1,    -1,    30,    -1,   339,    -1,   337,    -1,
      36,    37,    -1,   346,    40,    41,    -1,   350,    -1,    -1,
      -1,    -1,    48,    -1,    -1,   358,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    63,    -1,    65,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,   389,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,   401,   402,
      -1,     3,    98,    -1,     6,     7,    -1,    -1,    -1,   412,
      12,    -1,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,
      22,    -1,    24,    25,    26,    27,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      -1,    63,    -1,    65,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,    22,    -1,    24,    25,    26,    27,
      92,    93,    30,    -1,    96,    -1,    98,    -1,    36,    37,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,     3,    -1,
      48,     6,     7,    -1,    52,    -1,    -1,    12,    -1,    14,
      -1,    59,    60,    61,    -1,    63,    -1,    65,    -1,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    92,    93,    -1,    52,    -1,    -1,
      98,    -1,    -1,    -1,    59,    60,    61,    -1,    63,    -1,
      65,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    -1,    -1,     3,    -1,    -1,
       6,    -1,    24,    25,    26,    -1,    91,    92,    93,    -1,
      -1,    -1,    -1,    98,    36,    37,    -1,    -1,    40,    41,
      26,    -1,     3,    -1,    -1,     6,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      -1,    63,    48,    65,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    -1,    63,    -1,    65,
      -1,    -1,     3,    -1,    -1,     6,    -1,    48,    -1,    91,
      92,    93,    -1,    -1,    -1,    -1,    98,    -1,    59,    60,
      61,    -1,    63,    -1,    65,    26,    92,    93,    69,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    92,    93,    -1,    -1,    -1,    57,    98,    59,    60,
      61,    26,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    59,    60,    61,    98,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    -1,    -1,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    12,    14,    15,    19,    22,    24,
      25,    26,    27,    30,    36,    37,    40,    41,    48,    52,
      59,    60,    61,    63,    65,    91,    92,    93,    98,   100,
     101,   102,   103,   104,   105,   108,   125,   126,   129,   130,
     131,   133,   139,   140,   141,   142,   143,   144,   146,   150,
     152,   154,   155,   158,   159,   160,   171,   172,   174,   176,
     177,   180,   182,   184,   185,   188,   191,   194,   195,   196,
     205,   206,   220,   136,   171,   145,   220,   180,   218,     6,
     171,   218,     6,   176,   162,   171,   171,   147,   171,   180,
     171,   171,   198,   210,   171,   199,   207,   171,   200,   222,
     223,   226,   171,   244,     0,    97,    91,   103,   126,   154,
     220,   128,    72,    91,   221,    30,   170,   173,   175,   178,
     181,   183,   185,   186,   186,   189,   192,   194,   204,     3,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    91,   106,   107,   132,   134,   219,    39,    61,
     109,    68,   151,   161,    28,   163,    68,    67,   148,    39,
     153,    67,   135,   138,    15,   211,   212,   241,    62,    15,
     208,   209,   237,    64,    68,   227,   228,   241,    66,   245,
      98,    70,   127,   220,    67,   137,   172,    31,    23,    11,
      26,    42,    43,    44,    45,    46,    47,    86,   179,    50,
      49,    52,    53,   187,    59,    60,   190,    54,    55,    56,
      58,   193,    57,    61,    63,    69,   197,   213,    97,   106,
     220,    67,   138,    67,   137,   220,     6,    61,   110,   111,
     112,   113,   117,   120,    68,    91,   126,   164,    67,    67,
      68,   180,   164,   171,   171,   171,    67,   137,   218,    67,
     137,   218,    67,   137,   171,    67,   137,    67,   129,    91,
     171,    34,   174,   176,    26,    39,   180,   182,   184,   188,
     191,   194,   194,   201,   229,   230,    69,   171,   202,   214,
     216,     6,   171,   180,    68,   120,   121,    62,    57,    58,
     115,   120,    72,   114,   164,    94,    34,   157,     6,   162,
     164,   156,    67,   149,   149,   171,    39,   171,    39,   171,
     224,   225,   241,   171,   171,   171,    62,    57,    58,   171,
     231,   234,    69,    68,    64,   215,   164,    67,   123,   124,
      62,     6,     6,   114,   171,   119,   125,   165,    68,    29,
     157,   171,   172,   166,   168,   172,    67,   137,   171,   171,
      72,   235,   241,    67,   137,    69,   171,   202,    67,   157,
     120,    67,   122,   123,    67,   116,    67,    67,   118,    96,
     125,   164,   171,    30,   240,   241,   242,   243,    30,   236,
     237,   238,   239,    67,   167,   169,   171,   232,   171,    68,
     203,   217,   216,    57,   120,    68,   168,   168,   168,    67,
     137,    68,    67,   233,   202,     6,   114,   164,   243,   239,
     168,   171,    57,   234,   171
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   100,   101,   101,   101,   102,   103,
     103,   104,   104,   104,   105,   106,   106,   107,   107,   108,
     109,   110,   110,   111,   111,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   118,   118,   119,   119,   120,
     120,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   127,   127,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   130,   130,   131,   131,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   133,   133,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   139,
     140,   141,   141,   141,   141,   142,   143,   144,   145,   145,
     146,   147,   147,   148,   148,   149,   149,   150,   151,   151,
     152,   153,   153,   154,   154,   154,   154,   154,   155,   156,
     156,   157,   157,   158,   159,   160,   161,   161,   162,   163,
     163,   164,   164,   165,   165,   166,   167,   167,   168,   169,
     169,   170,   170,   171,   172,   173,   173,   174,   175,   175,
     176,   176,   177,   178,   178,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   180,   181,   181,   182,
     183,   183,   184,   185,   186,   186,   187,   187,   188,   189,
     189,   190,   190,   191,   192,   192,   193,   193,   193,   193,
     194,   194,   195,   195,   195,   196,   197,   197,   198,   198,
     199,   199,   200,   200,   201,   201,   202,   202,   203,   203,
     204,   204,   205,   205,   205,   205,   205,   205,   205,   205,
     206,   206,   207,   208,   208,   209,   209,   210,   211,   211,
     212,   212,   213,   213,   213,   214,   215,   215,   216,   216,
     216,   217,   218,   219,   219,   220,   221,   221,   222,   222,
     223,   224,   224,   225,   225,   226,   227,   227,   228,   228,
     229,   230,   230,   231,   231,   231,   232,   232,   233,   233,
     234,   234,   235,   235,   236,   236,   237,   238,   239,   239,
     240,   240,   241,   242,   243,   243,   244,   245,   245
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     2,     1,
       0,     2,     1,     1,     3,     1,     0,     2,     1,     5,
       3,     0,     1,     1,     1,     2,     4,     0,     2,     0,
       3,     2,     3,     0,     4,     1,     0,     4,     0,     1,
       3,     3,     1,     0,     1,     0,     2,     2,     1,     1,
       4,     1,     0,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     0,     3,     2,     3,     0,     0,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     0,
       2,     2,     0,     3,     0,     2,     0,     3,     3,     0,
       3,     3,     0,     1,     1,     1,     1,     1,     6,     5,
       0,     3,     0,     5,     7,     5,     3,     0,     2,     2,
       0,     1,     4,     2,     1,     2,     3,     2,     1,     2,
       0,     4,     0,     2,     2,     3,     0,     2,     3,     0,
       2,     1,     2,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     2,     3,     0,     2,
       3,     0,     2,     2,     3,     0,     1,     1,     2,     3,
       0,     1,     1,     2,     3,     0,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     3,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       2,     0,     3,     3,     3,     3,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     3,     0,     2,     1,     2,
       3,     0,     3,     3,     2,     3,     3,     0,     3,     1,
       4,     2,     3,     3,     0,     3,     3,     0,     1,     1,
       4,     1,     2,     5,     0,     2,     1,     2,     3,     0,
       2,     3,     0,     2,     4,     2,     3,     0,     3,     0,
       2,     3,     1,     0,     1,     1,     5,     3,     1,     0,
       1,     1,     5,     3,     1,     0,     2,     3,     0
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
      
#line 1750 "pypar.cpp" /* yacc.c:1646  */
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
#line 419 "pypar.y" /* yacc.c:1906  */


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
