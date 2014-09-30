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
#define YYFINAL  97
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   686

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  271
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  394

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
       0,    37,    37,    42,    42,    42,    66,    70,    73,    74,
      77,    78,    81,    84,    85,    87,    88,    91,    92,    94,
      95,    98,   100,   101,   104,   105,   108,   109,   112,   114,
     115,   118,   119,   122,   123,   126,   128,   129,   131,   132,
     135,   136,   137,   138,   139,   140,   141,   143,   146,   147,
     150,   151,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   168,   169,   169,   170,   171,   173,
     174,   177,   177,   178,   179,   182,   184,   187,   188,   189,
     190,   192,   194,   196,   198,   199,   201,   204,   205,   207,
     208,   210,   211,   213,   215,   215,   217,   219,   219,   223,
     224,   225,   226,   227,   229,   231,   231,   233,   233,   235,
     237,   239,   241,   241,   243,   245,   245,   247,   247,   249,
     249,   251,   255,   258,   258,   260,   260,   262,   264,   266,
     266,   268,   270,   270,   272,   272,   274,   276,   276,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     280,   282,   282,   284,   286,   286,   288,   290,   290,   292,
     294,   295,   295,   299,   301,   301,   303,   303,   305,   307,
     307,   309,   309,   309,   309,   311,   311,   313,   313,   313,
     315,   317,   317,   319,   319,   321,   321,   323,   323,   325,
     325,   327,   327,   329,   329,   331,   331,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   343,   343,   345,   347,
     347,   349,   349,   351,   353,   353,   355,   355,   357,   357,
     357,   359,   361,   361,   363,   363,   363,   365,   367,   369,
     369,   371,   373,   373,   375,   375,   377,   379,   379,   381,
     381,   383,   385,   385,   387,   387,   389,   391,   391,   393,
     393,   393,   395,   395,   397,   397,   399,   399,   401,   401,
     403,   403,   405,   407,   409,   409,   411,   411,   413,   415,
     417,   417
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
  "varargslist_b_aux", "fpdef", "fplist", "fpl_aux", "fplist_aux", "stmt",
  "simple_stmt", "ss_aux", "simple_stmt_aux", "small_stmt", "expr_stmt",
  "expr_stmt_aux_b", "expr_stmt_aux_b_a", "augassign", "print_stmt", "s29",
  "s30", "s31", "s32", "comaS", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "return_stmt_aux",
  "raise_stmt", "s3", "s4", "s5", "global_stmt", "global_stmt_aux",
  "exec_stmt", "s7", "compound_stmt", "if_stmt", "if_stmt_aux", "s8",
  "while_stmt", "for_stmt", "with_stmt", "with_stmt_aux", "with_item",
  "s10", "suite", "suite_aux", "testlist_safe", "old_test", "s13", "s15",
  "test", "or_test", "or_test_aux", "and_test", "and_test_aux", "not_test",
  "comparison", "comparison_aux", "comp_op", "expr", "expr_aux",
  "xor_expr", "xor_expr_aux", "and_expr", "and_expr_aux", "shift_expr",
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
  "comp_iter", "comp_for", "comp_if", "s28", YY_NULLPTR
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

#define YYPACT_NINF -270

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-270)))

#define YYTABLE_NINF -193

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     307,  -270,  -270,   479,  -270,   567,  -270,   593,  -270,    21,
     567,   593,    33,   567,   567,   567,  -270,  -270,   567,   593,
    -270,  -270,  -270,   567,   567,   567,  -270,  -270,    47,   -38,
    -270,   307,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,    29,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,   593,  -270,  -270,    59,   589,   567,  -270,  -270,
    -270,  -270,  -270,  -270,    34,    18,    17,  -270,  -270,  -270,
    -270,    60,    36,  -270,    40,    58,   101,    55,  -270,   104,
      56,  -270,    26,    64,  -270,  -270,  -270,  -270,  -270,   -38,
      51,    65,   567,  -270,    93,   110,    66,    84,    87,    86,
      -2,    27,    73,  -270,    11,  -270,   567,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,   567,    72,    81,    90,   567,    22,    83,   368,    96,
      32,   593,  -270,   368,   567,  -270,   567,  -270,   593,  -270,
      97,  -270,  -270,   593,  -270,   102,  -270,  -270,   567,  -270,
     103,  -270,  -270,   429,    49,   567,  -270,   134,   567,   567,
     145,   133,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
     593,   593,   593,   593,   593,   593,  -270,  -270,   593,  -270,
    -270,  -270,  -270,   593,   593,   111,   529,   168,  -270,  -270,
    -270,  -270,   567,  -270,   567,  -270,   593,  -270,   107,  -270,
      20,   116,  -270,  -270,    57,  -270,   109,   368,    85,  -270,
     149,   178,   567,   368,  -270,  -270,   119,   119,   148,   567,
    -270,   155,   567,  -270,   101,   567,  -270,  -270,  -270,  -270,
     567,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,   135,  -270,   182,   126,   128,   130,
     138,  -270,  -270,   136,  -270,  -270,   368,  -270,   142,  -270,
     199,   200,  -270,   109,   567,  -270,  -270,   307,   139,  -270,
    -270,  -270,  -270,    67,   567,  -270,  -270,   567,  -270,   567,
    -270,  -270,   143,  -270,  -270,  -270,  -270,   567,   567,     3,
    -270,   144,   140,   567,  -270,   146,  -270,  -270,   149,   147,
    -270,  -270,   150,   153,  -270,   154,  -270,    30,   368,   567,
    -270,  -270,    28,    31,   157,  -270,   567,  -270,  -270,  -270,
     567,  -270,  -270,   160,  -270,  -270,  -270,   159,   465,  -270,
    -270,    20,  -270,   158,  -270,  -270,    20,  -270,  -270,  -270,
    -270,   163,   567,  -270,  -270,  -270,  -270,   567,  -270,  -270,
    -270,  -270,   567,   161,   166,   169,  -270,   567,  -270,  -270,
    -270,  -270,   206,   109,   368,    28,    31,  -270,   567,  -270,
     567,   543,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,   567,  -270,  -270
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,   207,   200,    68,   205,    85,    82,     0,   204,     0,
       0,     0,     0,     0,     0,     0,    76,    81,    88,     0,
     179,   178,   177,   184,   186,   188,   202,   201,     0,     2,
     103,     5,    33,    39,    40,    41,    42,    43,    44,    77,
      78,    79,    80,    45,    46,    34,    99,   100,   101,   102,
     233,   126,   130,   133,   135,   138,   152,   155,   158,   162,
     165,   170,     0,   176,   196,   203,    51,     0,    64,    65,
      72,    83,    84,   230,     0,     0,     0,    75,    95,   134,
     113,   116,     0,    86,    90,    98,   217,     0,   183,   212,
       0,   185,   245,     0,   187,   234,   235,     1,     3,     4,
      37,    74,     0,   127,   128,   131,   136,   150,   153,   156,
     159,   163,   168,   175,   182,   206,     0,    52,    53,    54,
      55,    63,    56,    57,    58,    59,    61,    60,    62,    47,
      49,     0,    70,    74,    74,     0,    14,     0,     0,    93,
       0,     0,   114,     0,     0,    87,     0,    96,     0,   213,
      74,   214,   197,     0,   208,    74,   209,   198,     0,   241,
      74,   242,   199,    36,     0,    73,   231,     0,     0,     0,
     148,     0,   146,   145,   141,   142,   143,   140,   139,   144,
       0,     0,     0,     0,     0,     0,   167,   166,     0,   173,
     174,   172,   171,     0,     0,   248,   192,     0,   180,   195,
      50,    48,     0,    66,    73,    67,    73,   228,     0,    26,
       0,     0,     8,    10,     0,    11,    16,     0,     0,   117,
     108,     0,     0,     0,   115,   106,    92,    92,     0,    73,
     215,     0,    73,   210,   240,    73,   243,    38,    35,   232,
       0,   129,   132,   149,   147,   137,   151,   154,   157,   161,
     160,   164,   169,   181,     0,   189,     0,     0,   225,     0,
       0,   223,   220,    74,    71,   229,     0,    32,     0,     7,
       0,     0,    12,    16,     0,    25,     6,     0,     0,   109,
      94,   112,   111,   108,     0,    89,    97,     0,   216,     0,
     211,   236,    74,   237,   244,   125,   218,     0,     0,   259,
     246,    74,     0,   192,   219,    74,    73,    69,   108,    30,
      27,    18,    20,     0,    15,    23,   120,     0,     0,     0,
     104,    91,   271,   265,     0,   122,    73,   238,   251,   253,
       0,   256,   258,   247,   249,   224,   191,   194,    73,   221,
     110,    29,    28,     0,    17,    13,    22,    21,   118,   119,
     107,     0,     0,   270,   266,   267,   268,     0,   264,   260,
     261,   262,     0,    74,     0,   255,   257,   192,   226,   193,
     222,    31,     0,    16,     0,   271,   265,   124,    73,   121,
       0,     0,   250,   227,    19,    24,   105,   269,   263,   123,
     239,     0,   252,   254
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,   185,  -270,  -270,  -270,  -270,  -270,  -270,  -267,
    -270,  -270,  -270,  -270,  -270,  -197,  -270,  -270,  -270,  -248,
       1,  -270,  -270,    62,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -125,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,     8,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -243,  -270,  -270,  -270,  -270,    24,  -270,  -141,
    -270,  -270,  -196,  -270,  -270,    -3,   -98,  -270,    76,  -270,
     -10,  -270,  -270,  -270,    12,  -270,    68,  -270,    69,  -270,
      74,  -270,   -82,  -270,  -270,    70,  -270,  -270,   -48,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -269,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
     -90,  -270,    -6,  -270,    19,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -131,  -270,
    -270,   167,  -270,  -124,  -270,   -76,  -270,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,    29,    30,   137,   211,   212,   213,   214,   275,
     272,   344,   215,   347,   315,   216,   268,   342,   309,    31,
     219,   164,   100,    33,    34,   129,   130,   131,    35,    68,
      69,   203,   133,   166,    36,    37,    38,    39,    40,    41,
      71,    42,    83,   145,   285,    43,   139,    44,   147,    45,
      46,   283,   279,    47,    48,    49,   140,    80,   142,   220,
     317,   323,   324,   363,   103,    50,    51,   104,    52,   105,
      53,    54,   106,   180,    55,   107,    56,   108,    57,   109,
      58,   110,    59,   111,   188,    60,   112,   193,    61,    62,
      63,   198,    87,    90,    93,   254,   259,   368,   114,    64,
      65,    91,   154,   155,    88,   149,   150,   199,   260,   305,
     261,   369,    74,   134,    66,   101,    94,    95,   291,   292,
      96,   159,   160,   255,   256,   300,   365,   382,   301,   331,
     358,   359,   360,   361,   353,   354,   355,   356
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    32,   225,    79,   167,    77,   313,    76,   205,   207,
     151,    81,    82,   267,   113,    84,   161,   273,   148,    73,
      86,    89,    92,    73,    72,   230,   209,    75,   209,   316,
     233,    85,    32,     1,   337,   236,     2,     3,     4,    78,
     320,   148,     5,   148,     6,     7,   153,    97,     8,     9,
     184,   185,    10,    98,    11,    12,    13,    14,   352,   102,
      15,   357,   115,   209,   132,   340,    16,    17,   194,   349,
      18,    19,   195,   135,   196,   330,   276,   170,    20,   136,
     197,   210,   282,   210,    -9,   138,   186,   187,   141,    21,
      22,    23,   171,    24,   158,    25,   319,   146,   383,   222,
     223,   278,   249,   250,   143,   172,   385,   144,   173,   174,
     175,   176,   177,   178,   270,   271,   148,   152,   210,   153,
     157,   163,    26,    27,   168,   308,   348,   189,   190,   191,
     162,   192,   165,   169,   181,   200,   182,   183,   307,   202,
     238,   226,   228,   227,   371,   252,   253,   231,   204,   373,
     201,   217,   179,   224,   208,   234,   375,   206,   293,   242,
      73,   376,   239,   221,   229,    73,   377,   327,   240,   232,
     235,   243,   244,  -190,   262,   266,   334,   350,   269,   277,
     339,   274,   389,   278,   280,     1,   284,   287,     2,   322,
       4,   325,   245,   258,   289,   302,  -191,   296,   303,   263,
       8,   264,   304,   306,   310,   311,   312,   318,    13,   335,
     326,   333,   384,   338,   341,   372,    99,   343,   265,    81,
     345,   346,   -73,   332,   362,   237,   288,   367,   378,   290,
      20,   374,   294,   386,   380,   286,   381,   295,   379,   297,
     298,    21,    22,    23,   241,    24,   281,    25,   370,   246,
     392,   247,   388,   299,   325,   387,   156,   248,   251,   325,
       0,     0,     0,     0,   325,     0,     0,     0,     0,     0,
       0,   314,     0,     0,    26,    27,     0,     0,    32,     0,
     325,   321,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   328,   329,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     2,     3,     4,   351,     0,    32,     5,
       0,     6,     7,   364,     0,     8,     9,   366,     0,    10,
       0,    11,    12,    13,    14,   258,     0,    15,     0,     0,
       0,     0,     0,    16,    17,     0,     0,    18,    19,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,   336,     0,    21,    22,    23,     0,
      24,     1,    25,     0,     2,     3,     4,   390,   299,     0,
       5,     0,     6,     0,     0,     0,     8,     0,   393,     0,
       0,     0,    11,    12,    13,     0,     0,     0,     0,    26,
      27,     0,     0,     0,    16,    17,     0,     0,    18,    19,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,    23,
       0,    24,     1,    25,     0,     2,     3,     4,     0,     0,
       0,     5,     0,     6,     0,     0,     0,     8,     0,     0,
       0,     0,     0,    11,    12,    13,     0,     0,     0,   218,
      26,    27,     0,     0,     0,    16,    17,     0,     1,    18,
      19,     2,     0,     4,     0,     0,     0,    20,     0,     0,
       0,     0,     1,     8,     0,     2,     0,     4,    21,    22,
      23,    13,    24,     0,    25,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,    26,    27,     0,    21,    22,    23,    20,    24,     0,
      25,    67,     1,  -192,   257,     2,     0,     4,    21,    22,
      23,     0,    24,     0,    25,     0,     1,     8,     0,     2,
       0,     4,     0,     0,     0,    13,     0,    26,    27,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,    13,
       1,    26,    27,     2,     0,     4,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,    21,    22,
      23,    20,    24,    13,    25,     0,     1,     0,   257,     2,
     391,     4,    21,    22,    23,     0,    24,     0,    25,     0,
       0,     8,     0,     0,     0,    20,     0,     0,     0,     0,
       0,    26,    27,     0,     0,     0,    21,    22,    23,     0,
      24,     0,    25,     0,     0,    26,    27,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,    23,     0,    24,     0,    25,    26,
      27,   116,     0,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    27
};

static const yytype_int16 yycheck[] =
{
       3,     0,   143,    13,   102,    11,   273,    10,   133,   134,
      86,    14,    15,   210,    62,    18,    92,   214,    15,     7,
      23,    24,    25,    11,     5,   150,     6,     6,     6,   277,
     155,    19,    31,     3,   303,   160,     6,     7,     8,     6,
     283,    15,    12,    15,    14,    15,    15,     0,    18,    19,
      52,    53,    22,    91,    24,    25,    26,    27,    30,    30,
      30,    30,     3,     6,    67,   308,    36,    37,    57,   317,
      40,    41,    61,    39,    63,    72,   217,    11,    48,    61,
      69,    61,   223,    61,    62,    68,    59,    60,    28,    59,
      60,    61,    26,    63,    68,    65,    29,    39,   367,    67,
      68,    34,   184,   185,    68,    39,   373,    67,    42,    43,
      44,    45,    46,    47,    57,    58,    15,    62,    61,    15,
      64,    70,    92,    93,    31,   266,    96,    54,    55,    56,
      66,    58,    67,    23,    50,   116,    49,    51,   263,    67,
      91,   144,   148,   146,   341,   193,   194,   153,    67,   346,
     131,    68,    86,   141,   135,   158,   352,    67,   234,   169,
     148,   357,   165,    67,    67,   153,   362,   292,    34,    67,
      67,    26,    39,    62,     6,    68,   301,   318,    62,    94,
     305,    72,   378,    34,     6,     3,    67,    39,     6,   287,
       8,   289,   180,   196,    39,    69,    68,    62,    68,   202,
      18,   204,    64,    67,    62,     6,     6,    68,    26,    69,
      67,    67,     6,    67,    67,    57,    31,    67,   206,   222,
      67,    67,    62,   299,    67,   163,   229,    68,    67,   232,
      48,    68,   235,   374,    68,   227,    67,   240,   363,    57,
      58,    59,    60,    61,   168,    63,   222,    65,   338,   181,
     381,   182,   376,   256,   352,   375,    89,   183,   188,   357,
      -1,    -1,    -1,    -1,   362,    -1,    -1,    -1,    -1,    -1,
      -1,   274,    -1,    -1,    92,    93,    -1,    -1,   277,    -1,
     378,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   297,   298,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,     8,   319,    -1,   317,    12,
      -1,    14,    15,   326,    -1,    18,    19,   330,    -1,    22,
      -1,    24,    25,    26,    27,   338,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    37,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   367,    -1,    59,    60,    61,    -1,
      63,     3,    65,    -1,     6,     7,     8,   380,   381,    -1,
      12,    -1,    14,    -1,    -1,    -1,    18,    -1,   391,    -1,
      -1,    -1,    24,    25,    26,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    -1,    36,    37,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      -1,    63,     3,    65,    -1,     6,     7,     8,    -1,    -1,
      -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    91,
      92,    93,    -1,    -1,    -1,    36,    37,    -1,     3,    40,
      41,     6,    -1,     8,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,     3,    18,    -1,     6,    -1,     8,    59,    60,
      61,    26,    63,    -1,    65,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    59,    60,    61,    48,    63,    -1,
      65,    52,     3,    68,    69,     6,    -1,     8,    59,    60,
      61,    -1,    63,    -1,    65,    -1,     3,    18,    -1,     6,
      -1,     8,    -1,    -1,    -1,    26,    -1,    92,    93,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
       3,    92,    93,     6,    -1,     8,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    59,    60,
      61,    48,    63,    26,    65,    -1,     3,    -1,    69,     6,
      57,     8,    59,    60,    61,    -1,    63,    -1,    65,    -1,
      -1,    18,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    -1,    59,    60,    61,    -1,
      63,    -1,    65,    -1,    -1,    92,    93,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    -1,    63,    -1,    65,    92,
      93,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,    12,    14,    15,    18,    19,
      22,    24,    25,    26,    27,    30,    36,    37,    40,    41,
      48,    59,    60,    61,    63,    65,    92,    93,    99,   100,
     101,   117,   118,   121,   122,   126,   132,   133,   134,   135,
     136,   137,   139,   143,   145,   147,   148,   151,   152,   153,
     163,   164,   166,   168,   169,   172,   174,   176,   178,   180,
     183,   186,   187,   188,   197,   198,   212,    52,   127,   128,
     163,   138,   212,   172,   210,     6,   163,   210,     6,   168,
     155,   163,   163,   140,   163,   172,   163,   190,   202,   163,
     191,   199,   163,   192,   214,   215,   218,     0,    91,   100,
     120,   213,    30,   162,   165,   167,   170,   173,   175,   177,
     179,   181,   184,   186,   196,     3,    72,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   123,
     124,   125,   163,   130,   211,    39,    61,   102,    68,   144,
     154,    28,   156,    68,    67,   141,    39,   146,    15,   203,
     204,   233,    62,    15,   200,   201,   229,    64,    68,   219,
     220,   233,    66,    70,   119,    67,   131,   164,    31,    23,
      11,    26,    39,    42,    43,    44,    45,    46,    47,    86,
     171,    50,    49,    51,    52,    53,    59,    60,   182,    54,
      55,    56,    58,   185,    57,    61,    63,    69,   189,   205,
     212,   212,    67,   129,    67,   131,    67,   131,   212,     6,
      61,   103,   104,   105,   106,   110,   113,    68,    91,   118,
     157,    67,    67,    68,   172,   157,   163,   163,   210,    67,
     131,   210,    67,   131,   163,    67,   131,   121,    91,   163,
      34,   166,   168,    26,    39,   172,   174,   176,   178,   180,
     180,   183,   186,   186,   193,   221,   222,    69,   163,   194,
     206,   208,     6,   163,   163,   172,    68,   113,   114,    62,
      57,    58,   108,   113,    72,   107,   157,    94,    34,   150,
       6,   155,   157,   149,    67,   142,   142,    39,   163,    39,
     163,   216,   217,   233,   163,   163,    62,    57,    58,   163,
     223,   226,    69,    68,    64,   207,    67,   131,   157,   116,
      62,     6,     6,   107,   163,   112,   117,   158,    68,    29,
     150,   163,   164,   159,   160,   164,    67,   131,   163,   163,
      72,   227,   233,    67,   131,    69,   163,   194,    67,   131,
     150,    67,   115,    67,   109,    67,    67,   111,    96,   117,
     157,   163,    30,   232,   233,   234,   235,    30,   228,   229,
     230,   231,    67,   161,   163,   224,   163,    68,   195,   209,
     208,   113,    57,   113,    68,   160,   160,   160,    67,   131,
      68,    67,   225,   194,     6,   107,   157,   235,   231,   160,
     163,    57,   226,   163
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,   100,   100,   100,   101,   102,   103,   103,
     104,   104,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   111,   111,   112,   112,   113,   113,   114,   115,
     115,   116,   116,   117,   117,   118,   119,   119,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   122,   123,   123,
     124,   124,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   132,   133,   134,   134,   134,
     134,   135,   136,   137,   138,   138,   139,   140,   140,   141,
     141,   142,   142,   143,   144,   144,   145,   146,   146,   147,
     147,   147,   147,   147,   148,   149,   149,   150,   150,   151,
     152,   153,   154,   154,   155,   156,   156,   157,   157,   158,
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     5,     3,     1,     0,
       1,     1,     2,     4,     0,     2,     0,     3,     2,     3,
       0,     4,     1,     0,     4,     0,     1,     3,     3,     1,
       0,     3,     0,     1,     1,     4,     1,     0,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     3,     0,     3,
       0,     3,     0,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     0,     2,     2,     0,     3,
       0,     2,     0,     3,     3,     0,     3,     3,     0,     1,
       1,     1,     1,     1,     6,     5,     0,     3,     0,     5,
       7,     5,     3,     0,     2,     2,     0,     1,     4,     2,
       1,     3,     1,     3,     2,     4,     0,     2,     2,     3,
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
#line 1725 "pypar.cpp" /* yacc.c:1646  */
    break;


#line 1729 "pypar.cpp" /* yacc.c:1646  */
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
#line 420 "pypar.y" /* yacc.c:1906  */


int main(int argc, char const *argv[]) {
    ++argv;
    --argc;

    if (argc > 0) {
        yyin = fopen(argv[0], "r");
    }
    else
        yyin = stdin;
    do {
        yydebug = 1;
	inicializar();
        yyparse();
    } while (!feof(yyin));
}

