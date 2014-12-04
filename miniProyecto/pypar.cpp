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
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

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
       0,    50,    50,    58,    58,    58,    62,    63,    66,    68,
      69,    71,    72,    75,    76,    77,    78,    79,    81,    85,
      86,    89,    90,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   108,   115,   115,   116,   117,
     119,   120,   123,   123,   124,   125,   128,   131,   135,   136,
     137,   140,   143,   146,   148,   149,   152,   153,   154,   157,
     165,   172,   174,   175,   178,   181,   191,   191,   195,   195,
     197,   203,   205,   208,   211,   211,   213,   216,   219,   221,
     222,   224,   226,   226,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   241,   243,   243,   245,   249,
     252,   254,   258,   261,   263,   275,   278,   280,   282,   294,
     303,   305,   306,   310,   321,   332,   334,   335,   336,   337,
     342,   346,   350,   351,   352,   353,   354,   355,   360,   361,
     365,   367,   367,   369,   371,   371
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
  "stmt", "simple_stmt", "ss_aux", "simple_stmt_aux", "small_stmt",
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

#define YYPACT_NINF -156

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-156)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      59,  -156,  -156,   136,  -156,   183,  -156,   147,  -156,   183,
     147,   183,   183,  -156,  -156,  -156,  -156,  -156,  -156,    13,
     -76,    59,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,   -10,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,   147,  -156,  -156,  -156,
      26,   188,   183,  -156,  -156,  -156,  -156,  -156,  -156,     6,
     -21,  -156,  -156,   -20,  -156,  -156,   -76,   -29,   -18,   183,
    -156,    19,    31,   206,     5,     7,     8,   -26,  -156,   -27,
     -19,  -156,   183,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,   183,    -9,    -7,
      -4,   183,   123,   123,   166,   -34,   183,  -156,    27,   183,
     183,    38,    30,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,   147,   147,   147,   147,   147,   147,   147,  -156,  -156,
    -156,  -156,   147,  -156,  -156,   183,  -156,   183,  -156,   147,
    -156,    10,   -24,  -156,    46,  -156,  -156,  -156,  -156,   183,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,    15,  -156,  -156,   123,    59,    18,  -156,   -17,
    -156,  -156,  -156,    46,  -156,    16,   123,   183,  -156,  -156,
    -156,  -156,  -156,    20,   123,  -156
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,   129,   122,    39,   127,    55,    52,     0,   126,     0,
       0,     0,     0,    47,    51,   112,   111,   124,   123,     0,
       2,     5,     6,    12,    13,    14,    15,    16,    17,    48,
      49,    50,     7,    56,    57,    58,   135,    71,    75,    78,
      80,    83,    97,   100,   103,   107,     0,   110,   115,   121,
     125,    22,     0,    35,    36,    43,    53,    54,   132,     0,
       0,    46,    79,     0,     1,     3,     4,    10,    45,     0,
      72,    73,    76,    81,    95,    98,   101,   104,   120,   108,
     113,   128,     0,    23,    24,    25,    26,    34,    27,    28,
      29,    30,    32,    31,    33,    18,    20,     0,    41,    45,
      45,     0,     0,     0,     9,     0,    44,   133,     0,     0,
       0,    93,     0,    91,    90,    86,    87,    88,    85,    84,
      89,     0,     0,     0,     0,     0,     0,     0,   118,   119,
     117,   116,     0,    21,    19,     0,    37,    44,    38,    44,
     130,     0,     0,    66,    63,    61,    11,     8,   134,     0,
      74,    77,    94,    92,    82,    96,    99,   102,   106,   105,
     109,   114,    45,    42,   131,     0,     0,     0,    64,    63,
      70,    44,    40,    63,    69,     0,     0,     0,    59,    65,
      67,    68,    62,     0,     0,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,    69,  -150,     0,  -156,  -156,   -12,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,   -90,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -155,  -156,
    -156,   -97,  -156,  -156,    -1,    24,  -156,   -15,  -156,    -8,
    -156,  -156,  -156,    -6,  -156,   -25,  -156,   -23,  -156,   -14,
    -156,   -82,  -156,    22,   -16,  -156,  -156,   -41,  -156,  -156,
      88,  -156,     2,  -156
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,   143,   105,    67,    23,    24,    95,
      96,    97,    25,    53,    54,   136,    99,   107,    26,    27,
      28,    29,    30,    31,    56,    32,    33,   169,   168,    34,
      35,   144,   175,    70,    36,    37,    71,    38,    72,    39,
      40,    73,   121,    41,    74,    42,    75,    43,    76,    44,
      77,    45,    79,    46,    47,    80,   132,    48,    49,    50,
      59,   100,    51,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      22,    58,    55,    62,    58,    78,   145,    57,    60,   138,
     140,    63,   177,    64,   178,    65,   174,   167,   179,     1,
      69,    22,     2,     3,     4,   181,   125,   126,     5,    81,
       6,     7,    15,    16,     8,   128,   129,   130,     9,   131,
      10,   104,    11,   158,   159,   101,    12,   102,   103,   106,
     109,    98,    13,    14,   110,   122,   123,   147,   135,   124,
     137,   149,     1,   139,   152,     2,     3,     4,   173,   153,
     166,     5,   172,     6,     7,    15,    16,     8,   165,   182,
     167,     9,   171,    10,   133,    11,   176,   185,   184,    12,
      66,   161,   146,   108,   150,    13,    14,   155,    61,   134,
     156,   127,   151,   141,     0,   148,     0,     0,    17,    18,
     157,   160,   180,     0,     0,   154,     0,     0,    15,    16,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     2,
       3,     4,     0,   164,   162,     5,   163,     6,     0,     1,
       0,     8,     2,     0,     4,     0,     0,    10,   170,    11,
       1,    17,    18,     2,     8,     4,     0,     0,     0,    13,
      14,     0,    11,     0,     0,     8,    22,     0,     0,     1,
       0,     0,     2,     3,     4,    22,   183,     0,     5,     0,
       6,     0,    15,    16,     8,     0,     1,     0,    52,     2,
      10,     4,    11,     0,     0,    15,    16,     0,     0,     0,
       0,     8,    13,    14,     0,     0,    15,    16,     0,    11,
       0,     0,     0,     0,   142,    17,    18,   111,     0,     0,
       0,     0,     0,     0,     0,    15,    16,     0,    17,    18,
       0,     0,   112,     0,     0,     0,     0,     0,     0,    17,
      18,     0,    15,    16,     0,   113,     0,     0,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,    17,    18,
      82,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120
};

static const yytype_int16 yycheck[] =
{
       0,     7,     3,    11,    10,    46,   103,     5,     9,    99,
     100,    12,    29,     0,   169,    91,   166,    34,   173,     3,
      30,    21,     6,     7,     8,   175,    52,    53,    12,     3,
      14,    15,    59,    60,    18,    54,    55,    56,    22,    58,
      24,    70,    26,   125,   126,    39,    30,    68,    68,    67,
      31,    52,    36,    37,    23,    50,    49,    91,    67,    51,
      67,    34,     3,    67,    26,     6,     7,     8,   165,    39,
      94,    12,   162,    14,    15,    59,    60,    18,    68,   176,
      34,    22,    67,    24,    82,    26,    68,   184,    68,    30,
      21,   132,   104,    69,   109,    36,    37,   122,    10,    97,
     123,    79,   110,   101,    -1,   106,    -1,    -1,    92,    93,
     124,   127,    96,    -1,    -1,   121,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,
       7,     8,    -1,   139,   135,    12,   137,    14,    -1,     3,
      -1,    18,     6,    -1,     8,    -1,    -1,    24,   149,    26,
       3,    92,    93,     6,    18,     8,    -1,    -1,    -1,    36,
      37,    -1,    26,    -1,    -1,    18,   166,    -1,    -1,     3,
      -1,    -1,     6,     7,     8,   175,   177,    -1,    12,    -1,
      14,    -1,    59,    60,    18,    -1,     3,    -1,    52,     6,
      24,     8,    26,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    18,    36,    37,    -1,    -1,    59,    60,    -1,    26,
      -1,    -1,    -1,    -1,    91,    92,    93,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    92,    93,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    59,    60,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    92,    93,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    92,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,    12,    14,    15,    18,    22,
      24,    26,    30,    36,    37,    59,    60,    92,    93,    99,
     100,   101,   102,   105,   106,   110,   116,   117,   118,   119,
     120,   121,   123,   124,   127,   128,   132,   133,   135,   137,
     138,   141,   143,   145,   147,   149,   151,   152,   155,   156,
     157,   160,    52,   111,   112,   132,   122,   160,   141,   158,
     132,   158,   137,   132,     0,    91,   100,   104,   161,    30,
     131,   134,   136,   139,   142,   144,   146,   148,   155,   150,
     153,     3,    72,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,   107,   108,   109,   132,   114,
     159,    39,    68,    68,    70,   103,    67,   115,   133,    31,
      23,    11,    26,    39,    42,    43,    44,    45,    46,    47,
      86,   140,    50,    49,    51,    52,    53,   151,    54,    55,
      56,    58,   154,   160,   160,    67,   113,    67,   115,    67,
     115,   160,    91,   102,   129,   129,   105,    91,   132,    34,
     135,   137,    26,    39,   141,   143,   145,   147,   149,   149,
     152,   155,   132,   132,   141,    68,    94,    34,   126,   125,
     132,    67,   115,   129,   101,   130,    68,    29,   126,   126,
      96,   101,   129,   132,    68,   129
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,   100,   100,   100,   101,   101,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   106,   107,
     107,   108,   108,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   117,   118,   118,
     118,   119,   120,   121,   122,   122,   123,   123,   123,   124,
     125,   125,   126,   126,   127,   128,   129,   129,   130,   130,
     131,   131,   132,   133,   134,   134,   135,   136,   136,   137,
     137,   138,   139,   139,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   142,   142,   143,   144,
     144,   145,   146,   146,   147,   148,   148,   148,   149,   150,
     150,   151,   151,   152,   153,   153,   154,   154,   154,   154,
     155,   155,   156,   156,   156,   156,   156,   156,   157,   157,
     158,   159,   159,   160,   161,   161
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     1,     1,     4,     1,
       0,     3,     0,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     3,     0,
       3,     0,     3,     0,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     0,     1,     1,     1,     6,
       5,     0,     3,     0,     5,     7,     1,     4,     2,     1,
       4,     0,     2,     2,     3,     0,     2,     3,     0,     2,
       1,     2,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     3,     0,     2,     3,
       0,     2,     3,     0,     2,     3,     3,     0,     2,     3,
       0,     1,     1,     2,     3,     0,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     3,     0,     3,     3,     0
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
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-1].nodeT), (yyvsp[0].nodeT));}
#line 1541 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 58 "pypar.y" /* yacc.c:1646  */
    {}
#line 1547 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1553 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1559 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-3].nodeT),(yyvsp[-2].nodeT));}
#line 1565 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 68 "pypar.y" /* yacc.c:1646  */
    {}
#line 1571 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 69 "pypar.y" /* yacc.c:1646  */
    {}
#line 1577 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 71 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));}
#line 1583 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 72 "pypar.y" /* yacc.c:1646  */
    {}
#line 1589 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 75 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1595 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 76 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1601 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1607 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1613 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 79 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1619 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 81 "pypar.y" /* yacc.c:1646  */
    { (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT));(yyval.nodeT)=(yyvsp[0].nodeT); 
 }
#line 1626 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 85 "pypar.y" /* yacc.c:1646  */
    {(yyvsp[-1].nodeT)->setSChild((yyvsp[0].nodeT)); (yyval.nodeT)=(yyvsp[-1].nodeT);}
#line 1632 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 86 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT); }
#line 1638 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 89 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1644 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 90 "pypar.y" /* yacc.c:1646  */
    {}
#line 1650 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 93 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMASIGUALNode();}
#line 1656 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 94 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMENOSIGUALNode();}
#line 1662 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 95 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bASIGUALNode();}
#line 1668 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 96 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDIAIGUALNode();}
#line 1674 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 97 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPORIGUALNode();}
#line 1680 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)= ast->bAMPIGUALNode();}
#line 1686 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPIPEIGUALNode();}
#line 1692 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 100 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bCIRCIGUALNode();}
#line 1698 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 101 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDMENORIGUALNode();}
#line 1704 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 102 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDMAYORIGUALNode();}
#line 1710 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 103 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDASTIGUALNode();}
#line 1716 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 104 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDDIAIGUALNode();}
#line 1722 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 108 "pypar.y" /* yacc.c:1646  */
    {
	LNodeList *nl = new LNodeList();
        nl->push_front((yyvsp[0].nodeT));
        (yyval.nodeT)=ast->bPRINTNode(nl);
        }
#line 1732 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 115 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT); }
#line 1738 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 115 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1744 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 116 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-2].nodeT),(yyvsp[-1].nodeT));}
#line 1750 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 117 "pypar.y" /* yacc.c:1646  */
    {}
#line 1756 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 119 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[-1].nodeT);}
#line 1762 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 120 "pypar.y" /* yacc.c:1646  */
    {}
#line 1768 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 123 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));}
#line 1774 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 123 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode();}
#line 1780 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 124 "pypar.y" /* yacc.c:1646  */
    {}
#line 1786 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 125 "pypar.y" /* yacc.c:1646  */
    {}
#line 1792 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 128 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDELNode((yyvsp[0].nodeT));}
#line 1798 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 131 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPASSNode();}
#line 1804 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 135 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1810 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 136 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1816 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 137 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1822 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 140 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bBREAKNode();}
#line 1828 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 143 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bCONTINUENode();}
#line 1834 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 146 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bRETURNNode((yyvsp[0].nodeT));}
#line 1840 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 148 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1846 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 149 "pypar.y" /* yacc.c:1646  */
    {}
#line 1852 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 152 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1858 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 153 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1864 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 154 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1870 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 157 "pypar.y" /* yacc.c:1646  */
    {
        LNodeList *nl = new LNodeList();
        nl->push_front((yyvsp[-1].nodeT));
        nl->push_front((yyvsp[-2].nodeT));
        nl->push_front((yyvsp[-4].nodeT));
        (yyval.nodeT)=ast->bIFNode(nl);}
#line 1881 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 165 "pypar.y" /* yacc.c:1646  */
    {
        LNodeList *nl = new LNodeList();
        nl->push_front((yyvsp[-4].nodeT));
        nl->push_front((yyvsp[0].nodeT));
        nl->push_front((yyvsp[-2].nodeT));
        (yyval.nodeT)=ast->bIFNode(nl);
        }
#line 1893 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 172 "pypar.y" /* yacc.c:1646  */
    {}
#line 1899 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 174 "pypar.y" /* yacc.c:1646  */
    { (yyval.nodeT)=(yyvsp[0].nodeT); }
#line 1905 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 175 "pypar.y" /* yacc.c:1646  */
    {}
#line 1911 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 178 "pypar.y" /* yacc.c:1646  */
    { (yyval.nodeT)=ast->bWHILENode((yyvsp[-3].nodeT),(yyvsp[-1].nodeT));}
#line 1917 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 181 "pypar.y" /* yacc.c:1646  */
    {
        LNodeList *nl = new LNodeList();
        nl->push_front((yyvsp[-1].nodeT));
        nl->push_front((yyvsp[-3].nodeT));
        nl->push_front((yyvsp[-5].nodeT));
        (yyval.nodeT)=ast->bFORNode(nl);
        }
#line 1929 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 191 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT); }
#line 1935 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 191 "pypar.y" /* yacc.c:1646  */
    {
	(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-1].nodeT));
}
#line 1943 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 195 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT)); }
#line 1949 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 195 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1955 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 197 "pypar.y" /* yacc.c:1646  */
    {
LNodeList *nl = new LNodeList();
nl->push_front((yyvsp[-2].nodeT));
nl->push_front((yyvsp[-1].cad));
(yyval.nodeT)=ast->bIFNode(nl);

}
#line 1967 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 203 "pypar.y" /* yacc.c:1646  */
    {}
#line 1973 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 205 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1979 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 208 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bORNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1985 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 211 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bORNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));}
#line 1991 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 211 "pypar.y" /* yacc.c:1646  */
    {}
#line 1997 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 213 "pypar.y" /* yacc.c:1646  */
    { (yyval.nodeT)=ast->bANDNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));
}
#line 2004 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 216 "pypar.y" /* yacc.c:1646  */
    {
        (yyval.nodeT)=ast->bANDNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));
}
#line 2012 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 219 "pypar.y" /* yacc.c:1646  */
    {}
#line 2018 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 221 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bNOTNode((yyvsp[0].nodeT));}
#line 2024 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 222 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 2030 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 224 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 2036 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 226 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode((yyvsp[-2].nodeT),(yyvsp[-1].nodeT));}
#line 2042 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 226 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bHERMANOSNode();}
#line 2048 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 228 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMENORNode();}
#line 2054 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 229 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMAYORNode();}
#line 2060 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 230 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDIGNode();}
#line 2066 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 231 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMAYIGNode();}
#line 2072 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 232 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMENIGNode();}
#line 2078 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 233 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMENORMAYORNode();}
#line 2084 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 234 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bNIGNode();}
#line 2090 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 235 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bINNode();}
#line 2096 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 236 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bNOTINNode();}
#line 2102 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 237 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bISNode();}
#line 2108 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 238 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bISNOTNode();}
#line 2114 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 241 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPIPENode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 2120 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 243 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPIPENode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));}
#line 2126 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 243 "pypar.y" /* yacc.c:1646  */
    {}
#line 2132 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 245 "pypar.y" /* yacc.c:1646  */
    {//$$=$1;
(yyval.nodeT)=ast->bORNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));
}
#line 2140 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 249 "pypar.y" /* yacc.c:1646  */
    {
(yyval.nodeT)=ast->bORNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));

}
#line 2149 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 252 "pypar.y" /* yacc.c:1646  */
    {}
#line 2155 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 254 "pypar.y" /* yacc.c:1646  */
    { //$$=$1;
(yyval.nodeT)=ast->bANDNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));
}
#line 2163 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 258 "pypar.y" /* yacc.c:1646  */
    {//$$=$3;
 (yyval.nodeT)=ast->bANDNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));

}
#line 2172 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 261 "pypar.y" /* yacc.c:1646  */
    {}
#line 2178 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 263 "pypar.y" /* yacc.c:1646  */
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
#line 2194 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 275 "pypar.y" /* yacc.c:1646  */
    {//$$=$3;
(yyval.nodeT)=ast->bDMENORNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));
}
#line 2202 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 278 "pypar.y" /* yacc.c:1646  */
    {//$$=$3;
(yyval.nodeT)=ast->bDMAYORNode((yyvsp[-2].nodeT),(yyvsp[0].nodeT));
}
#line 2210 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 280 "pypar.y" /* yacc.c:1646  */
    {}
#line 2216 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 282 "pypar.y" /* yacc.c:1646  */
    {//$$=$1;
if((yyvsp[0].nodeT)==NULL){
                        (yyval.nodeT)=(yyvsp[-1].nodeT);
                        }
                    else{
                        (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT));
                        (yyval.nodeT)=(yyvsp[0].nodeT);
                        }


}
#line 2232 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 294 "pypar.y" /* yacc.c:1646  */
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
#line 2247 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 303 "pypar.y" /* yacc.c:1646  */
    {}
#line 2253 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 305 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMASNode();}
#line 2259 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 306 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMENOSNode();}
#line 2265 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 310 "pypar.y" /* yacc.c:1646  */
    {//$$ =$1;
if((yyvsp[0].nodeT)==NULL){
                        (yyval.nodeT)=(yyvsp[-1].nodeT);
                        }
                    else{
                        (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT));
                        (yyval.nodeT)=(yyvsp[0].nodeT);
                        }

}
#line 2280 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 321 "pypar.y" /* yacc.c:1646  */
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
#line 2297 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 332 "pypar.y" /* yacc.c:1646  */
    {}
#line 2303 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 334 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bPORNode();}
#line 2309 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 335 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDIVNode();}
#line 2315 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 336 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bMODNode();}
#line 2321 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 337 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bDDIAGNode();}
#line 2327 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 342 "pypar.y" /* yacc.c:1646  */
    {//$$=$2;
	(yyvsp[-1].nodeT)->setFChild(ast->bINTNode(0));
	(yyvsp[-1].nodeT)->setSChild((yyvsp[0].nodeT));
	(yyval.nodeT)=(yyvsp[-1].nodeT);
}
#line 2337 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 346 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 2343 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 350 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bIDENTIFICADORNode((yyvsp[0].cad));}
#line 2349 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 351 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bFLOATNode((yyvsp[0].numf));}
#line 2355 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 352 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bINTNode((yyvsp[0].numi));}
#line 2361 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 353 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 2367 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 354 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bTRUENode();}
#line 2373 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 355 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bFALSENode();}
#line 2379 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 360 "pypar.y" /* yacc.c:1646  */
    { (yyval.nodeT)=ast->bHERMANOSNode(ast->bSTRINGNode((yyvsp[0].cad)), (yyvsp[-1].nodeT));}
#line 2385 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 361 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast->bSTRINGNode((yyvsp[0].cad));}
#line 2391 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 365 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[-2].nodeT);}
#line 2397 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 367 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 2403 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 367 "pypar.y" /* yacc.c:1646  */
    {}
#line 2409 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 369 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[-2].nodeT);}
#line 2415 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 371 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 2421 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 371 "pypar.y" /* yacc.c:1646  */
    {}
#line 2427 "pypar.cpp" /* yacc.c:1646  */
    break;


#line 2431 "pypar.cpp" /* yacc.c:1646  */
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
#line 374 "pypar.y" /* yacc.c:1906  */


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

