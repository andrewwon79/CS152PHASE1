/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "project1.y" /* yacc.c:339  */

#include <stdio.h>
int yyerror(char *s);
extern int yylex();  

#line 72 "project1.tab.c" /* yacc.c:339  */

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
   by #include "project1.tab.h".  */
#ifndef YY_YY_PROJECT1_TAB_H_INCLUDED
# define YY_YY_PROJECT1_TAB_H_INCLUDED
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
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    FOR = 274,
    BEGINLOOP = 275,
    ENDLOOP = 276,
    CONTINUE = 277,
    READ = 278,
    WRITE = 279,
    AND = 280,
    OR = 281,
    NOT = 282,
    TRUE = 283,
    FALSE = 284,
    RETURN = 285,
    NEQ = 286,
    LT = 287,
    GT = 288,
    LTE = 289,
    GTE = 290,
    SUB = 291,
    ADD = 292,
    MULT = 293,
    DIV = 294,
    EQ = 295,
    L_PAREN = 296,
    R_PAREN = 297,
    MOD = 298,
    SEMICOLON = 299,
    COLON = 300,
    COMMA = 301,
    L_SQUARE_BRACKET = 302,
    R_SQUARE_BRACKET = 303,
    ASSIGN = 304,
    IDENTIFIER = 305,
    NUMBER = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "project1.y" /* yacc.c:355  */

   int int_value;
   float float_value;
   char* str_value;

#line 170 "project1.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROJECT1_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 187 "project1.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    55,     2,     2,
      63,    64,    54,    53,    62,    52,     2,    65,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    58,
      56,     2,    57,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    27,    30,    33,    34,    37,    38,    41,
      42,    43,    46,    47,    48,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    65,    66,    69,
      70,    73,    74,    77,    78,    81,    82,    83,    86,    87,
      88,    91,    92,    95,    96,    99,   100,   103,   104,   107,
     108,   109,   110,   111,   112,   113,   114,   116,   117,   118,
     119,   120,   121,   124,   125,   128,   129,   130,   133,   134,
     137,   138,   139,   140,   143,   144,   145,   146,   147,   148,
     149,   153,   154,   155,   158,   159,   160,   164
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOR",
  "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT",
  "TRUE", "FALSE", "RETURN", "NEQ", "LT", "GT", "LTE", "GTE", "SUB", "ADD",
  "MULT", "DIV", "EQ", "L_PAREN", "R_PAREN", "MOD", "SEMICOLON", "COLON",
  "COMMA", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN", "IDENTIFIER",
  "NUMBER", "'-'", "'+'", "'*'", "'%'", "'<'", "'>'", "';'", "':'", "'['",
  "']'", "','", "'('", "')'", "'/'", "$accept", "PROGRAM", "FUNCTIONRULE",
  "FUNCTIONRECRULE", "FUNCTIONREC2RULE", "DECLARATION", "DECLARATIONREC",
  "STATEMENT", "IFREC", "WHILEREC", "DOREC", "FORREC", "READREC",
  "WRITEREC", "BOOLEXPRESSION", "BOOLEXPRESSIONREC",
  "RELATIONANDEXPRESSION", "RELATIONANDEXPRESSIONREC",
  "RELATIONEXPRESSION", "COMPARATOR", "EXPRESSION", "EXPRESSIONREC",
  "MULTIPLICATIVEEXPRESSION", "MULTIPLICATIVEEXPRESSIONTERM", "TERM",
  "TERMEXP", "VAR", "IDENTIFIERRULE", YY_NULLPTR
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
     305,   306,    45,    43,    42,    37,    60,    62,    59,    58,
      91,    93,    44,    40,    41,    47
};
# endif

#define YYPACT_NINF -136

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-136)))

#define YYTABLE_NINF -66

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,   -29,    43,    16,  -136,   -13,  -136,  -136,    33,    -2,
      54,    -9,   -44,  -136,    55,    -6,    44,   -29,    -3,  -136,
    -136,     5,  -136,    70,    23,    76,    30,    45,   -10,   128,
     128,    79,   -29,  -136,   -29,   -29,   -41,    92,    47,    37,
      52,   104,    71,    65,  -136,  -136,  -136,   -21,   128,   116,
     101,   117,   127,    27,   -42,  -136,   -25,   118,    45,    94,
    -136,    88,  -136,    90,   -41,  -136,  -136,    45,   -41,   -41,
    -136,   -41,  -136,    98,  -136,  -136,   128,   127,  -136,   -41,
    -136,    99,   113,    45,   138,   147,  -136,  -136,  -136,  -136,
    -136,  -136,   -41,    67,   -41,   -41,   -41,  -136,   -41,    45,
     115,   154,   125,   -29,   -29,   121,  -136,  -136,  -136,   120,
     170,   122,   -41,   123,  -136,  -136,   130,   109,   128,   128,
    -136,   -41,   -41,   -42,   -42,   -42,   131,   126,   136,   168,
      45,   178,   139,  -136,  -136,   140,   186,  -136,  -136,  -136,
      45,  -136,    45,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
     -41,  -136,    45,  -136,  -136,   128,   128,   -41,  -136,  -136,
     183,  -136,  -136,  -136,   143,   141,  -136,   -29,  -136,   155,
     -41,   185,    45,   145,   187,    45,  -136,  -136
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     2,    87,     0,     1,     3,     0,    12,
       0,     0,     0,    13,     0,     5,     0,     0,    12,     6,
       9,     0,    14,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,    25,    35,    38,     0,     0,     0,     0,
      84,     0,     0,     0,    50,    51,    75,     0,     0,     0,
      41,    45,     0,    63,    68,    76,    84,     0,    31,     0,
      21,    36,    22,    39,     0,    26,     4,     7,     0,     0,
      24,     0,    10,     0,    54,    55,     0,     0,    78,     0,
      79,     0,     0,    27,    42,    46,    58,    61,    62,    57,
      59,    60,     0,    64,     0,     0,     0,    69,    81,    29,
       0,     0,     0,    35,    38,     0,     8,    23,    15,     0,
       0,     0,     0,     0,    52,    77,     0,     0,     0,     0,
      49,     0,     0,    70,    70,    70,    82,     0,     0,     0,
      31,     0,     0,    37,    40,    85,     0,    56,    53,    80,
      27,    16,    27,    44,    48,    67,    66,    71,    73,    72,
      81,    74,    29,    18,    32,     0,     0,     0,    11,    28,
       0,    83,    30,    19,     0,     0,    17,     0,    86,     0,
       0,     0,    33,     0,     0,    33,    20,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,   203,  -136,    21,   142,  -136,  -136,   -26,  -135,    58,
      77,    36,   110,   111,   -24,  -136,    96,  -136,    97,   144,
      42,  -136,    15,   -53,    13,    68,    -7,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    10,    37,    11,    12,   116,   117,   129,
     101,   174,    60,    62,    49,    84,    50,    85,    51,    92,
      52,    93,    53,    97,    54,   127,    55,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    38,    41,    -5,    -5,   159,    57,   160,    13,     4,
      46,    47,    94,    95,    13,    16,    22,    13,    17,     1,
      39,     4,    64,    96,    81,    59,    40,    61,    63,     4,
      78,    40,   100,    40,    40,    71,    19,     9,    98,    23,
      80,    38,    79,     6,     4,     8,    40,     4,     4,    15,
      42,    39,   111,   -12,    20,    21,   -12,    40,    29,    14,
      39,    18,    30,    31,    32,    24,    40,    33,    34,    35,
     147,   148,   149,   128,    26,    36,    39,    25,    65,   -65,
     -65,    70,    40,    68,    27,    77,    69,     4,    46,    47,
      82,    28,    39,    74,    75,     4,    61,    63,    40,    58,
      64,    66,    40,    40,   100,    67,   105,   123,   124,   125,
     107,   108,    71,   109,    72,     4,    46,    47,    82,   121,
     122,   113,    73,    39,   141,   142,   128,   -43,    76,    40,
      83,   163,   164,    39,   120,    39,   145,   146,    99,    40,
     126,    40,   -47,   102,    86,    39,   173,    87,    88,   173,
     103,    40,   104,    89,   138,    43,    44,    45,    86,   110,
     169,    87,    88,   114,   118,    39,    40,    89,    39,    90,
      91,    40,   119,   130,    40,   131,   132,   115,     4,    46,
      47,   135,   136,    90,    91,   115,   137,   139,   140,   153,
     151,    48,   126,   150,   152,   155,   158,   156,   166,   165,
     157,   167,   168,   175,   170,   172,     7,   154,   176,   106,
     162,   177,   171,   133,   143,   134,   144,     0,   161,     0,
       0,   112
};

static const yytype_int16 yycheck[] =
{
       1,    27,    12,     5,     7,   140,    30,   142,     9,    50,
      51,    52,    54,    55,    15,    59,    17,    18,    62,     3,
      27,    50,    63,    65,    48,    32,    27,    34,    35,    50,
      51,    32,    58,    34,    35,    60,    15,     4,    63,    18,
      47,    67,    63,     0,    50,    58,    47,    50,    50,    58,
      60,    58,    76,    59,    10,    11,    62,    58,    13,     5,
      67,     6,    17,    18,    19,    60,    67,    22,    23,    24,
     123,   124,   125,    99,    51,    30,    83,     7,    36,    52,
      53,    39,    83,    46,     8,    43,    49,    50,    51,    52,
      48,    61,    99,    28,    29,    50,   103,   104,    99,    20,
      63,     9,   103,   104,   130,    58,    64,    94,    95,    96,
      68,    69,    60,    71,    10,    50,    51,    52,    76,    52,
      53,    79,    51,   130,    15,    16,   152,    26,    63,   130,
      14,   155,   156,   140,    92,   142,   121,   122,    20,   140,
      98,   142,    25,    49,    31,   152,   172,    34,    35,   175,
      62,   152,    62,    40,   112,    27,    28,    29,    31,    61,
     167,    34,    35,    64,    26,   172,   167,    40,   175,    56,
      57,   172,    25,    58,   175,    21,    51,    64,    50,    51,
      52,    61,    12,    56,    57,    64,    64,    64,    58,    21,
      64,    63,   150,    62,    58,    17,    10,    58,    15,   157,
      60,    58,    61,    58,    49,    20,     3,   130,    21,    67,
     152,   175,   170,   103,   118,   104,   119,    -1,   150,    -1,
      -1,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    67,    68,    50,    93,     0,    67,    58,     4,
      69,    71,    72,    93,     5,    58,    59,    62,     6,    69,
      10,    11,    93,    69,    60,     7,    51,     8,    61,    13,
      17,    18,    19,    22,    23,    24,    30,    70,    73,    92,
      93,    12,    60,    27,    28,    29,    51,    52,    63,    80,
      82,    84,    86,    88,    90,    92,    93,    80,    20,    92,
      78,    92,    79,    92,    63,    86,     9,    58,    46,    49,
      86,    60,    10,    51,    28,    29,    63,    86,    51,    63,
      92,    80,    86,    14,    81,    83,    31,    34,    35,    40,
      56,    57,    85,    87,    54,    55,    65,    89,    63,    20,
      73,    76,    49,    62,    62,    86,    70,    86,    86,    86,
      61,    80,    85,    86,    64,    64,    73,    74,    26,    25,
      86,    52,    53,    90,    90,    90,    86,    91,    73,    75,
      58,    21,    51,    78,    79,    61,    12,    64,    86,    64,
      58,    15,    16,    82,    84,    88,    88,    89,    89,    89,
      62,    64,    58,    21,    76,    17,    58,    60,    10,    74,
      74,    91,    75,    80,    80,    86,    15,    58,    61,    92,
      49,    86,    20,    73,    77,    58,    21,    77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    68,    69,    69,    70,    70,    71,
      71,    71,    72,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    78,    79,    79,
      79,    80,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    86,    86,    87,    87,    87,    88,    88,
      89,    89,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    92,    92,    92,    93
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,    12,     0,     3,     0,     3,     3,
       8,    11,     0,     1,     3,     3,     5,     7,     5,     6,
      13,     2,     2,     3,     2,     1,     2,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     1,     3,     0,     1,
       3,     1,     2,     0,     3,     1,     2,     0,     3,     3,
       1,     1,     3,     4,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     3,     3,     1,     2,
       0,     3,     3,     3,     4,     1,     1,     3,     2,     2,
       4,     0,     1,     3,     1,     4,     7,     1
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
#line 26 "project1.y" /* yacc.c:1646  */
    {printf("PROGRAM -> EPSILON\n");}
#line 1400 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 27 "project1.y" /* yacc.c:1646  */
    {printf("PROGRAM -> FUNCTIONRULE PROGRAM\n");}
#line 1406 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 30 "project1.y" /* yacc.c:1646  */
    {printf("FUNCTIONRULE -> FUNCTION IDENTIFIERRULE ; BEGIN_PARAMS FUNCTIONRECRULE END_PARAMS BEGIN_LOCALS FUNCTIONRECRULE END_LOCALS BEGIN_BODY FUNCTIONREC2RULE END_BODY\n");}
#line 1412 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 33 "project1.y" /* yacc.c:1646  */
    {printf("FUNCTIONRECRULE -> EPSILON\n");}
#line 1418 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 34 "project1.y" /* yacc.c:1646  */
    {printf("FUNCTIONRECRULE -> DECLARATION ; FUNCTIONRECRULE\n");}
#line 1424 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 37 "project1.y" /* yacc.c:1646  */
    {printf("FUNCTIONREC2RULE -> EPSILON\n");}
#line 1430 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 38 "project1.y" /* yacc.c:1646  */
    {printf("FUNCTIONREC2RULE -> STATEMENT ; FUNCTIONREC2RULE\n");}
#line 1436 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 41 "project1.y" /* yacc.c:1646  */
    {printf("DECLARATION -> DECLARATIONREC : INTEGER\n");}
#line 1442 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 42 "project1.y" /* yacc.c:1646  */
    {printf("DECLARATION -> DECLARATIONREC : ARRAY [ NUMBER ] OF INTEGER\n");}
#line 1448 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 43 "project1.y" /* yacc.c:1646  */
    {printf("DECLARATION -> DECLARATIONREC : ARRAY [ NUMBER ] [ NUMBER ] OF INTEGER\n");}
#line 1454 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 46 "project1.y" /* yacc.c:1646  */
    {printf("DECLARATIONREC -> EPSILON\n");}
#line 1460 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 47 "project1.y" /* yacc.c:1646  */
    {printf("DECLARATIONREC -> IDENTIFIERRULE\n");}
#line 1466 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 48 "project1.y" /* yacc.c:1646  */
    {printf("DECLARATIONREC -> DECLARATIONREC , IDENTIFIERRULE\n");}
#line 1472 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 51 "project1.y" /* yacc.c:1646  */
    {printf("STATEMENT -> VAR := EXPRESSION\n");}
#line 1478 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 52 "project1.y" /* yacc.c:1646  */
    {printf("STATEMENT -> IF BOOLEXPRESSION THEN IFREC ENDIF\n");}
#line 1484 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 53 "project1.y" /* yacc.c:1646  */
    {printf("STATEMENT -> IF BOOLEXPRESSION THEN IFREC ELSE IFREC ENDIF\n");}
#line 1490 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 54 "project1.y" /* yacc.c:1646  */
    {printf("STATEMENT -> WHILE BOOLEXPRESSION BEGINLOOP WHILEREC ENDLOOP\n");}
#line 1496 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 55 "project1.y" /* yacc.c:1646  */
    {printf("STATEMENT -> DO BEGINLOOP DOREC ENDLOOP WHILE BOOLEXPRESSION\n");}
#line 1502 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 56 "project1.y" /* yacc.c:1646  */
    {printf("statement -> FOR VAR := NUMBER ; BOOLEXPRESSION ; VAR := EXPRESSION BEGINLOOP FORREC ENDLOOP\n");}
#line 1508 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 57 "project1.y" /* yacc.c:1646  */
    {printf("STATEMENT -> READ READREC\n");}
#line 1514 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 58 "project1.y" /* yacc.c:1646  */
    {printf("STATEMENT -> WRITE WRITEREC\n");}
#line 1520 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 59 "project1.y" /* yacc.c:1646  */
    {printf("STATEMENT -> VAR , EXPRESSION\n");}
#line 1526 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 60 "project1.y" /* yacc.c:1646  */
    {printf("STATEMENT -> VAR EXPRESSION\n");}
#line 1532 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 61 "project1.y" /* yacc.c:1646  */
    {printf("STATEMENT -> CONTINUE\n");}
#line 1538 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 62 "project1.y" /* yacc.c:1646  */
    {printf("STATEMENT -> RETURN EXPRESSION\n");}
#line 1544 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 65 "project1.y" /* yacc.c:1646  */
    {printf("IFREC -> EPSILON\n");}
#line 1550 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 66 "project1.y" /* yacc.c:1646  */
    {printf("IFREC -> STATEMENT ; IFREC\n");}
#line 1556 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 69 "project1.y" /* yacc.c:1646  */
    {printf("WHILEREC -> EPSILON\n");}
#line 1562 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 70 "project1.y" /* yacc.c:1646  */
    {printf("WHILEREC -> STATEMENT ; WHILEREC\n");}
#line 1568 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 73 "project1.y" /* yacc.c:1646  */
    {printf("DOREC -> EPSILON\n");}
#line 1574 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 74 "project1.y" /* yacc.c:1646  */
    {printf("DOREC -> STATEMENT ; DOREC\n");}
#line 1580 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 77 "project1.y" /* yacc.c:1646  */
    {printf("FORREC -> EPSILON\n");}
#line 1586 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 78 "project1.y" /* yacc.c:1646  */
    {printf("FORREC -> STATEMENT ; FORREC\n");}
#line 1592 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 81 "project1.y" /* yacc.c:1646  */
    {printf("READREC -> EPSILON\n");}
#line 1598 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 82 "project1.y" /* yacc.c:1646  */
    {printf("READREC -> VAR\n");}
#line 1604 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 83 "project1.y" /* yacc.c:1646  */
    {printf("READREC -> VAR , READREAC\n");}
#line 1610 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 86 "project1.y" /* yacc.c:1646  */
    {printf("WRITEREC -> EPSILON\n");}
#line 1616 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 87 "project1.y" /* yacc.c:1646  */
    {printf("WRITEREC -> VAR\n");}
#line 1622 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 88 "project1.y" /* yacc.c:1646  */
    {printf("WRITEREC -> VAR , WRITEREC\n");}
#line 1628 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 91 "project1.y" /* yacc.c:1646  */
    {printf("BOOLEXPRESSION -> RELATIONANDEXPRESSION\n");}
#line 1634 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 92 "project1.y" /* yacc.c:1646  */
    {printf("BOOLEXPRESSION -> RELATIONANDEXPRESSION BOOLEXPRESSIONREC\n");}
#line 1640 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 95 "project1.y" /* yacc.c:1646  */
    {printf("BOOLEXPRESSIONREC -> EPSILON\n");}
#line 1646 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 96 "project1.y" /* yacc.c:1646  */
    {printf("BOOLEXPRESSIONREC -> BOOLEXPRESSIONREC OR RELATIONANDEXPRESSION\n");}
#line 1652 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 99 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONANDEXPRESSION -> RELATIONEXPRESSION\n");}
#line 1658 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 100 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONANDEXPRESSION -> RELATIONEXPRESSION RELATIONANDEXPRESSIONREC\n");}
#line 1664 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 103 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONANDEXPRESSIONREC -> EPSILON\n");}
#line 1670 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 104 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONANDEXPRESSIONREC -> RELATIONANDEXPRESSIONREC AND RELATIONEXPRESSION\n");}
#line 1676 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 107 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONEXPRESSION -> EXPRESSION COMPARATOR EXPRESSION\n");}
#line 1682 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 108 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONEXPRESSION -> TRUE\n");}
#line 1688 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 109 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONEXPRESSION -> FALSE\n");}
#line 1694 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 110 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONEXPRESSION -> ( BOOLEXPRESSION )\n");}
#line 1700 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 111 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONEXPRESSION -> NOT EXPRESSION COMPARATOR EXPRESSION\n");}
#line 1706 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 112 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONEXPRESSION -> NOT TRUE\n");}
#line 1712 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 113 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONEXPRESSION -> NOT FALSE\n");}
#line 1718 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 114 "project1.y" /* yacc.c:1646  */
    {printf("RELATIONEXPRESSION -> NOT ( BOOLEXPRESSION )\n");}
#line 1724 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 116 "project1.y" /* yacc.c:1646  */
    {printf("COMPARATOR -> ==\n");}
#line 1730 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 117 "project1.y" /* yacc.c:1646  */
    {printf("COMPARATOR -> !=\n");}
#line 1736 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 118 "project1.y" /* yacc.c:1646  */
    {printf("COMPARATOR -> <\n");}
#line 1742 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 119 "project1.y" /* yacc.c:1646  */
    {printf("COMPARATOR -> >\n");}
#line 1748 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 120 "project1.y" /* yacc.c:1646  */
    {printf("COMPARATOR -> <=\n");}
#line 1754 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 121 "project1.y" /* yacc.c:1646  */
    {printf("COMPARATOR -> >=\n");}
#line 1760 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 124 "project1.y" /* yacc.c:1646  */
    {printf("EXPRESSION -> MULTIPLICATIVEEXPRESSION\n");}
#line 1766 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 125 "project1.y" /* yacc.c:1646  */
    {printf("EXPRESSION -> MULTIPLICATIVEEXPRESSION EXPRESSIONREC\n");}
#line 1772 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 128 "project1.y" /* yacc.c:1646  */
    {printf("EXPRESSIONREC -> EPSILON\n");}
#line 1778 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 129 "project1.y" /* yacc.c:1646  */
    {printf("EXPRESSINOREC -> EXPRESSIONREC + MULTIPLICATIVEEXPRESSION\n");}
#line 1784 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 130 "project1.y" /* yacc.c:1646  */
    {printf("EXPRESSIONREC -> EXPRESSIONREC - MULTIPLICATIVEEXPRESSION\n");}
#line 1790 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 133 "project1.y" /* yacc.c:1646  */
    {printf("MULTIPLICATIVEEXPRESSION -> TERM\n");}
#line 1796 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 134 "project1.y" /* yacc.c:1646  */
    {printf("MULTIPLICATIVEEXPRESSION -> TERM MULTIPLICATIVEEXPRESSIONTERM\n");}
#line 1802 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 137 "project1.y" /* yacc.c:1646  */
    {printf("MULTIPLICATIVEEXPRESSIONTERM -> EPSILON\n");}
#line 1808 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 138 "project1.y" /* yacc.c:1646  */
    {printf("MULTIPLICATIVEEXPRESSIONTERM -> * TERM MULTIPLICATIVEEXPRESSIONTERM\n");}
#line 1814 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 139 "project1.y" /* yacc.c:1646  */
    {printf("MULTIPLICATIVEEXPRESSIONTERM -> / TERM MULTIPLICATIVEEXPRESSIONTERM\n");}
#line 1820 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 140 "project1.y" /* yacc.c:1646  */
    {printf("MULTIPLICATIVEEXPRESSIONTERM -> % TERM MULTIPLICATIVEEXPRESSIONTERM\n");}
#line 1826 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 143 "project1.y" /* yacc.c:1646  */
    {printf("TERM -> IDENTIFIERRULE ( TERMEXP )\n");}
#line 1832 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 144 "project1.y" /* yacc.c:1646  */
    {printf("TERM -> NUMBER\n");}
#line 1838 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 145 "project1.y" /* yacc.c:1646  */
    {printf("TERM -> VAR\n");}
#line 1844 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 146 "project1.y" /* yacc.c:1646  */
    {printf("TERM -> ( EXPRESSION )\n");}
#line 1850 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 147 "project1.y" /* yacc.c:1646  */
    {printf("TERM -> - NUMBER\n");}
#line 1856 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 148 "project1.y" /* yacc.c:1646  */
    {printf("TERM -> - VAR\n");}
#line 1862 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 149 "project1.y" /* yacc.c:1646  */
    {printf("TERM -> - ( EXPRESSION )\n");}
#line 1868 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 153 "project1.y" /* yacc.c:1646  */
    {printf("TERMEXP -> EPSILON\n");}
#line 1874 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 154 "project1.y" /* yacc.c:1646  */
    {printf("TERMEXP -> EXPRESSION\n");}
#line 1880 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 155 "project1.y" /* yacc.c:1646  */
    {printf("TERMEXP -> EXPRESSION , TERMEXP\n");}
#line 1886 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 158 "project1.y" /* yacc.c:1646  */
    {printf("VAR -> IDENTIFIERRULE\n");}
#line 1892 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 159 "project1.y" /* yacc.c:1646  */
    {printf("VAR -> IDENTIFIERRULE [ EXPRESSION ]\n");}
#line 1898 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 160 "project1.y" /* yacc.c:1646  */
    {printf("VAR -> IDENTIFIERRULE [ EXPRESSION ] [ EXPRESSION ]\n");}
#line 1904 "project1.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 164 "project1.y" /* yacc.c:1646  */
    {printf("IDENTIFIERRULE -> IDENTIFIER %s\n",(yyvsp[0].str_value));}
#line 1910 "project1.tab.c" /* yacc.c:1646  */
    break;


#line 1914 "project1.tab.c" /* yacc.c:1646  */
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
#line 166 "project1.y" /* yacc.c:1906  */



int main(int argc,char** argv)
{
   yyparse();
   return 0;
}

int yyerror(char *s)
{
   extern int currLine, currPos;
   extern char* yytext;
   printf("Bison error: %s, with symbol \"%s\", at line %d on column %d \n",s,yytext,currLine,currPos);
   return 0;
}
