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
#line 8 "pypar.y" /* yacc.c:339  */


#include <stdio.h>
#include <string>
#define YYDEBUG 1
using namespace std;
#include "visitor.cpp"
#define YYDEBUG 1
MASTBuilder *ast;

extern FILE *yyin;
extern char *yytext;
extern void inicializar();

int yylex(); 
int yyerror(const char *s) { printf ("Error: %s\n", s); return 1;}


#line 85 "pypar.cpp" /* yacc.c:339  */

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
/* "%code requires" blocks.  */
#line 26 "pypar.y" /* yacc.c:355  */

#include "composite.cpp"

#line 119 "pypar.cpp" /* yacc.c:355  */

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
#line 29 "pypar.y" /* yacc.c:355  */

  int numi;
  float numf;
  const char* cad;
  char car;
Node* nodeT;

#line 237 "pypar.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PYPAR_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 252 "pypar.cpp" /* yacc.c:358  */

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
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

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
       0,    50,    50,    58,    58,    59,    64,    65,    68,    71,
      73,    74,    76,    77,    80,    81,    82,    83,    84,    86,
      90,    91,    94,    95,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   113,   120,   120,   121,
     122,   124,   125,   128,   128,   129,   130,   133,   136,   140,
     141,   142,   145,   148,   151,   153,   154,   157,   158,   159,
     162,   170,   177,   179,   180,   183,   186,   196,   196,   200,
     200,   202,   208,   210,   213,   216,   216,   218,   221,   224,
     226,   227,   229,   241,   251,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   268,   270,   270,   272,
     276,   279,   281,   285,   288,   290,   302,   305,   307,   309,
     321,   330,   332,   333,   337,   349,   360,   362,   363,   364,
     365,   370,   374,   378,   379,   380,   381,   382,   383,   388,
     389,   393,   395,   395,   397,   399,   399
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
  "stmt", "simple_stmt", "r1", "ss_aux", "simple_stmt_aux", "small_stmt",
  "expr_stmt", "expr_stmt_aux_b", "expr_stmt_aux_b_a", "augassign",
  "print_stmt", "s29", "s30", "s31", "s32", "comaS", "del_stmt",
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "return_stmt_aux", "compound_stmt", "if_stmt", "if_stmt_aux", "s8",
  "while_stmt", "for_stmt", "suite", "suite_aux", "s15", "test", "or_test",
  "or_test_aux", "and_test", "and_test_aux", "not_test", "comparison",
  "comparison_aux", "comp_op", "expr", "expr_aux", "xor_expr",
  "xor_expr_aux", "and_expr", "and_expr_aux", "shift_expr",
  "shift_expr_aux", "arith_expr", "arith_expr_aux", "ae_aux", "term",
  "term_aux", "t_aux", "factor", "atom", "string_aux", "exprlist",
  "exprlist_aux", "testlist", "testlist_aux", YY_NULLPTR
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

#define YYPACT_NINF -161

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-161)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      55,  -161,  -161,   137,  -161,   176,  -161,   180,  -161,   176,
     180,   176,   176,  -161,  -161,  -161,  -161,  -161,  -161,    13,
     -73,    55,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,   -10,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,   180,  -161,  -161,  -161,
      22,   182,   176,  -161,  -161,  -161,  -161,  -161,  -161,   -12,
     -39,  -161,  -161,   -27,  -161,  -161,   -73,   -46,   -21,   -17,
     176,  -161,    23,    32,   206,     6,     8,     9,   -20,  -161,
     -16,   -19,  -161,   176,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,   176,    -3,
      -2,     5,   176,   115,   115,  -161,   154,  -161,   176,  -161,
      25,   176,   176,    40,    29,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,   180,   180,   180,   180,   180,   180,   180,
    -161,  -161,  -161,  -161,   180,  -161,  -161,   176,  -161,   176,
    -161,   180,  -161,    12,   -11,  -161,    52,  -161,  -161,  -161,
     176,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,     7,  -161,  -161,   115,    55,    19,  -161,
     -22,  -161,  -161,  -161,    52,  -161,    16,   115,   176,  -161,
    -161,  -161,  -161,  -161,    20,   115,  -161
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,   130,   123,    40,   128,    56,    53,     0,   127,     0,
       0,     0,     0,    48,    52,   113,   112,   125,   124,     0,
       2,     5,     6,    13,    14,    15,    16,    17,    18,    49,
      50,    51,     7,    57,    58,    59,   136,    72,    76,    79,
      81,    84,    98,   101,   104,   108,     0,   111,   116,   122,
     126,    23,     0,    36,    37,    44,    54,    55,   133,     0,
       0,    47,    80,     0,     1,     3,     4,     0,    11,    46,
       0,    73,    74,    77,    82,    96,    99,   102,   105,   121,
     109,   114,   129,     0,    24,    25,    26,    27,    35,    28,
      29,    30,    31,    33,    32,    34,    19,    21,     0,    42,
      46,    46,     0,     0,     0,     8,    10,     9,    45,   134,
       0,     0,     0,    94,     0,    92,    91,    87,    88,    89,
      86,    85,    90,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   118,   117,     0,    22,    20,     0,    38,    45,
      39,    45,   131,     0,     0,    67,    64,    62,    12,   135,
       0,    75,    78,    95,    93,    83,    97,   100,   103,   107,
     106,   110,   115,    46,    43,   132,     0,     0,     0,    65,
      64,    71,    45,    41,    64,    70,     0,     0,     0,    60,
      66,    68,    69,    63,     0,     0,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,    68,  -150,     0,  -161,  -161,  -161,    -9,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,   -85,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -160,
    -161,  -161,   -95,  -161,  -161,    -1,    24,  -161,   -15,  -161,
      -8,  -161,  -161,  -161,    -6,  -161,   -29,  -161,   -25,  -161,
     -28,  -161,   -80,  -161,    21,   -24,  -161,  -161,   -41,  -161,
    -161,    92,  -161,     1,  -161
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,   145,    67,   107,    68,    23,    24,
      96,    97,    98,    25,    53,    54,   138,   100,   109,    26,
      27,    28,    29,    30,    31,    56,    32,    33,   170,   169,
      34,    35,   146,   176,    71,    36,    37,    72,    38,    73,
      39,    40,    74,   123,    41,    75,    42,    76,    43,    77,
      44,    78,    45,    80,    46,    47,    81,   134,    48,    49,
      50,    59,   101,    51,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      22,    58,    55,    62,    58,    79,    57,   178,    60,   147,
     179,    63,   168,    64,   180,   140,   142,   175,    65,     1,
      70,    22,     2,     3,     4,    82,   182,   102,     5,   103,
       6,     7,   127,   128,     8,   130,   131,   132,     9,   133,
      10,   104,    11,    15,    16,   105,    12,   159,   160,   106,
     108,    99,    13,    14,   111,   112,   124,   125,     1,   150,
     126,     2,     3,     4,   137,   139,   153,     5,   154,     6,
       7,   174,   141,     8,   172,    15,    16,     9,   173,    10,
     166,    11,   183,   167,   135,    12,   168,   177,   185,    66,
     186,    13,    14,   162,   110,   156,   151,   148,   158,   136,
     157,   129,    61,   143,   152,   161,     0,   149,    17,    18,
       0,     0,   181,     0,    15,    16,     0,   155,     1,     0,
       0,     2,     3,     4,     0,     0,     0,     5,     0,     6,
       0,     0,     0,     8,     0,   165,   163,     0,   164,    10,
       1,    11,     0,     2,     0,     4,     0,    17,    18,   171,
       0,    13,    14,     0,     0,     8,     0,     1,     0,     0,
       2,     3,     4,    11,     0,     0,     5,    22,     6,     0,
       0,     0,     8,     0,    15,    16,    22,   184,    10,     1,
      11,     0,     2,     1,     4,     0,     2,     0,     4,    52,
      13,    14,     0,     0,     8,     0,    15,    16,     8,     0,
       0,     0,    11,     0,     0,     0,   144,    17,    18,     0,
       0,     0,     0,    15,    16,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
      18,     0,   114,     0,     0,    15,    16,     0,     0,    15,
      16,     0,     0,     0,     0,   115,    17,    18,   116,   117,
     118,   119,   120,   121,    83,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    17,    18,
       0,     0,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122
};

static const yytype_int16 yycheck[] =
{
       0,     7,     3,    11,    10,    46,     5,    29,     9,   104,
     170,    12,    34,     0,   174,   100,   101,   167,    91,     3,
      30,    21,     6,     7,     8,     3,   176,    39,    12,    68,
      14,    15,    52,    53,    18,    54,    55,    56,    22,    58,
      24,    68,    26,    59,    60,    91,    30,   127,   128,    70,
      67,    52,    36,    37,    31,    23,    50,    49,     3,    34,
      51,     6,     7,     8,    67,    67,    26,    12,    39,    14,
      15,   166,    67,    18,    67,    59,    60,    22,   163,    24,
      68,    26,   177,    94,    83,    30,    34,    68,    68,    21,
     185,    36,    37,   134,    70,   124,   111,   106,   126,    98,
     125,    80,    10,   102,   112,   129,    -1,   108,    92,    93,
      -1,    -1,    96,    -1,    59,    60,    -1,   123,     3,    -1,
      -1,     6,     7,     8,    -1,    -1,    -1,    12,    -1,    14,
      -1,    -1,    -1,    18,    -1,   141,   137,    -1,   139,    24,
       3,    26,    -1,     6,    -1,     8,    -1,    92,    93,   150,
      -1,    36,    37,    -1,    -1,    18,    -1,     3,    -1,    -1,
       6,     7,     8,    26,    -1,    -1,    12,   167,    14,    -1,
      -1,    -1,    18,    -1,    59,    60,   176,   178,    24,     3,
      26,    -1,     6,     3,     8,    -1,     6,    -1,     8,    52,
      36,    37,    -1,    -1,    18,    -1,    59,    60,    18,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    91,    92,    93,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    26,    -1,    -1,    59,    60,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    39,    92,    93,    42,    43,
      44,    45,    46,    47,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    92,    93,
      -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,    12,    14,    15,    18,    22,
      24,    26,    30,    36,    37,    59,    60,    92,    93,    99,
     100,   101,   102,   106,   107,   111,   117,   118,   119,   120,
     121,   122,   124,   125,   128,   129,   133,   134,   136,   138,
     139,   142,   144,   146,   148,   150,   152,   153,   156,   157,
     158,   161,    52,   112,   113,   133,   123,   161,   142,   159,
     133,   159,   138,   133,     0,    91,   100,   103,   105,   162,
      30,   132,   135,   137,   140,   143,   145,   147,   149,   156,
     151,   154,     3,    72,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   108,   109,   110,   133,
     115,   160,    39,    68,    68,    91,    70,   104,    67,   116,
     134,    31,    23,    11,    26,    39,    42,    43,    44,    45,
      46,    47,    86,   141,    50,    49,    51,    52,    53,   152,
      54,    55,    56,    58,   155,   161,   161,    67,   114,    67,
     116,    67,   116,   161,    91,   102,   130,   130,   106,   133,
      34,   136,   138,    26,    39,   142,   144,   146,   148,   150,
     150,   153,   156,   133,   133,   142,    68,    94,    34,   127,
     126,   133,    67,   116,   130,   101,   131,    68,    29,   127,
     127,    96,   101,   130,   133,    68,   130
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,   100,   100,   100,   101,   101,   102,   103,
     104,   104,   105,   105,   106,   106,   106,   106,   106,   107,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   112,   112,   113,
     113,   114,   114,   115,   115,   116,   116,   117,   118,   119,
     119,   119,   120,   121,   122,   123,   123,   124,   124,   124,
     125,   126,   126,   127,   127,   128,   129,   130,   130,   131,
     131,   132,   132,   133,   134,   135,   135,   136,   137,   137,
     138,   138,   139,   140,   140,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   142,   143,   143,   144,
     145,   145,   146,   147,   147,   148,   149,   149,   149,   150,
     151,   151,   152,   152,   153,   154,   154,   155,   155,   155,
     155,   156,   156,   157,   157,   157,   157,   157,   157,   158,
     158,   159,   160,   160,   161,   162,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     1,     1,     3,     2,
       1,     0,     3,     0,     1,     1,     1,     1,     1,     2,
       2,     1,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     3,
       0,     3,     0,     3,     0,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     0,     1,     1,     1,
       6,     5,     0,     3,     0,     5,     7,     1,     4,     2,
       1,     4,     0,     2,     2,     3,     0,     2,     3,     0,
       2,     1,     2,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     2,     3,     0,     2,
       3,     0,     2,     3,     0,     2,     3,     3,     0,     2,
       3,     0,     1,     1,     2,     3,     0,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     3,     0,     3,     3,     0
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
#line 50 "pypar.y" /* yacc.c:1646  */
    {printf("Éxito primero\n");
	(yyval.nodeT)=(yyvsp[0].nodeT);
	NodeVisitor *visitor = new PrintVisitor();
	(yyval.nodeT)->accept(visitor);
	printf("Exito\n");
}
#line 1529 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 58 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[-1].nodeT);}
#line 1535 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 58 "pypar.y" /* yacc.c:1646  */
    {cout << "a\n";(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-1].nodeT), (yyvsp[0].nodeT));
 }
#line 1542 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 59 "pypar.y" /* yacc.c:1646  */
    {cout << "b\n";(yyval.nodeT)=NULL;
}
#line 1549 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 64 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1555 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 65 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1561 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 68 "pypar.y" /* yacc.c:1646  */
    {cout << "ep\n"; (yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-2].nodeT),(yyvsp[-1].nodeT));}
#line 1567 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 71 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));/*checar aqui*/}
#line 1573 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 73 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1579 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 74 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1585 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 76 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));}
#line 1591 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 77 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1597 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 80 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1603 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 81 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1609 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 82 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1615 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 83 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1621 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 84 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1627 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 86 "pypar.y" /* yacc.c:1646  */
    {// $2->setFChild($1);$$=$2; 
 }
#line 1634 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 90 "pypar.y" /* yacc.c:1646  */
    {(yyvsp[-1].nodeT)->setSChild((yyvsp[0].nodeT)); (yyval.nodeT)=(yyvsp[-1].nodeT);}
#line 1640 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 91 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT); }
#line 1646 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1652 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 95 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1658 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 98 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMASIGUALNode();}
#line 1664 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 99 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMENOSIGUALNode();}
#line 1670 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 100 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bASIGUALNode();}
#line 1676 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 101 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDIAIGUALNode();}
#line 1682 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 102 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPORIGUALNode();}
#line 1688 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 103 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)= ast->bAMPIGUALNode();}
#line 1694 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 104 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPIPEIGUALNode();}
#line 1700 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 105 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bCIRCIGUALNode();}
#line 1706 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 106 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDMENORIGUALNode();}
#line 1712 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 107 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDMAYORIGUALNode();}
#line 1718 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 108 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDASTIGUALNode();}
#line 1724 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 109 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDDIAIGUALNode();}
#line 1730 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 113 "pypar.y" /* yacc.c:1646  */
    {
	LNodeList *nl = new LNodeList();
        nl->push_front((yyvsp[0].nodeT));
        (yyval.nodeT)=ast->bPRINTNode(nl);
        }
#line 1740 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 120 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT); }
#line 1746 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 120 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1752 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 121 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-2].nodeT),(yyvsp[-1].nodeT));}
#line 1758 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 122 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1764 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 124 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[-1].nodeT);}
#line 1770 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 125 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1776 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 128 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));}
#line 1782 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 128 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode();}
#line 1788 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 129 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1794 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 130 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1800 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 133 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDELNode((yyvsp[0].nodeT));}
#line 1806 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 136 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPASSNode();}
#line 1812 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 140 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1818 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 141 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1824 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 142 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1830 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 145 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bBREAKNode();}
#line 1836 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 148 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bCONTINUENode();}
#line 1842 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 151 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bRETURNNode((yyvsp[0].nodeT));}
#line 1848 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 153 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1854 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 154 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1860 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 157 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1866 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 158 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1872 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 159 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1878 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 162 "pypar.y" /* yacc.c:1646  */
    {
        LNodeList *nl = new LNodeList();
        nl->push_front((yyvsp[-1].nodeT));
        nl->push_front((yyvsp[-2].nodeT));
        nl->push_front((yyvsp[-4].nodeT));
        (yyval.nodeT)=ast->bIFNode(nl);}
#line 1889 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 170 "pypar.y" /* yacc.c:1646  */
    {
        LNodeList *nl = new LNodeList();
        nl->push_front((yyvsp[-4].nodeT));
        nl->push_front((yyvsp[0].nodeT));
        nl->push_front((yyvsp[-2].nodeT));
        (yyval.nodeT)=ast->bIFNode(nl);
        }
#line 1901 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 177 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1907 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 179 "pypar.y" /* yacc.c:1646  */
    { (yyval.nodeT)=(yyvsp[0].nodeT); }
#line 1913 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 180 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1919 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 183 "pypar.y" /* yacc.c:1646  */
    { (yyval.nodeT)=ast->bWHILENode((yyvsp[-3].nodeT),(yyvsp[-1].nodeT));}
#line 1925 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 186 "pypar.y" /* yacc.c:1646  */
    {
        LNodeList *nl = new LNodeList();
        nl->push_front((yyvsp[-1].nodeT));
        nl->push_front((yyvsp[-3].nodeT));
        nl->push_front((yyvsp[-5].nodeT));
        (yyval.nodeT)=ast->bFORNode(nl);
        }
#line 1937 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 196 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT); }
#line 1943 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 196 "pypar.y" /* yacc.c:1646  */
    {
	(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-1].nodeT));
}
#line 1951 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 200 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT)); }
#line 1957 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 200 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1963 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 202 "pypar.y" /* yacc.c:1646  */
    {
LNodeList *nl = new LNodeList();
nl->push_front((yyvsp[-2].nodeT));
nl->push_front((yyvsp[0].nodeT));
(yyval.nodeT)=ast->bIFNode(nl);

}
#line 1975 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 208 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT) = NULL;}
#line 1981 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 210 "pypar.y" /* yacc.c:1646  */
    {/*$$=ast->bHERMANOSNode($1,$2);*/ (yyval.nodeT)=(yyvsp[-1].nodeT);}
#line 1987 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 213 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bORNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1993 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 216 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bORNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));}
#line 1999 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 216 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2005 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 218 "pypar.y" /* yacc.c:1646  */
    { (yyval.nodeT)=ast->bANDNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));
}
#line 2012 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 221 "pypar.y" /* yacc.c:1646  */
    {
        (yyval.nodeT)=ast->bANDNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));
}
#line 2020 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 224 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2026 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 226 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bNOTNode((yyvsp[0].nodeT));}
#line 2032 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 227 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 2038 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 229 "pypar.y" /* yacc.c:1646  */
    {/*$$=ast->bHERMANOSNode($1,$2);*/
	if((yyvsp[0].nodeT)==NULL){
          (yyval.nodeT)=(yyvsp[-1].nodeT);

            }
                    else{

                        (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT)); 
                        (yyval.nodeT)=(yyvsp[0].nodeT);
                        }
}
#line 2054 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 241 "pypar.y" /* yacc.c:1646  */
    {/*$$=ast->bHERMANOSNode($1,$2);*/
if((yyvsp[-2].nodeT)==NULL){
                        (yyvsp[-1].nodeT)->setSChild((yyvsp[0].nodeT));
                        (yyval.nodeT)=(yyvsp[-1].nodeT);
                    }else{
                        (yyvsp[-2].nodeT)->setFChild((yyvsp[0].nodeT));
                        (yyvsp[-1].nodeT)->setSChild((yyvsp[-2].nodeT));
                        (yyval.nodeT)=(yyvsp[-1].nodeT);
                        }
                   
}
#line 2070 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 251 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;
/*$$=ast->bHERMANOSNode();*/
}
#line 2078 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 255 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMENORNode();}
#line 2084 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 256 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMAYORNode();}
#line 2090 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 257 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDIGNode();}
#line 2096 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 258 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMAYIGNode();}
#line 2102 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 259 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMENIGNode();}
#line 2108 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 260 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMENORMAYORNode();}
#line 2114 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 261 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bNIGNode();}
#line 2120 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 262 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bINNode();}
#line 2126 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 263 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bNOTINNode();}
#line 2132 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 264 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bISNode();}
#line 2138 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 265 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bISNOTNode();}
#line 2144 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 268 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPIPENode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 2150 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 270 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPIPENode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));}
#line 2156 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 270 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2162 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 272 "pypar.y" /* yacc.c:1646  */
    {//$$=$1;
(yyval.nodeT)=ast->bORNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));
}
#line 2170 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 276 "pypar.y" /* yacc.c:1646  */
    {
(yyval.nodeT)=ast->bORNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));

}
#line 2179 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 279 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2185 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 281 "pypar.y" /* yacc.c:1646  */
    { //$$=$1;
(yyval.nodeT)=ast->bANDNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));
}
#line 2193 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 285 "pypar.y" /* yacc.c:1646  */
    {//$$=$3;
 (yyval.nodeT)=ast->bANDNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));

}
#line 2202 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 288 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2208 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 290 "pypar.y" /* yacc.c:1646  */
    { //$$=$1;
	//$$=ast->bHERMANOSNode($1,$2);
	if((yyvsp[0].nodeT)==NULL){
                        (yyval.nodeT)=(yyvsp[-1].nodeT);
                        }
                    else{
                        (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT));
                        (yyval.nodeT)=(yyvsp[0].nodeT);
                      }

}
#line 2224 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 302 "pypar.y" /* yacc.c:1646  */
    {//$$=$3;
(yyval.nodeT)=ast->bDMENORNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));
}
#line 2232 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 305 "pypar.y" /* yacc.c:1646  */
    {//$$=$3;
(yyval.nodeT)=ast->bDMAYORNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));
}
#line 2240 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 307 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2246 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 309 "pypar.y" /* yacc.c:1646  */
    {//$$=$1;
if((yyvsp[0].nodeT)==NULL){
                        (yyval.nodeT)=(yyvsp[-1].nodeT);
                        }
                    else{
                       	(yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT));
                        (yyval.nodeT)=(yyvsp[0].nodeT);
                        }


}
#line 2262 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 321 "pypar.y" /* yacc.c:1646  */
    {//$$=$3;
if((yyvsp[-2].nodeT)==NULL){
                    (yyvsp[-1].nodeT)->setSChild((yyvsp[0].nodeT));
                    (yyval.nodeT)=(yyvsp[-1].nodeT);
                }else{
                    (yyvsp[-2].nodeT)->setFChild((yyvsp[0].nodeT));
                    (yyvsp[-1].nodeT)->setSChild((yyvsp[-2].nodeT));
                    (yyval.nodeT)=(yyvsp[-1].nodeT);
                    }
}
#line 2277 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 330 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2283 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 332 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMASNode();}
#line 2289 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 333 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMENOSNode();}
#line 2295 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 337 "pypar.y" /* yacc.c:1646  */
    {//$$ =$1;

if((yyvsp[0].nodeT)==NULL){
                        (yyval.nodeT)=(yyvsp[-1].nodeT);
                        }
                    else{
                        (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT));
                        (yyval.nodeT)=(yyvsp[0].nodeT);
                        }

}
#line 2311 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 349 "pypar.y" /* yacc.c:1646  */
    {//$$= $3;
if((yyvsp[-2].nodeT)==NULL){
                    (yyvsp[-1].nodeT)->setSChild((yyvsp[0].nodeT));
                    (yyval.nodeT)=(yyvsp[-1].nodeT);
                }else{
                    (yyvsp[-2].nodeT)->setFChild((yyvsp[0].nodeT));
                    (yyvsp[-1].nodeT)->setSChild((yyvsp[-2].nodeT));
                    (yyval.nodeT)=(yyvsp[-1].nodeT);
                    }


}
#line 2328 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 360 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2334 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 362 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPORNode();}
#line 2340 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 363 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDIVNode();}
#line 2346 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 364 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMODNode();}
#line 2352 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 365 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDDIAGNode();}
#line 2358 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 370 "pypar.y" /* yacc.c:1646  */
    {//$$=$2;
	(yyvsp[-1].nodeT)->setFChild(ast->bINTNode(0));
	(yyvsp[-1].nodeT)->setSChild((yyvsp[0].nodeT));
	(yyval.nodeT)=(yyvsp[-1].nodeT);
}
#line 2368 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 374 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 2374 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 378 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bIDENTIFICADORNode((yyvsp[0].cad));}
#line 2380 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 379 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bFLOATNode((yyvsp[0].numf));}
#line 2386 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 380 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bINTNode((yyvsp[0].numi));}
#line 2392 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 381 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 2398 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 382 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bTRUENode();}
#line 2404 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 383 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bFALSENode();}
#line 2410 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 388 "pypar.y" /* yacc.c:1646  */
    { (yyval.nodeT)=ast->bHERMANOSNode(ast->bSTRINGNode((yyvsp[0].cad)), (yyvsp[-1].nodeT));}
#line 2416 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 389 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bSTRINGNode((yyvsp[0].cad));}
#line 2422 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 393 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[-2].nodeT);}
#line 2428 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 395 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 2434 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 395 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2440 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 397 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[-2].nodeT);}
#line 2446 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 399 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 2452 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 399 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2458 "pypar.cpp" /* yacc.c:1646  */
    break;


#line 2462 "pypar.cpp" /* yacc.c:1646  */
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
#line 402 "pypar.y" /* yacc.c:1906  */


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

