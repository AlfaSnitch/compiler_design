
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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

/* Line 189 of yacc.c  */
#line 1 "parser.y"

    #include<stdio.h>
    #include<math.h>
    #include<string.h>
    #include<limits.h>
    #include<float.h>
    #include<bits/stdc++.h>
    using namespace std;

    void yyerror(char *);
    extern int yylex();
    //extern int yyparse();
    extern FILE *yyin;
    extern FILE *yyout;

    map<string,string> var_type;
    map<string,int> var_i;
    map<string,bool> var_b;
    map<string,double> var_d;
    map<string,char> var_c;
    map<string,string> var_s;


/* Line 189 of yacc.c  */
#line 97 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDEN = 258,
     IMPORT = 259,
     DOUBLE = 260,
     INT = 261,
     STRING = 262,
     INTD = 263,
     DOUBLED = 264,
     BOOLD = 265,
     DIV = 266,
     MUL = 267,
     PLUS = 268,
     BOOL = 269,
     MINUS = 270,
     REM = 271,
     STRINGD = 272,
     CHAR = 273,
     CHARD = 274,
     FUNC = 275,
     VOID = 276,
     FOR = 277,
     WHILE = 278,
     COMMA = 279,
     DOT = 280,
     SEMIC = 281,
     ASSOP = 282,
     LP = 283,
     RP = 284,
     LCUR = 285,
     RCUR = 286,
     COLON = 287,
     GT = 288,
     LT = 289,
     GE = 290,
     LE = 291,
     EE = 292,
     NE = 293,
     IF = 294,
     ELSE = 295,
     AND = 296,
     OR = 297,
     UMINUS = 298,
     FCALL = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 24 "parser.y"

    struct alltype{
        char sval[1000];
        int ival;
        double dval;
        int bval;
        char cval;
    } anytype;



/* Line 214 of yacc.c  */
#line 189 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 201 "parser.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   406

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  224

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    14,    17,    19,
      21,    23,    33,    41,    43,    46,    49,    51,    60,    61,
      63,    73,    78,    80,    82,    84,    88,    92,    96,   100,
     104,   108,   109,   111,   115,   119,   121,   125,   128,   130,
     132,   134,   136,   138,   140,   146,   150,   152,   158,   162,
     168,   172,   174,   180,   184,   190,   194,   200,   204,   206,
     212,   216,   222,   226,   228,   234,   238,   249,   252,   257,
     258,   260,   262,   264,   268,   272,   276,   280,   284,   288,
     290,   292,   294,   296,   298,   300,   302,   305,   309,   313,
     315,   319,   323,   327,   329,   331,   333,   337,   342,   343,
     345,   347,   349,   351,   353,   357,   361,   365,   369,   373,
     375,   377
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    -1,    46,    47,    -1,    60,    -1,    61,
      -1,    73,    26,    -1,    56,    26,    -1,    53,    -1,    48,
      -1,    49,    -1,    22,    28,    50,    51,    52,    29,    30,
      46,    31,    -1,    23,    28,    56,    29,    30,    46,    31,
      -1,    61,    -1,    73,    26,    -1,    56,    26,    -1,    73,
      -1,    39,    28,    56,    29,    30,    46,    31,    54,    -1,
      -1,    55,    -1,    40,    39,    28,    56,    29,    30,    46,
      31,    54,    -1,    40,    30,    46,    31,    -1,    78,    -1,
      57,    -1,    58,    -1,    78,    37,    78,    -1,    78,    38,
      78,    -1,    78,    33,    78,    -1,    78,    34,    78,    -1,
      78,    36,    78,    -1,    78,    35,    78,    -1,    -1,    59,
      -1,    58,    41,    59,    -1,    58,    42,    59,    -1,    57,
      -1,    28,    58,    29,    -1,     4,     3,    -1,    62,    -1,
      64,    -1,    66,    -1,    67,    -1,    69,    -1,    71,    -1,
       6,     3,    27,    78,    63,    -1,     6,     3,    63,    -1,
      26,    -1,    24,     3,    27,    78,    63,    -1,    24,     3,
      63,    -1,     5,     3,    27,    78,    65,    -1,     5,     3,
      65,    -1,    26,    -1,    24,     3,    27,    78,    65,    -1,
      24,     3,    65,    -1,     7,     3,    27,    17,    26,    -1,
       7,     3,    26,    -1,    14,     3,    27,    78,    68,    -1,
      14,     3,    68,    -1,    26,    -1,    24,     3,    27,    78,
      68,    -1,    24,     3,    68,    -1,    18,     3,    27,    19,
      70,    -1,    18,     3,    70,    -1,    26,    -1,    24,     3,
      27,    19,    70,    -1,    24,     3,    70,    -1,    20,     3,
      28,    72,    29,    32,    77,    30,    46,    31,    -1,    77,
       3,    -1,    77,     3,    24,    72,    -1,    -1,    74,    -1,
      75,    -1,    76,    -1,    74,    24,    73,    -1,    75,    24,
      73,    -1,    76,    24,    73,    -1,     3,    27,    78,    -1,
       3,    27,    17,    -1,     3,    27,    19,    -1,     6,    -1,
       5,    -1,     7,    -1,    18,    -1,    14,    -1,    21,    -1,
      79,    -1,    15,    78,    -1,    78,    13,    79,    -1,    78,
      15,    79,    -1,    80,    -1,    79,    12,    80,    -1,    79,
      11,    80,    -1,    79,    16,    80,    -1,    83,    -1,    81,
      -1,     3,    -1,    28,    78,    29,    -1,     3,    28,    82,
      29,    -1,    -1,     8,    -1,     9,    -1,    10,    -1,    17,
      -1,    19,    -1,     8,    24,    82,    -1,     9,    24,    82,
      -1,    10,    24,    82,    -1,    17,    24,    82,    -1,    19,
      24,    82,    -1,     8,    -1,     9,    -1,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    50,    50,    51,    55,    56,    57,    58,    59,    60,
      61,    65,    71,    77,    78,    82,    86,    90,    95,    96,
      97,   103,   109,   110,   111,   115,   116,   117,   118,   119,
     120,   123,   124,   125,   126,   130,   131,   135,   141,   142,
     143,   144,   145,   146,   150,   161,   174,   175,   186,   199,
     210,   223,   224,   235,   248,   259,   272,   285,   298,   299,
     312,   325,   336,   349,   350,   361,   374,   388,   401,   416,
     417,   418,   419,   420,   421,   422,   426,   449,   465,   481,
     482,   483,   484,   485,   486,   490,   494,   498,   502,   509,
     513,   517,   521,   528,   532,   533,   559,   566,   585,   586,
     586,   586,   586,   586,   587,   588,   589,   590,   591,   595,
     599,   603
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDEN", "IMPORT", "DOUBLE", "INT",
  "STRING", "INTD", "DOUBLED", "BOOLD", "DIV", "MUL", "PLUS", "BOOL",
  "MINUS", "REM", "STRINGD", "CHAR", "CHARD", "FUNC", "VOID", "FOR",
  "WHILE", "COMMA", "DOT", "SEMIC", "ASSOP", "LP", "RP", "LCUR", "RCUR",
  "COLON", "GT", "LT", "GE", "LE", "EE", "NE", "IF", "ELSE", "AND", "OR",
  "UMINUS", "FCALL", "$accept", "input", "line", "for", "while", "f_first",
  "f_second", "f_third", "if", "elseif", "else", "condition", "comparison",
  "logical", "logical_term", "library", "declare", "int_declare",
  "more_int", "double_declare", "more_double", "string_declare",
  "boolean_declare", "more_bool", "char_declare", "more_char",
  "func_declare", "fargs", "assign", "int_assign", "string_assign",
  "char_assign", "type", "expr", "term", "factor", "func_call", "data",
  "number", 0
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
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    46,    47,    47,    47,    47,    47,    47,
      47,    48,    49,    50,    50,    51,    52,    53,    54,    54,
      54,    55,    56,    56,    56,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    58,    59,    59,    60,    61,    61,
      61,    61,    61,    61,    62,    62,    63,    63,    63,    64,
      64,    65,    65,    65,    66,    66,    67,    67,    68,    68,
      68,    69,    69,    70,    70,    70,    71,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    74,    75,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    78,    79,
      79,    79,    79,    80,    80,    80,    80,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    83
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     2,     1,     1,
       1,     9,     7,     1,     2,     2,     1,     8,     0,     1,
       9,     4,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     0,     1,     3,     3,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     5,     3,     1,     5,     3,     5,
       3,     1,     5,     3,     5,     3,     5,     3,     1,     5,
       3,     5,     3,     1,     5,     3,    10,     2,     4,     0,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     3,     1,
       3,     3,     3,     1,     1,     1,     3,     4,     0,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    31,     1,    95,     0,     0,     0,     0,   109,   110,
     111,     0,     0,     0,     0,     0,     0,    31,     0,     3,
       9,    10,     8,     0,    23,    24,    32,     4,     5,    38,
      39,    40,    41,    42,    43,     0,    70,    71,    72,    22,
      85,    89,    94,    93,     0,    98,    37,     0,     0,     0,
       0,    95,     0,    86,     0,     0,    69,    31,    35,     0,
       0,    31,     7,     0,     0,     6,    69,    69,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    78,    76,    99,   100,   101,   102,   103,     0,     0,
      51,     0,    50,     0,    46,     0,    45,    55,     0,     0,
      58,     0,    57,     0,     0,    63,     0,    62,     0,     0,
      31,    13,     0,     0,    36,    96,     0,    33,     0,    34,
      73,    74,    75,    87,    88,    27,    28,    30,    29,    25,
      26,    91,    90,    92,    98,    98,    98,    98,    98,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      79,    81,    83,    82,    84,     0,     0,    69,     0,    14,
       0,     0,   104,   105,   106,   107,   108,     0,    53,    49,
       0,    48,    44,    54,     0,    60,    56,     0,    65,    61,
       0,    67,     0,    16,    15,     2,     2,     0,     0,     0,
       0,     0,     0,     0,    31,    31,    52,    47,    59,    64,
       0,    68,     2,    12,    18,     2,    31,     0,    17,    19,
      31,    11,     2,     0,    66,    31,    31,    21,     0,     0,
       2,    31,    18,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    19,    20,    21,   110,   157,   182,    22,   208,
     209,    23,    24,    25,    26,    27,    28,    29,    96,    30,
      92,    31,    32,   102,    33,   107,    34,   155,    35,    36,
      37,    38,   156,    39,    40,    41,    42,    88,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -168
static const yytype_int16 yypact[] =
{
    -168,    87,  -168,    84,     6,     9,    17,    20,  -168,  -168,
    -168,    24,   364,    36,    43,    29,    38,   378,    60,  -168,
    -168,  -168,  -168,    52,    83,    88,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,    59,    79,   116,   118,   325,
      57,  -168,  -168,  -168,   361,   176,  -168,    50,   130,   121,
     170,   123,   364,  -168,   200,   131,    23,   378,  -168,   -25,
     319,   378,  -168,   378,   378,  -168,   146,   146,   146,    72,
      72,   364,   364,   364,   364,   364,   364,    72,    72,    72,
    -168,  -168,    71,   136,   147,   148,   149,   152,   158,   174,
    -168,   364,  -168,   186,  -168,   364,  -168,  -168,   181,   205,
    -168,   364,  -168,    21,   206,  -168,   191,  -168,   132,   187,
     378,  -168,   190,   184,  -168,  -168,   189,  -168,   325,  -168,
    -168,  -168,  -168,    57,    57,    71,    71,    71,    71,    71,
      71,  -168,  -168,  -168,   176,   176,   176,   176,   176,  -168,
     237,    18,   242,   119,   195,   274,   166,   279,    82,  -168,
    -168,  -168,  -168,  -168,  -168,   193,   220,   146,   208,  -168,
     215,   216,  -168,  -168,  -168,  -168,  -168,   364,  -168,  -168,
     364,  -168,  -168,  -168,   364,  -168,  -168,   228,  -168,  -168,
     203,   226,   222,  -168,  -168,  -168,  -168,    18,   119,   166,
      82,   132,   132,   223,   113,   160,  -168,  -168,  -168,  -168,
     225,  -168,  -168,  -168,   218,  -168,   197,    19,  -168,  -168,
     234,  -168,  -168,   231,  -168,   271,   378,  -168,   238,   230,
    -168,   308,   218,  -168
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -167,  -168,  -168,  -168,  -168,  -168,  -168,  -168,    48,
    -168,   -55,   -16,   254,    35,  -168,   227,  -168,  -132,  -168,
    -133,  -168,  -168,  -124,  -168,  -123,  -168,    80,   -53,  -168,
    -168,  -168,    91,   -12,    44,    -7,  -168,    95,  -168
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -36
static const yytype_int16 yytable[] =
{
      53,    58,   113,   112,   114,    60,   116,   168,   169,    46,
     171,   172,    47,   120,   121,   122,    63,    64,   194,   195,
      48,   175,   176,    49,   178,   179,   109,    50,     5,     6,
       7,    69,    82,    70,    69,   206,    70,    11,   210,    54,
     103,    13,    89,    14,    90,   215,    55,    58,    58,   212,
     115,   118,   118,   221,   196,   158,   197,    56,   213,   125,
     126,   127,   128,   129,   130,   198,    57,   199,    77,    78,
     131,   132,   133,    79,    89,    51,    90,    91,    62,   141,
       8,     9,    10,   143,    69,    65,    70,     2,    61,   146,
       3,     4,     5,     6,     7,     8,     9,    10,   117,   119,
      52,    11,    12,    66,   183,    13,   104,    14,   105,    15,
      16,    44,    45,   123,   124,    17,     3,     4,     5,     6,
       7,     8,     9,    10,   -35,   -35,    18,    11,    12,    63,
      64,    13,    69,    14,    70,    15,    16,   149,   150,   151,
      67,    17,    68,    93,   203,    94,   152,    97,    98,   109,
     153,    45,    18,   154,    93,   187,    94,    95,   188,   108,
     134,   218,   189,     3,     4,     5,     6,     7,     8,     9,
      10,   135,   136,   137,    11,    12,   138,   140,    13,    69,
      14,    70,    15,    16,    83,    84,    85,   139,    17,   142,
      99,   204,   100,    86,    99,    87,   100,   101,   144,    18,
       3,     4,     5,     6,     7,     8,     9,    10,   145,   147,
     148,    11,    12,   160,    44,    13,   159,    14,   161,    15,
      16,   173,   180,   181,   104,    17,   105,   106,   211,   162,
     163,   164,   165,   166,   184,   191,    18,     3,     4,     5,
       6,     7,     8,     9,    10,   185,   186,   190,    11,    12,
     192,   193,    13,   202,    14,   205,    15,    16,   207,   216,
     220,    89,    17,    90,   167,   214,    93,   219,    94,   170,
     223,    59,   201,    18,     3,     4,     5,     6,     7,     8,
       9,    10,   200,   111,     0,    11,    12,     0,     0,    13,
       0,    14,     0,    15,    16,     0,     0,     0,    99,    17,
     100,   174,   217,   104,     0,   105,   177,     0,     0,     0,
      18,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,     0,    11,    12,     0,     0,    13,     0,    14,     0,
      15,    16,    69,     0,    70,     0,    17,     0,    69,   222,
      70,     0,     0,     0,     0,     0,     0,    18,   115,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    71,    72,
      73,    74,    75,    76,    51,     0,     0,    51,     0,     8,
       9,    10,     8,     9,    10,     0,    12,     0,    80,    12,
      81,    51,     0,     0,     0,     0,     8,     9,    10,    52,
       0,     0,    52,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17
};

static const yytype_int16 yycheck[] =
{
      12,    17,    57,    56,    29,    17,    61,   140,   141,     3,
     142,   143,     3,    66,    67,    68,    41,    42,   185,   186,
       3,   145,   146,     3,   147,   148,     3,     3,     5,     6,
       7,    13,    44,    15,    13,   202,    15,    14,   205,     3,
      52,    18,    24,    20,    26,   212,     3,    63,    64,    30,
      29,    63,    64,   220,   187,   110,   188,    28,    39,    71,
      72,    73,    74,    75,    76,   189,    28,   190,    11,    12,
      77,    78,    79,    16,    24,     3,    26,    27,    26,    91,
       8,     9,    10,    95,    13,    26,    15,     0,    28,   101,
       3,     4,     5,     6,     7,     8,     9,    10,    63,    64,
      28,    14,    15,    24,   157,    18,    24,    20,    26,    22,
      23,    27,    28,    69,    70,    28,     3,     4,     5,     6,
       7,     8,     9,    10,    41,    42,    39,    14,    15,    41,
      42,    18,    13,    20,    15,    22,    23,     5,     6,     7,
      24,    28,    24,    24,    31,    26,    14,    26,    27,     3,
      18,    28,    39,    21,    24,   167,    26,    27,   170,    28,
      24,   216,   174,     3,     4,     5,     6,     7,     8,     9,
      10,    24,    24,    24,    14,    15,    24,     3,    18,    13,
      20,    15,    22,    23,     8,     9,    10,    29,    28,     3,
      24,    31,    26,    17,    24,    19,    26,    27,    17,    39,
       3,     4,     5,     6,     7,     8,     9,    10,     3,     3,
      19,    14,    15,    29,    27,    18,    26,    20,    29,    22,
      23,    26,    29,     3,    24,    28,    26,    27,    31,   134,
     135,   136,   137,   138,    26,    32,    39,     3,     4,     5,
       6,     7,     8,     9,    10,    30,    30,    19,    14,    15,
      24,    29,    18,    30,    20,    30,    22,    23,    40,    28,
      30,    24,    28,    26,    27,    31,    24,    29,    26,    27,
     222,    17,   192,    39,     3,     4,     5,     6,     7,     8,
       9,    10,   191,    56,    -1,    14,    15,    -1,    -1,    18,
      -1,    20,    -1,    22,    23,    -1,    -1,    -1,    24,    28,
      26,    27,    31,    24,    -1,    26,    27,    -1,    -1,    -1,
      39,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    -1,    -1,    18,    -1,    20,    -1,
      22,    23,    13,    -1,    15,    -1,    28,    -1,    13,    31,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    39,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    33,    34,
      35,    36,    37,    38,     3,    -1,    -1,     3,    -1,     8,
       9,    10,     8,     9,    10,    -1,    15,    -1,    17,    15,
      19,     3,    -1,    -1,    -1,    -1,     8,     9,    10,    28,
      -1,    -1,    28,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    14,    15,    18,    20,    22,    23,    28,    39,    47,
      48,    49,    53,    56,    57,    58,    59,    60,    61,    62,
      64,    66,    67,    69,    71,    73,    74,    75,    76,    78,
      79,    80,    81,    83,    27,    28,     3,     3,     3,     3,
       3,     3,    28,    78,     3,     3,    28,    28,    57,    58,
      78,    28,    26,    41,    42,    26,    24,    24,    24,    13,
      15,    33,    34,    35,    36,    37,    38,    11,    12,    16,
      17,    19,    78,     8,     9,    10,    17,    19,    82,    24,
      26,    27,    65,    24,    26,    27,    63,    26,    27,    24,
      26,    27,    68,    78,    24,    26,    27,    70,    28,     3,
      50,    61,    73,    56,    29,    29,    56,    59,    78,    59,
      73,    73,    73,    79,    79,    78,    78,    78,    78,    78,
      78,    80,    80,    80,    24,    24,    24,    24,    24,    29,
       3,    78,     3,    78,    17,     3,    78,     3,    19,     5,
       6,     7,    14,    18,    21,    72,    77,    51,    56,    26,
      29,    29,    82,    82,    82,    82,    82,    27,    65,    65,
      27,    63,    63,    26,    27,    68,    68,    27,    70,    70,
      29,     3,    52,    73,    26,    30,    30,    78,    78,    78,
      19,    32,    24,    29,    46,    46,    65,    63,    68,    70,
      77,    72,    30,    31,    31,    30,    46,    40,    54,    55,
      46,    31,    30,    39,    31,    46,    28,    31,    56,    29,
      30,    46,    31,    54
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
        case 11:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {
    cout << "parsing for loop\n";
;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    {
    cout << "parsing while loop\n";
;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    {
    cout << "parsing if block\n";
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {
    cout << "parsing else if block\n";
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {
    cout << "parsing else block\n";
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {
    printf("imported library: %s\n", (yyvsp[(2) - (2)].anytype).sval);
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: "<< name <<" variable of int type has already been declared" << "\n";
    }
    else {
        cout << "declared : " << name << "int, value -> " << (yyvsp[(4) - (5)].anytype).ival << "\n";
        var_type[name] = "INT";
        var_i[name] = (yyvsp[(4) - (5)].anytype).ival; // store the name of the int
    }
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": int\n";
        var_type[name] = "INT";
    }
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": int, value -> " << (yyvsp[(4) - (5)].anytype).ival << "\n";
        var_type[name] = "INT";
        var_i[name] = (yyvsp[(4) - (5)].anytype).ival;
    }
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": int\n";
        var_type[name] = "INT";
    }
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double, value -> " << (yyvsp[(4) - (5)].anytype).dval << "\n";
        var_type[name] = "DOUBLE";
        var_d[name] = (yyvsp[(4) - (5)].anytype).dval;
    }
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double\n";
        var_type[name] = "DOUBLE";
    }
;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double, value -> " << (yyvsp[(4) - (5)].anytype).dval << "\n";
        var_type[name] = "DOUBLE";
        var_d[name] = (yyvsp[(4) - (5)].anytype).dval;
    }
;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": double\n";
        var_type[name] = "double";
    }
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ":string, value -> " << (yyvsp[(4) - (5)].anytype).sval << "\n";
        var_s[name] = (yyvsp[(4) - (5)].anytype).sval;
        var_type[name] = "STRING";
    }
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ":string\n";
        var_type[name] = "STRING";
    }
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        string bval = "false";
        if ((yyvsp[(4) - (5)].anytype).ival) bval = "true";
        cout << "declared -> " << name << ": bool, value -> " << bval << "\n";
        var_type[name] = "BOOL";
        var_b[name] = (yyvsp[(4) - (5)].anytype).bval;
    }
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": bool\n";
        var_type[name] = "BOOL";
    }
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        string bval = "false";
        if ((yyvsp[(4) - (5)].anytype).ival) bval = "true";
        cout << "declared -> " << name << ": bool, value -> " << bval << "\n";
        var_type[name] = "BOOL";
        var_b[name] = (yyvsp[(4) - (5)].anytype).bval;
    }
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 312 "parser.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": bool\n";
        var_type[name] = "BOOL";
    }
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 325 "parser.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char, value -> '" << (yyvsp[(4) - (5)].anytype).cval << "'\n";
        var_type[name] = "CHAR";
        var_c[name] = (yyvsp[(4) - (5)].anytype).cval;
    }
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char\n";
        var_type[name] = "CHAR";
    }
;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char, value -> '" << (yyvsp[(4) - (5)].anytype).cval << "'\n";
        var_type[name] = "CHAR";
        var_c[name] = (yyvsp[(4) - (5)].anytype).cval;
    }
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 361 "parser.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: variable redeclaration -> " << name << "\n";
    }
    else {
        cout << "declared -> " << name << ": char\n";
        var_type[name] = "CHAR";
    }
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 374 "parser.y"
    {
    string name = (yyvsp[(2) - (10)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: redeclaration function -> " << name << "\n"; 
    }
    else {
        string ret = (yyvsp[(7) - (10)].anytype).sval;
        cout << "function -> " << name << ": return type -> " << ret << "\n";
        var_type[name] = "FUNC";
    }
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 388 "parser.y"
    {
    string name = (yyvsp[(2) - (2)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: redeclared argument -> " << name << ": " << var_type[name] <<"\n";
    }
    else {
        cout << "argument -> " << name << ": " << (yyvsp[(1) - (2)].anytype).sval<< "\n";
        var_type[name] = (yyvsp[(1) - (2)].anytype).sval;
        for (auto &it : var_type[name]) {
            it = toupper(it);
        }
    }
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 401 "parser.y"
    {
    string name = (yyvsp[(2) - (4)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "Error: redeclared argument -> " << name << ": " << var_type[name] <<"\n";
    }
    else {
        cout << "argument -> " << name << ": " << (yyvsp[(1) - (4)].anytype).sval<< "\n";
        var_type[name] = (yyvsp[(1) - (4)].anytype).sval;
        for (auto &it : var_type[name]) {
            it = toupper(it);
        }
    }
;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
    {
    string name = (yyvsp[(1) - (3)].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] == "INT"){
        var_i[name] = (yyvsp[(3) - (3)].anytype).ival;
        cout << "assignment: " << name << " -> " << (yyvsp[(3) - (3)].anytype).ival << "\n";
    }
    else if (var_type[name] == "DOUBLE") {
        var_d[name] = (yyvsp[(3) - (3)].anytype).dval;
        cout << "assignment: " << name << " -> " << (yyvsp[(3) - (3)].anytype).dval << "\n";
    }
    else if (var_type[name] == "BOOL") {
        var_b[name] = (yyvsp[(3) - (3)].anytype).bval;
        string bval = "false";
        if ((yyvsp[(3) - (3)].anytype).bval) bval = "true";
        cout << "assignment: " << name << " -> " << bval << "\n";
    }
;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 449 "parser.y"
    {
    string name = (yyvsp[(1) - (3)].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] != "STRING") {
        cout << "Error: invalid value type -> string" << "\n";
    }
    else {
        var_s[name] = (yyvsp[(3) - (3)].anytype).sval;
        cout << "assignment: " << name << " -> " << (yyvsp[(3) - (3)].anytype).sval << "\n";
    }
;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 465 "parser.y"
    {
    string name = (yyvsp[(1) - (3)].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] != "CHAR") {
        cout << "Error: invalid value type -> char" << "\n";
    }
    else {
        var_c[name] = (yyvsp[(3) - (3)].anytype).cval;
        cout << "assignment: " << name << " -> '" << (yyvsp[(3) - (3)].anytype).cval << "'\n";
    }
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 481 "parser.y"
    {strcpy((yyval.anytype).sval,"int");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 482 "parser.y"
    {strcpy((yyval.anytype).sval,"double");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 483 "parser.y"
    {strcpy((yyval.anytype).sval,"string");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 484 "parser.y"
    {strcpy((yyval.anytype).sval,"char");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 485 "parser.y"
    {strcpy((yyval.anytype).sval,"bool");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 486 "parser.y"
    {strcpy((yyval.anytype).sval,"void");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 490 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).ival;
;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 494 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(2) - (2)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(2) - (2)].anytype).ival;
;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 498 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (3)].anytype).dval + (yyvsp[(3) - (3)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (3)].anytype).ival + (yyvsp[(3) - (3)].anytype).ival;
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 502 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (3)].anytype).dval - (yyvsp[(3) - (3)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (3)].anytype).ival - (yyvsp[(1) - (3)].anytype).ival;
;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 509 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).ival;
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 513 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (3)].anytype).dval * (yyvsp[(3) - (3)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (3)].anytype).ival * (yyvsp[(1) - (3)].anytype).ival;
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 517 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (3)].anytype).dval / (yyvsp[(3) - (3)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (3)].anytype).ival / (yyvsp[(1) - (3)].anytype).ival;
;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 521 "parser.y"
    {
    (yyval.anytype).ival = (yyvsp[(1) - (3)].anytype).ival % (yyvsp[(3) - (3)].anytype).ival;
    (yyval.anytype).dval = (yyval.anytype).ival;
;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 528 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).ival;
;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 533 "parser.y"
    {
    string name = (yyvsp[(1) - (1)].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "Error: undeclared variable -> " << name << "\n";
    }
    else {
        if (var_type[name] == "INT") {
            (yyval.anytype).dval = var_i[name];
            (yyval.anytype).ival = var_i[name];
        }
        else if (var_type[name] == "DOUBLE") {
            (yyval.anytype).dval = var_d[name];
            (yyval.anytype).ival = var_d[name];
        }
        else if (var_type[name] == "BOOL") {
            (yyval.anytype).dval = var_b[name];
            (yyval.anytype).ival = var_b[name];
        }
        else if (var_type[name] == "STRING") {
            strcpy((yyval.anytype).sval,var_s[name].c_str());
        }
        else {
            (yyval.anytype).cval = var_c[name];
        }
    }
;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 559 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(2) - (3)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(2) - (3)].anytype).ival;
;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 566 "parser.y"
    {
    string name = (yyvsp[(1) - (4)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        if (var_type[name] != "FUNC") {
            cout << "Error: redeclared function -> " << name << "\n";
        }
        else {
            cout << "called function name -> " << name << "\n";
        }
    }
    else if (name == "min" || name == "max" || "gcd" == name || name == "input"||name=="output") {
        cout << "Called builtin function -> " << name << "\n";
    }
    else {
        cout << "Error: undeclared function -> " << name << "\n";
    }
;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 595 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).ival;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).ival;
;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 599 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).dval;
;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 603 "parser.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).bval;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).bval;
;}
    break;



/* Line 1455 of yacc.c  */
#line 2331 "parser.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 610 "parser.y"


int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    yyparse();

    return 0;
}

void yyerror(char *str) {
    fprintf(stderr, "error:%s\n", str);
}

