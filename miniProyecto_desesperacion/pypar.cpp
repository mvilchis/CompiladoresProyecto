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
MASTBuilder ast;
NodeVisitor visitor;

extern FILE *yyin;
extern char *yytext;
extern void inicializar();

int yylex(); 
int yyerror(const char *s) { printf ("Error: %s\n", s); return 1;}


#line 86 "pypar.cpp" /* yacc.c:339  */

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
#line 27 "pypar.y" /* yacc.c:355  */

#include "composite.cpp"

#line 120 "pypar.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRING = 258,
    IDENTIFICADOR = 259,
    PRINT = 260,
    FALSE = 261,
    CLASS = 262,
    FINALLY = 263,
    IS = 264,
    RETURN = 265,
    NONE = 266,
    CONTINUE = 267,
    FOR = 268,
    LAMBDA = 269,
    TRY = 270,
    TRUE = 271,
    DEF = 272,
    FROM = 273,
    NONLOCAL = 274,
    WHILE = 275,
    AND = 276,
    DEL = 277,
    GLOBAL = 278,
    NOT = 279,
    WITH = 280,
    AS = 281,
    ELIF = 282,
    IF = 283,
    OR = 284,
    YIELD = 285,
    ASSERT = 286,
    ELSE = 287,
    IMPORT = 288,
    PASS = 289,
    BREAK = 290,
    EXCEPT = 291,
    IN = 292,
    RAISE = 293,
    EXEC = 294,
    NIGUAL = 295,
    DIGUAL = 296,
    MAIGUAL = 297,
    MEIGUAL = 298,
    MAYOR = 299,
    MENOR = 300,
    ENETILDE = 301,
    CIRCUNFLEJO = 302,
    PIPE = 303,
    AMPERSON = 304,
    DMAYOR = 305,
    DMENOR = 306,
    PORCEN = 307,
    DDIAG = 308,
    DIAG = 309,
    DASTERISCO = 310,
    ASTERISCO = 311,
    MENOS = 312,
    MAS = 313,
    APAREN = 314,
    CPAREN = 315,
    ACORCHETE = 316,
    CCORCHETE = 317,
    ALLAVE = 318,
    CLLAVE = 319,
    COMA = 320,
    DPUNTO = 321,
    PUNTO = 322,
    PCOMA = 323,
    AT = 324,
    IGUAL = 325,
    MENOSMAYOR = 326,
    MASIGUAL = 327,
    MENOSIGUAL = 328,
    ASTIGUAL = 329,
    DIAIGUAL = 330,
    DDIAIGUAL = 331,
    PORIGUAL = 332,
    AMPIGUAL = 333,
    PIPEIGUAL = 334,
    CIRCIGUAL = 335,
    DMAYORIGUAL = 336,
    DMENORIGUAL = 337,
    DASTIGUAL = 338,
    MENORMAYOR = 339,
    CSIMPLE = 340,
    IDIAG = 341,
    GATO = 342,
    DIDIAG = 343,
    NEWLINE = 344,
    ENTERO = 345,
    FLOTANTE = 346,
    INDENT = 347,
    SALIDA = 348,
    DEDENT = 349,
    FIN = 350
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 30 "pypar.y" /* yacc.c:355  */

  int numi;
    float numf;
    const char* cad;
Node* nodeT;

#line 235 "pypar.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PYPAR_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 250 "pypar.cpp" /* yacc.c:358  */

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
#define YYFINAL  78
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   228

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

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
      95
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    57,    58,    59,    63,    64,    66,    67,
      71,    72,    75,    76,    77,    79,    80,    84,    85,    86,
      87,    88,    91,    94,    96,    97,    98,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   119,   121,   123,   124,   125,   127,   128,   129,
     130,   131,   132,   135,   138,   140,   143,   146,   147,   150,
     153,   156,   159,   160,   164,   168,   169,   170,   174,   175,
     176,   180,   181,   184,   195,   205,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   221,   222,   223,
     227,   228,   229,   233,   234,   235,   238,   246,   247,   248,
     251,   259,   268,   270,   271,   273,   281,   290,   292,   293,
     294,   295,   298,   301,   306,   307,   308,   309,   310,   311,
     314,   316,   317,   319,   320
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "IDENTIFICADOR", "PRINT",
  "FALSE", "CLASS", "FINALLY", "IS", "RETURN", "NONE", "CONTINUE", "FOR",
  "LAMBDA", "TRY", "TRUE", "DEF", "FROM", "NONLOCAL", "WHILE", "AND",
  "DEL", "GLOBAL", "NOT", "WITH", "AS", "ELIF", "IF", "OR", "YIELD",
  "ASSERT", "ELSE", "IMPORT", "PASS", "BREAK", "EXCEPT", "IN", "RAISE",
  "EXEC", "NIGUAL", "DIGUAL", "MAIGUAL", "MEIGUAL", "MAYOR", "MENOR",
  "ENETILDE", "CIRCUNFLEJO", "PIPE", "AMPERSON", "DMAYOR", "DMENOR",
  "PORCEN", "DDIAG", "DIAG", "DASTERISCO", "ASTERISCO", "MENOS", "MAS",
  "APAREN", "CPAREN", "ACORCHETE", "CCORCHETE", "ALLAVE", "CLLAVE", "COMA",
  "DPUNTO", "PUNTO", "PCOMA", "AT", "IGUAL", "MENOSMAYOR", "MASIGUAL",
  "MENOSIGUAL", "ASTIGUAL", "DIAIGUAL", "DDIAIGUAL", "PORIGUAL",
  "AMPIGUAL", "PIPEIGUAL", "CIRCIGUAL", "DMAYORIGUAL", "DMENORIGUAL",
  "DASTIGUAL", "MENORMAYOR", "CSIMPLE", "IDIAG", "GATO", "DIDIAG",
  "NEWLINE", "ENTERO", "FLOTANTE", "INDENT", "SALIDA", "DEDENT", "FIN",
  "$accept", "GOAL", "file_input", "suite", "s44", "stmt", "simple_stmt",
  "s42", "s43", "small_stmt", "pass_stmt", "del_stmt", "flow_stmt",
  "expr_stmt", "s41", "s56", "break_stmt", "continue_stmt", "return_stmt",
  "s40", "compound_stmt", "print_stmt", "while_else_stmt", "while_stmt",
  "if_stmt", "elif", "if_else_stmt", "else_stmt", "for_else_stmt",
  "for_stmt", "test", "or_test", "s2", "and_test", "s3", "not_test",
  "comparison", "s4", "comp_op", "expr", "s5", "xor_expr", "s6",
  "and_expr", "s7", "shift_expr", "s8", "arith_expr", "s9", "s10", "term",
  "s11", "s12", "factor", "atom", "trailer", "arglist", "s29", YY_NULLPTR
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
     345,   346,   347,   348,   349,   350
};
# endif

#define YYPACT_NINF -145

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-145)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      34,  -145,   124,   133,  -145,   133,  -145,     4,  -145,   133,
      11,   133,   133,  -145,  -145,  -145,  -145,    34,  -145,  -145,
      19,  -145,    34,  -145,   -42,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,     9,     9,  -145,  -145,     9,
    -145,  -145,    26,    27,  -145,   135,    13,    12,    18,   -22,
     137,    -6,    63,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,   133,  -145,  -145,
    -145,  -145,    33,     6,  -145,  -145,    14,  -145,  -145,  -145,
      71,    -5,  -145,    20,  -145,  -145,  -145,   133,  -145,   133,
    -145,    61,    52,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,   137,   137,  -145,   137,  -145,   137,  -145,   137,
     137,  -145,  -145,  -145,   137,  -145,  -145,  -145,  -145,  -145,
     137,  -145,     1,     5,     7,   -42,  -145,    23,    26,    27,
    -145,  -145,   135,    13,    12,    18,   -22,   -22,    -6,    63,
      24,   133,    31,     8,     8,  -145,     8,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,    32,    42,    49,
      38,    98,  -145,  -145,    86,  -145,     8,   133,  -145,  -145,
       8,    98,   133,  -145,  -145,    42,  -145,    36,    98,    65,
    -145,  -145,  -145,    45,     8,    86,  -145
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,   117,   114,     0,   119,    46,    43,     0,   118,     0,
       0,     0,     0,    22,    42,   104,   103,     5,   115,   116,
       0,     2,     5,    10,    16,    20,    21,    18,    19,    24,
      25,    26,    11,    17,    50,    49,    47,    48,    52,    51,
      28,    64,    67,    70,    72,    75,    89,    92,    95,    99,
       0,   102,   107,   113,    30,    31,    32,    33,    41,    34,
      35,    36,    37,    39,    38,    40,    27,     0,   114,    53,
      44,    45,     0,     0,    23,    71,     0,     3,     1,     4,
      15,     0,    14,     0,    54,    59,    61,     0,    65,     0,
      68,    85,     0,    83,    82,    78,    79,    80,    77,    76,
      81,    73,     0,     0,    87,     0,    90,     0,    93,     0,
       0,    96,   112,   100,     0,   110,   111,   109,   108,   105,
       0,    29,     0,     0,     0,    16,    12,     0,    67,    70,
      86,    84,    75,    89,    92,    95,    99,    99,   102,   107,
       0,   122,     0,     0,     0,    13,     0,    66,    69,    74,
      88,    91,    94,    97,    98,   101,   106,     0,   124,     0,
       0,     0,    55,     6,    58,    60,     0,     0,   121,   120,
       0,     9,     0,    56,    63,   124,    62,     0,     9,     0,
     123,     7,     8,     0,     0,    58,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,    -1,  -113,   -43,  -144,  -121,    17,  -145,    66,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,   -40,  -145,   -29,  -145,  -145,
      -3,  -145,    22,    60,    25,    -7,  -145,    16,  -145,    50,
      30,    48,    37,    53,    35,    58,  -101,   -31,    28,   -50,
      46,    29,  -145,   -47,  -145,  -145,  -145,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,   162,   177,    22,    23,    81,    82,    24,
      25,    26,    27,    28,    66,    67,    29,    30,    31,    70,
      32,    33,    34,    35,    36,   173,    37,    84,    38,    39,
      40,    41,    88,    42,    90,    43,    44,   101,   102,    45,
     104,    46,   106,    47,   108,    48,   111,    49,   113,    50,
      51,   119,   120,    52,    53,   142,   159,   168
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      69,   114,    71,   112,    75,   140,    73,    85,    72,    76,
      86,     1,     2,     3,     4,    74,    77,   171,     5,    78,
       6,    79,   163,   163,     8,   163,    80,   178,   109,   110,
      10,   164,    11,   165,   178,   153,   154,     1,     2,     3,
       4,    83,    13,    14,     5,   163,     6,     7,    89,   163,
       8,    15,    16,   174,     9,    87,    10,   176,    11,   105,
     141,   103,    12,   163,   121,    15,    16,   107,    13,    14,
     122,   185,   123,   139,     1,     2,     3,     4,   136,   137,
     124,     5,   129,     6,   126,   130,   127,     8,   114,   131,
     157,    15,    16,    10,   143,    11,   144,   160,    18,    19,
     161,     1,     2,     3,     4,    13,    14,   167,     5,   169,
       6,     7,   146,   172,     8,   115,   116,   117,     9,   118,
      10,   166,    11,    17,    18,    19,    12,   170,    15,    16,
     181,   183,    13,    14,   184,   182,     1,    68,   158,     4,
       1,    68,   145,     4,    91,   186,   125,   128,   149,     8,
     147,   133,   132,     8,   148,    15,    16,    11,   134,    92,
     138,    18,    19,   150,   175,   135,   155,   180,   156,   179,
     152,   151,    93,     0,     0,    94,    95,    96,    97,    98,
      99,     0,     0,     0,     0,     0,     0,     0,    18,    19,
      15,    16,     0,     0,    15,    16,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,    18,    19,     0,     0,    18,    19
};

static const yytype_int16 yycheck[] =
{
       3,    51,     5,    50,    11,     4,     9,    36,     4,    12,
      39,     3,     4,     5,     6,     4,    17,   161,    10,     0,
      12,    22,   143,   144,    16,   146,    68,   171,    50,    51,
      22,   144,    24,   146,   178,   136,   137,     3,     4,     5,
       6,    32,    34,    35,    10,   166,    12,    13,    21,   170,
      16,    57,    58,   166,    20,    29,    22,   170,    24,    47,
      59,    48,    28,   184,    67,    57,    58,    49,    34,    35,
      37,   184,    66,   120,     3,     4,     5,     6,   109,   110,
      66,    10,    89,    12,    89,    24,    66,    16,   138,    37,
      66,    57,    58,    22,    89,    24,    89,    66,    90,    91,
      92,     3,     4,     5,     6,    34,    35,    65,    10,    60,
      12,    13,    89,    27,    16,    52,    53,    54,    20,    56,
      22,    89,    24,    89,    90,    91,    28,    89,    57,    58,
      94,    66,    34,    35,    89,   178,     3,     4,   141,     6,
       3,     4,   125,     6,     9,   185,    80,    87,   132,    16,
     128,   103,   102,    16,   129,    57,    58,    24,   105,    24,
     114,    90,    91,   133,   167,   107,   138,   175,   139,   172,
     135,   134,    37,    -1,    -1,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      57,    58,    -1,    -1,    57,    58,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    90,    91,    -1,    -1,    90,    91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    10,    12,    13,    16,    20,
      22,    24,    28,    34,    35,    57,    58,    89,    90,    91,
      97,    98,   101,   102,   105,   106,   107,   108,   109,   112,
     113,   114,   116,   117,   118,   119,   120,   122,   124,   125,
     126,   127,   129,   131,   132,   135,   137,   139,   141,   143,
     145,   146,   149,   150,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,   110,   111,     4,   126,
     115,   126,     4,   126,     4,   131,   126,    98,     0,    98,
      68,   103,   104,    32,   123,   123,   123,    29,   128,    21,
     130,     9,    24,    37,    40,    41,    42,    43,    44,    45,
      84,   133,   134,    48,   136,    47,   138,    49,   140,    50,
      51,   142,   149,   144,   145,    52,    53,    54,    56,   147,
     148,   126,    37,    66,    66,   105,    89,    66,   129,   131,
      24,    37,   135,   137,   139,   141,   143,   143,   146,   149,
       4,    59,   151,    89,    89,   103,    89,   128,   130,   133,
     136,   138,   140,   142,   142,   144,   147,    66,   126,   152,
      66,    92,    99,   102,    99,    99,    89,    65,   153,    60,
      89,   101,    27,   121,    99,   126,    99,   100,   101,   126,
     153,    94,   100,    66,    89,    99,   121
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   103,   103,   104,   104,   105,   105,   105,
     105,   105,   106,   107,   108,   108,   108,   109,   109,   110,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   113,   114,   115,   115,   116,   116,   116,
     116,   116,   116,   117,   118,   119,   120,   121,   121,   122,
     123,   124,   125,   125,   126,   127,   128,   128,   129,   130,
     130,   131,   131,   132,   133,   133,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   135,   136,   136,
     137,   138,   138,   139,   140,   140,   141,   142,   142,   142,
     143,   144,   144,   145,   145,   146,   147,   147,   148,   148,
     148,   148,   149,   149,   150,   150,   150,   150,   150,   150,
     151,   152,   152,   153,   153
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     1,     4,     2,     0,
       1,     1,     3,     3,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     0,     1,     1,     1,
       1,     1,     1,     2,     2,     5,     6,     6,     0,     2,
       4,     2,     7,     7,     1,     2,     3,     0,     2,     3,
       0,     2,     1,     2,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     3,     0,
       2,     3,     0,     2,     3,     0,     2,     3,     3,     0,
       2,     3,     0,     1,     1,     2,     3,     0,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     0,     3,     0
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
#line 52 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT); 
                    (yyval.nodeT)->accept(visitor);
                    cout << "Éxito en el reconocimiento" << endl;}
#line 1501 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 57 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1507 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 58 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1513 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 59 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode();}
#line 1519 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1525 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 64 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[-2].nodeT),(yyvsp[-1].nodeT));}
#line 1531 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1537 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode();}
#line 1543 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1549 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 72 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1555 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 75 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[-2].nodeT),(yyvsp[-1].nodeT));}
#line 1561 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 76 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1567 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 77 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1573 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 79 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode();}
#line 1579 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 80 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode();}
#line 1585 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 84 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[0].nodeT));}
#line 1591 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 85 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[0].nodeT));}
#line 1597 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 86 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[0].nodeT));}
#line 1603 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 87 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[0].nodeT));}
#line 1609 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 88 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[0].nodeT));}
#line 1615 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 91 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bPASSNode();}
#line 1621 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 94 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bDELNode((yyvsp[-1].nodeT));}
#line 1627 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 96 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1633 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 97 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1639 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 98 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1645 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 101 "pypar.y" /* yacc.c:1646  */
    {(yyvsp[0].nodeT)->setFChild(ast.bIDENTIFICADORNode((yyvsp[-1].cad))); (yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1651 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 102 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1657 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 103 "pypar.y" /* yacc.c:1646  */
    {(yyvsp[-1].nodeT)->setSChild((yyvsp[0].nodeT));}
#line 1663 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 104 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bMASIGUALNode();}
#line 1669 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 105 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bMENOSIGUALNode();}
#line 1675 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 106 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bASIGUALNode();}
#line 1681 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 107 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bDIAIGUALNode();}
#line 1687 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 108 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bPORIGUALNode();}
#line 1693 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 109 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)= ast.bAMPIGUALNode();}
#line 1699 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 110 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bPIPEIGUALNode();}
#line 1705 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 111 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bCIRCIGUALNode();}
#line 1711 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 112 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bDMENORIGUALNode();}
#line 1717 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 113 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bDMAYORIGUALNode();}
#line 1723 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 114 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bDASTIGUALNode();}
#line 1729 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 115 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bDDIAIGUALNode();}
#line 1735 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 119 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bBREAKNode();}
#line 1741 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 121 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bCONTINUENode();}
#line 1747 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 123 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bRETURNNode((yyvsp[0].nodeT));}
#line 1753 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 124 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1759 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 125 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1765 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 127 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[0].nodeT));}
#line 1771 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 128 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[0].nodeT));}
#line 1777 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 129 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[0].nodeT));}
#line 1783 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 130 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[0].nodeT));}
#line 1789 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 131 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[0].nodeT));}
#line 1795 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 132 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bHERMANOSNode((yyvsp[0].nodeT));}
#line 1801 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 135 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bPRINTNode((yyvsp[0].nodeT));}
#line 1807 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 138 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bWHILEELSENode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1813 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 140 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bWHILENode((yyvsp[-3].nodeT),(yyvsp[0].nodeT));}
#line 1819 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 143 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bIFNode((yyvsp[-4].nodeT),(yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1825 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 146 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bIFNode((yyvsp[-4].nodeT),(yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1831 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 147 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1837 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 150 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bIFELSENode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1843 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 153 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1849 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 156 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bFORELSENode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1855 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 159 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bFORNode(ast.bIDENTIFICADORNode((yyvsp[-5].cad)),(yyvsp[-3].nodeT),(yyvsp[0].nodeT));}
#line 1861 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 160 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bFORNode(ast.bIDENTIFICADORNode((yyvsp[-5].cad)),ast.bIDENTIFICADORNode((yyvsp[-3].cad)),(yyvsp[0].nodeT));}
#line 1867 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 164 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1873 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 168 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bORNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1879 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 169 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bORNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1885 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 170 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1891 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 174 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bANDNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1897 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 175 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bANDNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 1903 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 176 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1909 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 180 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bNOTNode((yyvsp[0].nodeT));}
#line 1915 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 181 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 1921 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 184 "pypar.y" /* yacc.c:1646  */
    {  
                        if((yyvsp[0].nodeT)==NULL){
                        (yyval.nodeT)=(yyvsp[-1].nodeT);

                        }
                    else{

                        (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT)); 
                        (yyval.nodeT)=(yyvsp[0].nodeT);
                        }
                    }
#line 1937 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 195 "pypar.y" /* yacc.c:1646  */
    {
                        if((yyvsp[0].nodeT)==NULL){
                        (yyvsp[-2].nodeT)->setSChild((yyvsp[-1].nodeT));
                        (yyval.nodeT)=(yyvsp[-2].nodeT);
                    }else{
                        (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT));
                        (yyvsp[-2].nodeT)->setSChild((yyvsp[0].nodeT));
                        (yyval.nodeT)=(yyvsp[-2].nodeT);
                        }
                    }
#line 1952 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 205 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 1958 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 209 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bMENORNode();}
#line 1964 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 210 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bMAYORNode();}
#line 1970 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 211 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bDIGNode();}
#line 1976 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 212 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bMAYIGNode();}
#line 1982 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 213 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bMENIGNode();}
#line 1988 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 214 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bMENORMAYORNode();}
#line 1994 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 215 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bNIGNode();}
#line 2000 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 216 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bINNode();}
#line 2006 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 217 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bNOTINNode();}
#line 2012 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 218 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bISNode();}
#line 2018 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 219 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bISNOTNode();}
#line 2024 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 221 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bPIPENode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 2030 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 222 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bPIPENode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 2036 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 223 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2042 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 227 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bCIRCUNFLEJONode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 2048 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 228 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bCIRCUNFLEJONode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 2054 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 229 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2060 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 233 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bAMPERSONNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 2066 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 234 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bAMPERSONNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 2072 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 235 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2078 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 238 "pypar.y" /* yacc.c:1646  */
    {if((yyvsp[0].nodeT)==NULL){
                        (yyval.nodeT)=(yyvsp[-1].nodeT);
                        }
                    else{
                        (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT)); 
                        (yyval.nodeT)=(yyvsp[0].nodeT);
                        }
                    }
#line 2091 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 246 "pypar.y" /* yacc.c:1646  */
    { (yyval.nodeT)=ast.bDMAYORNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 2097 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 247 "pypar.y" /* yacc.c:1646  */
    { (yyval.nodeT)=ast.bDMENORNode((yyvsp[-1].nodeT),(yyvsp[0].nodeT));}
#line 2103 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 248 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2109 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 251 "pypar.y" /* yacc.c:1646  */
    {if((yyvsp[0].nodeT)==NULL){
                        (yyval.nodeT)=(yyvsp[-1].nodeT);
                        }
                    else{
                        (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT)); 
                        (yyval.nodeT)=(yyvsp[0].nodeT);
                        }
                    }
#line 2122 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 259 "pypar.y" /* yacc.c:1646  */
    {if((yyvsp[0].nodeT)==NULL){
                    (yyvsp[-2].nodeT)->setSChild((yyvsp[-1].nodeT));
                    (yyval.nodeT)=(yyvsp[-2].nodeT);
                }else{
                    (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT));
                    (yyvsp[-2].nodeT)->setSChild((yyvsp[0].nodeT));
                    (yyval.nodeT)=(yyvsp[-2].nodeT);
                    }
                }
#line 2136 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 268 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2142 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 270 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bMENOSNode();}
#line 2148 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 271 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bMASNode();}
#line 2154 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 273 "pypar.y" /* yacc.c:1646  */
    {if((yyvsp[0].nodeT)==NULL){
                        (yyval.nodeT)=(yyvsp[-1].nodeT);
                        }
                    else{
                        (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT)); 
                        (yyval.nodeT)=(yyvsp[0].nodeT);
                        }
                    }
#line 2167 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 281 "pypar.y" /* yacc.c:1646  */
    {if((yyvsp[0].nodeT)==NULL){
                    (yyvsp[-2].nodeT)->setSChild((yyvsp[-1].nodeT));
                    (yyval.nodeT)=(yyvsp[-2].nodeT);
                }else{
                    (yyvsp[0].nodeT)->setFChild((yyvsp[-1].nodeT));
                    (yyvsp[-2].nodeT)->setSChild((yyvsp[0].nodeT));
                    (yyval.nodeT)=(yyvsp[-2].nodeT);
                    }
                }
#line 2181 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 290 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=NULL;}
#line 2187 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 292 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bPORNode();}
#line 2193 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 293 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bDIVNode();}
#line 2199 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 294 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bMODNode();}
#line 2205 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 295 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bDDIAGNode();}
#line 2211 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 298 "pypar.y" /* yacc.c:1646  */
    {(yyvsp[-1].nodeT)->setFChild(ast.bINTNode(0));
                        (yyvsp[-1].nodeT)->setSChild((yyvsp[0].nodeT));
                        (yyval.nodeT)=(yyvsp[-1].nodeT);}
#line 2219 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 301 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[0].nodeT);}
#line 2225 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 306 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bIDENTIFICADORNode((yyvsp[0].cad));}
#line 2231 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 307 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bINTNode((yyvsp[0].numi));}
#line 2237 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 308 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bFLOATNode((yyvsp[0].numf));}
#line 2243 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 309 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bSTRINGNode((yyvsp[0].cad));}
#line 2249 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 310 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bFALSENode();}
#line 2255 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 311 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bTRUENode();}
#line 2261 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 314 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=(yyvsp[-1].nodeT);}
#line 2267 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 316 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bARGNode(ast.bARGNode((yyvsp[-1].nodeT)),(yyvsp[0].nodeT));}
#line 2273 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 317 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bARGNode();}
#line 2279 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 319 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bARGNode(ast.bARGNode((yyvsp[-2].nodeT)),(yyvsp[-1].nodeT));}
#line 2285 "pypar.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 320 "pypar.y" /* yacc.c:1646  */
    {(yyval.nodeT)=ast.bARGNode();}
#line 2291 "pypar.cpp" /* yacc.c:1646  */
    break;


#line 2295 "pypar.cpp" /* yacc.c:1646  */
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
#line 325 "pypar.y" /* yacc.c:1906  */


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

