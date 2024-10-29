
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
#line 1 "1907004.y"

    #include<bits/stdc++.h>
    #include<stdio.h>
    #include<math.h>
    #include<string.h>
    #include<limits.h>
    #include<float.h>
    using namespace std;

    // function definition, declaration given below
    void yyerror(char *);
    // link the l file with y file
    extern int yylex();
    //extern int yyparse();

    map<string,string> var_type; // map for storing all the variable type and their names
    map<string,int> var_i; // map for stroing the int value 
    map<string,bool> var_b; // map for stroing the boolean value 
    map<string,double> var_d; // map for stroing the double value 
    map<string,char> var_c; // map for stroing the char value 
    map<string,string> var_s; // map for storing string value

    map<string,int> var_arr;
    map<string,pair<int,int>> arr_val;


/* Line 189 of yacc.c  */
#line 100 "1907004.tab.c"

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
     PRINT = 270,
     READ = 271,
     CIN = 272,
     FINISH = 273,
     MINUS = 274,
     REM = 275,
     STRINGD = 276,
     CHAR = 277,
     CHARD = 278,
     FUNC = 279,
     VOID = 280,
     FOR = 281,
     WHILE = 282,
     COMMA = 283,
     DOT = 284,
     SEMIC = 285,
     ASSOP = 286,
     LP = 287,
     RP = 288,
     LCUR = 289,
     RCUR = 290,
     COLON = 291,
     GT = 292,
     LT = 293,
     GE = 294,
     LE = 295,
     EE = 296,
     NE = 297,
     IF = 298,
     ELSE = 299,
     AND = 300,
     OR = 301,
     LB = 302,
     RB = 303,
     UMINUS = 304,
     FCALL = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 27 "1907004.y"

    struct alltype{
        char sval[1000];
        int ival;
        double dval;
        int bval;
        char cval;
    } anytype;



/* Line 214 of yacc.c  */
#line 198 "1907004.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 210 "1907004.tab.c"

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
#define YYLAST   427

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  256

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    14,    17,    19,
      21,    23,    25,    27,    29,    31,    36,    38,    42,    52,
      60,    62,    65,    68,    70,    79,    80,    82,    92,    97,
      99,   101,   103,   107,   111,   115,   119,   123,   127,   128,
     130,   134,   138,   140,   144,   148,   154,   156,   158,   160,
     162,   164,   166,   168,   175,   181,   185,   187,   193,   197,
     203,   207,   209,   215,   219,   225,   229,   235,   239,   241,
     247,   251,   257,   261,   263,   269,   273,   284,   287,   292,
     293,   295,   297,   299,   301,   305,   309,   313,   320,   324,
     328,   332,   334,   336,   338,   340,   342,   344,   346,   349,
     353,   357,   359,   363,   367,   371,   373,   375,   377,   381,
     386,   387,   389,   391,   393,   395,   397,   399,   403,   407,
     411,   415,   419,   423,   425,   427
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    -1,    52,    53,    -1,    69,    -1,    71,
      -1,    84,    30,    -1,    65,    30,    -1,    62,    -1,    57,
      -1,    58,    -1,    70,    -1,    55,    -1,    54,    -1,    18,
      -1,    16,    17,     3,    56,    -1,    30,    -1,    17,     3,
      56,    -1,    26,    32,    59,    60,    61,    33,    34,    52,
      35,    -1,    27,    32,    65,    33,    34,    52,    35,    -1,
      71,    -1,    84,    30,    -1,    65,    30,    -1,    84,    -1,
      43,    32,    65,    33,    34,    52,    35,    63,    -1,    -1,
      64,    -1,    44,    43,    32,    65,    33,    34,    52,    35,
      63,    -1,    44,    34,    52,    35,    -1,    90,    -1,    66,
      -1,    67,    -1,    90,    41,    90,    -1,    90,    42,    90,
      -1,    90,    37,    90,    -1,    90,    38,    90,    -1,    90,
      40,    90,    -1,    90,    39,    90,    -1,    -1,    68,    -1,
      67,    45,    68,    -1,    67,    46,    68,    -1,    66,    -1,
      32,    67,    33,    -1,     4,     3,    30,    -1,    15,    32,
       3,    33,    30,    -1,    73,    -1,    75,    -1,    77,    -1,
      78,    -1,    80,    -1,    82,    -1,    72,    -1,     6,     3,
      47,    95,    48,    30,    -1,     6,     3,    31,    90,    74,
      -1,     6,     3,    74,    -1,    30,    -1,    28,     3,    31,
      90,    74,    -1,    28,     3,    74,    -1,     5,     3,    31,
      90,    76,    -1,     5,     3,    76,    -1,    30,    -1,    28,
       3,    31,    90,    76,    -1,    28,     3,    76,    -1,     7,
       3,    31,    21,    30,    -1,     7,     3,    30,    -1,    14,
       3,    31,    90,    79,    -1,    14,     3,    79,    -1,    30,
      -1,    28,     3,    31,    90,    79,    -1,    28,     3,    79,
      -1,    22,     3,    31,    23,    81,    -1,    22,     3,    81,
      -1,    30,    -1,    28,     3,    31,    23,    81,    -1,    28,
       3,    81,    -1,    24,     3,    32,    83,    33,    36,    89,
      34,    52,    35,    -1,    89,     3,    -1,    89,     3,    28,
      83,    -1,    -1,    85,    -1,    86,    -1,    87,    -1,    88,
      -1,    86,    28,    84,    -1,    87,    28,    84,    -1,    88,
      28,    84,    -1,     3,    47,    95,    48,    31,    95,    -1,
       3,    31,    90,    -1,     3,    31,    21,    -1,     3,    31,
      23,    -1,     6,    -1,     5,    -1,     7,    -1,    22,    -1,
      14,    -1,    25,    -1,    91,    -1,    19,    90,    -1,    90,
      13,    91,    -1,    90,    19,    91,    -1,    92,    -1,    91,
      12,    92,    -1,    91,    11,    92,    -1,    91,    20,    92,
      -1,    95,    -1,    93,    -1,     3,    -1,    32,    90,    33,
      -1,     3,    32,    94,    33,    -1,    -1,     8,    -1,     9,
      -1,    10,    -1,    21,    -1,    23,    -1,     3,    -1,     3,
      28,    94,    -1,     8,    28,    94,    -1,     9,    28,    94,
      -1,    10,    28,    94,    -1,    21,    28,    94,    -1,    23,
      28,    94,    -1,     8,    -1,     9,    -1,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    54,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    71,    78,    90,    91,   103,   109,
     115,   116,   120,   124,   128,   133,   134,   135,   141,   147,
     148,   149,   153,   154,   155,   156,   157,   158,   161,   162,
     163,   164,   168,   169,   173,   179,   191,   192,   193,   194,
     195,   196,   197,   201,   214,   225,   238,   239,   250,   263,
     274,   287,   288,   299,   312,   323,   336,   349,   362,   363,
     376,   389,   400,   413,   414,   425,   438,   452,   465,   480,
     481,   482,   483,   484,   485,   486,   487,   491,   509,   533,
     549,   565,   566,   567,   568,   569,   570,   574,   579,   583,
     587,   594,   598,   602,   606,   613,   617,   618,   644,   651,
     670,   671,   671,   671,   671,   671,   672,   673,   674,   675,
     676,   677,   678,   682,   686,   690
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDEN", "IMPORT", "DOUBLE", "INT",
  "STRING", "INTD", "DOUBLED", "BOOLD", "DIV", "MUL", "PLUS", "BOOL",
  "PRINT", "READ", "CIN", "FINISH", "MINUS", "REM", "STRINGD", "CHAR",
  "CHARD", "FUNC", "VOID", "FOR", "WHILE", "COMMA", "DOT", "SEMIC",
  "ASSOP", "LP", "RP", "LCUR", "RCUR", "COLON", "GT", "LT", "GE", "LE",
  "EE", "NE", "IF", "ELSE", "AND", "OR", "LB", "RB", "UMINUS", "FCALL",
  "$accept", "input", "line", "terminate", "cin", "more_input", "for",
  "while", "f_first", "f_second", "f_third", "if", "elseif", "else",
  "condition", "comparison", "logical", "logical_term", "library",
  "OutPut", "declare", "array_declare", "int_declare", "more_int",
  "double_declare", "more_double", "string_declare", "boolean_declare",
  "more_bool", "char_declare", "more_char", "func_declare", "fargs",
  "assign", "arr_assign", "int_assign", "string_assign", "char_assign",
  "type", "expr", "term", "factor", "func_call", "data", "number", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    54,    55,    56,    56,    57,    58,
      59,    59,    60,    61,    62,    63,    63,    63,    64,    65,
      65,    65,    66,    66,    66,    66,    66,    66,    67,    67,
      67,    67,    68,    68,    69,    70,    71,    71,    71,    71,
      71,    71,    71,    72,    73,    73,    74,    74,    74,    75,
      75,    76,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    80,    80,    81,    81,    81,    82,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    86,    87,
      88,    89,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    91,    91,    91,    91,    92,    92,    92,    92,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    95,    95,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     9,     7,
       1,     2,     2,     1,     8,     0,     1,     9,     4,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     0,     1,
       3,     3,     1,     3,     3,     5,     1,     1,     1,     1,
       1,     1,     1,     6,     5,     3,     1,     5,     3,     5,
       3,     1,     5,     3,     5,     3,     5,     3,     1,     5,
       3,     5,     3,     1,     5,     3,    10,     2,     4,     0,
       1,     1,     1,     1,     3,     3,     3,     6,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     1,     3,     3,     3,     1,     1,     1,     3,     4,
       0,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    38,     1,   107,     0,     0,     0,     0,   123,   124,
     125,     0,     0,     0,    14,     0,     0,     0,     0,     0,
      38,     0,     3,    13,    12,     9,    10,     8,     0,    30,
      31,    39,     4,    11,     5,    52,    46,    47,    48,    49,
      50,    51,     0,    80,    81,    82,    83,    29,    97,   101,
     106,   105,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,    98,     0,     0,    79,    38,    42,
       0,     0,    38,     7,     0,     0,     6,    79,    79,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    88,   116,   111,   112,   113,   114,   115,
       0,     0,    44,     0,    61,     0,    60,     0,    56,     0,
       0,    55,    65,     0,     0,    68,     0,    67,     0,     0,
       0,     0,    73,     0,    72,     0,     0,    38,    20,     0,
       0,    43,   108,     0,    40,     0,    41,    84,    85,    86,
      99,   100,    34,    35,    37,    36,    32,    33,   103,   102,
     104,   110,   110,   110,   110,   110,   110,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
      15,     0,     0,    92,    91,    93,    95,    94,    96,     0,
       0,    79,     0,    21,     0,     0,   117,   118,   119,   120,
     121,   122,     0,     0,    63,    59,     0,    58,    54,     0,
      64,     0,    70,    66,    45,     0,     0,    75,    71,     0,
      77,     0,    23,    22,     2,     2,    87,     0,     0,    53,
       0,    17,     0,     0,     0,     0,    38,    38,    62,    57,
      69,    74,     0,    78,     2,    19,    25,     2,    38,     0,
      24,    26,    38,    18,     2,     0,    76,    38,    38,    28,
       0,     0,     2,    38,    25,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    22,    23,    24,   170,    25,    26,   127,   181,
     211,    27,   240,   241,    28,    29,    30,    31,    32,    33,
      34,    35,    36,   111,    37,   106,    38,    39,   117,    40,
     124,    41,   179,    42,    43,    44,    45,    46,   180,    47,
      48,    49,    50,   100,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -195
static const yytype_int16 yypact[] =
{
    -195,   100,  -195,    44,     1,    33,    59,    74,  -195,  -195,
    -195,    99,   -14,    96,  -195,    79,   138,   155,   129,   151,
     204,   153,  -195,  -195,  -195,  -195,  -195,  -195,   171,    -4,
      75,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,   187,  -195,   194,   197,   214,   358,   142,  -195,
    -195,  -195,   384,    76,   161,   220,    50,    65,   174,   144,
     250,   252,   229,    79,  -195,   149,   230,   403,   204,  -195,
      -1,    14,   204,  -195,   204,   204,  -195,   274,   274,   274,
     120,   120,    79,    79,    79,    79,    79,    79,   120,   120,
     120,  -195,  -195,    15,   251,   255,   258,   259,   261,   263,
     245,   246,  -195,   292,  -195,    79,  -195,   293,  -195,    79,
     161,  -195,  -195,   281,   300,  -195,    79,  -195,   271,     5,
       6,   302,  -195,   283,  -195,    24,   -21,   204,  -195,   277,
     275,  -195,  -195,   285,  -195,   358,  -195,  -195,  -195,  -195,
     142,   142,    15,    15,    15,    15,    15,    15,  -195,  -195,
    -195,    76,    76,    76,    76,    76,    76,  -195,   288,   190,
     112,   228,   196,   272,   294,   236,   235,   297,   325,  -195,
    -195,   269,   136,  -195,  -195,  -195,  -195,  -195,  -195,   299,
     327,   274,   305,  -195,   303,   304,  -195,  -195,  -195,  -195,
    -195,  -195,   161,    79,  -195,  -195,    79,  -195,  -195,   306,
    -195,    79,  -195,  -195,  -195,     5,   317,  -195,  -195,   308,
     313,   310,  -195,  -195,  -195,  -195,  -195,   112,   196,  -195,
     235,  -195,   136,    24,    24,   311,   141,   184,  -195,  -195,
    -195,  -195,   312,  -195,  -195,  -195,   315,  -195,   225,    49,
    -195,  -195,   266,  -195,  -195,   316,  -195,   307,   204,  -195,
     314,   326,  -195,   348,   315,  -195
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -195,  -194,  -195,  -195,  -195,   156,  -195,  -195,  -195,  -195,
    -195,  -195,    95,  -195,   -66,   -11,   345,   163,  -195,  -195,
     301,  -195,  -195,  -145,  -195,  -152,  -195,  -195,  -154,  -195,
    -148,  -195,   145,   -64,  -195,  -195,  -195,  -195,   150,   -15,
     165,   107,  -195,   -18,   -53
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -43
static const yytype_int16 yytable[] =
{
      64,   101,   130,   129,    55,    71,   133,   194,   195,    69,
      52,   202,   203,   137,   138,   139,   197,   198,    60,    80,
     226,   227,   168,   207,   208,    81,    54,    80,    80,   173,
     174,   175,   131,    81,    81,   169,    56,    93,   176,   132,
     238,   -42,   -42,   242,    74,    75,   177,   132,   120,   178,
     247,    82,    83,    84,    85,    86,    87,   163,   253,   135,
     135,   182,    57,    69,    69,   228,   230,   142,   143,   144,
     145,   146,   147,   229,   231,    52,    53,    58,   103,    94,
     104,   105,    62,   244,    95,    96,    97,     8,     9,    10,
     160,    54,   245,   107,   162,   108,   109,    98,    15,    99,
       2,   166,    59,     3,     4,     5,     6,     7,     8,     9,
      10,    63,   110,    61,    11,    12,    13,   212,    14,    15,
      74,    75,    16,    62,    17,    80,    18,    19,     8,     9,
      10,    81,    20,   186,   187,   188,   189,   190,   191,   216,
     103,    65,   104,    21,     3,     4,     5,     6,     7,     8,
       9,    10,    63,    88,    89,    11,    12,    13,    66,    14,
      15,    67,    90,    16,   121,    17,   122,    18,    19,     8,
       9,    10,   114,    20,   115,   116,   235,   121,   217,   122,
     123,   218,   250,    68,    21,    72,   220,     3,     4,     5,
       6,     7,     8,     9,    10,   148,   149,   150,    11,    12,
      13,    73,    14,    15,   112,   113,    16,    62,    17,    80,
      18,    19,     8,     9,    10,    81,    20,    76,   103,   236,
     104,   193,    77,    15,   107,    78,   108,    21,     3,     4,
       5,     6,     7,     8,     9,    10,    20,   134,   136,    11,
      12,    13,    79,    14,    15,   140,   141,    16,    80,    17,
     102,    18,    19,   118,    81,   119,   107,    20,   108,   196,
     243,    53,   125,   114,   114,   115,   115,   201,    21,     3,
       4,     5,     6,     7,     8,     9,    10,   126,   157,   151,
      11,    12,    13,   152,    14,    15,   153,   154,    16,   155,
      17,   156,    18,    19,   158,   159,   161,   121,    20,   122,
     206,   246,   164,   165,   167,   171,   172,   183,   184,    21,
       3,     4,     5,     6,     7,     8,     9,    10,   185,   192,
     199,    11,    12,    13,   200,    14,    15,   204,   205,    16,
     210,    17,   209,    18,    19,   213,   219,   214,   215,    20,
     222,   224,   249,   225,   223,   234,   237,   251,   248,   255,
      21,     3,     4,     5,     6,     7,     8,     9,    10,   239,
     252,   221,    11,    12,    13,    70,    14,    15,   128,   233,
      16,    80,    17,   232,    18,    19,     0,    81,     0,     0,
      20,     0,     0,   254,     0,     0,     0,    62,     0,     0,
       0,    21,     8,     9,    10,    82,    83,    84,    85,    86,
      87,     0,     0,    15,     0,    91,   126,    92,     5,     6,
       7,     0,     0,     0,     0,     0,    63,    11,     0,     0,
       0,     0,     0,     0,     0,    16,     0,    17
};

static const yytype_int16 yycheck[] =
{
      15,    54,    68,    67,     3,    20,    72,   159,   160,    20,
      31,   165,   166,    77,    78,    79,   161,   162,    32,    13,
     214,   215,    17,   171,   172,    19,    47,    13,    13,     5,
       6,     7,    33,    19,    19,    30,     3,    52,    14,    33,
     234,    45,    46,   237,    45,    46,    22,    33,    63,    25,
     244,    37,    38,    39,    40,    41,    42,   110,   252,    74,
      75,   127,     3,    74,    75,   217,   220,    82,    83,    84,
      85,    86,    87,   218,   222,    31,    32,     3,    28,     3,
      30,    31,     3,    34,     8,     9,    10,     8,     9,    10,
     105,    47,    43,    28,   109,    30,    31,    21,    19,    23,
       0,   116,     3,     3,     4,     5,     6,     7,     8,     9,
      10,    32,    47,    17,    14,    15,    16,   181,    18,    19,
      45,    46,    22,     3,    24,    13,    26,    27,     8,     9,
      10,    19,    32,   151,   152,   153,   154,   155,   156,   192,
      28,     3,    30,    43,     3,     4,     5,     6,     7,     8,
       9,    10,    32,    11,    12,    14,    15,    16,     3,    18,
      19,    32,    20,    22,    28,    24,    30,    26,    27,     8,
       9,    10,    28,    32,    30,    31,    35,    28,   193,    30,
      31,   196,   248,    32,    43,    32,   201,     3,     4,     5,
       6,     7,     8,     9,    10,    88,    89,    90,    14,    15,
      16,    30,    18,    19,    30,    31,    22,     3,    24,    13,
      26,    27,     8,     9,    10,    19,    32,    30,    28,    35,
      30,    31,    28,    19,    28,    28,    30,    43,     3,     4,
       5,     6,     7,     8,     9,    10,    32,    74,    75,    14,
      15,    16,    28,    18,    19,    80,    81,    22,    13,    24,
      30,    26,    27,     3,    19,     3,    28,    32,    30,    31,
      35,    32,    32,    28,    28,    30,    30,    31,    43,     3,
       4,     5,     6,     7,     8,     9,    10,     3,    33,    28,
      14,    15,    16,    28,    18,    19,    28,    28,    22,    28,
      24,    28,    26,    27,    48,     3,     3,    28,    32,    30,
      31,    35,    21,     3,    33,     3,    23,    30,    33,    43,
       3,     4,     5,     6,     7,     8,     9,    10,    33,    31,
      48,    14,    15,    16,    30,    18,    19,    30,     3,    22,
       3,    24,    33,    26,    27,    30,    30,    34,    34,    32,
      23,    28,    35,    33,    36,    34,    34,    33,    32,   254,
      43,     3,     4,     5,     6,     7,     8,     9,    10,    44,
      34,   205,    14,    15,    16,    20,    18,    19,    67,   224,
      22,    13,    24,   223,    26,    27,    -1,    19,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    43,     8,     9,    10,    37,    38,    39,    40,    41,
      42,    -1,    -1,    19,    -1,    21,     3,    23,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    32,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    24
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    14,    15,    16,    18,    19,    22,    24,    26,    27,
      32,    43,    53,    54,    55,    57,    58,    62,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    75,    77,    78,
      80,    82,    84,    85,    86,    87,    88,    90,    91,    92,
      93,    95,    31,    32,    47,     3,     3,     3,     3,     3,
      32,    17,     3,    32,    90,     3,     3,    32,    32,    66,
      67,    90,    32,    30,    45,    46,    30,    28,    28,    28,
      13,    19,    37,    38,    39,    40,    41,    42,    11,    12,
      20,    21,    23,    90,     3,     8,     9,    10,    21,    23,
      94,    95,    30,    28,    30,    31,    76,    28,    30,    31,
      47,    74,    30,    31,    28,    30,    31,    79,     3,     3,
      90,    28,    30,    31,    81,    32,     3,    59,    71,    84,
      65,    33,    33,    65,    68,    90,    68,    84,    84,    84,
      91,    91,    90,    90,    90,    90,    90,    90,    92,    92,
      92,    28,    28,    28,    28,    28,    28,    33,    48,     3,
      90,     3,    90,    95,    21,     3,    90,    33,    17,    30,
      56,     3,    23,     5,     6,     7,    14,    22,    25,    83,
      89,    60,    65,    30,    33,    33,    94,    94,    94,    94,
      94,    94,    31,    31,    76,    76,    31,    74,    74,    48,
      30,    31,    79,    79,    30,     3,    31,    81,    81,    33,
       3,    61,    84,    30,    34,    34,    95,    90,    90,    30,
      90,    56,    23,    36,    28,    33,    52,    52,    76,    74,
      79,    81,    89,    83,    34,    35,    35,    34,    52,    44,
      63,    64,    52,    35,    34,    43,    35,    52,    32,    35,
      65,    33,    34,    52,    35,    63
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
        case 14:

/* Line 1455 of yacc.c  */
#line 71 "1907004.y"
    {
    cout<< "\n\n\t\t\tThe program has terminated" << "\n";
    return 0;
;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 78 "1907004.y"
    {
    string name = (yyvsp[(3) - (4)].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "\nError: "<< name <<" variable not declared yet." << "\n";
    }
    else{
        cout << "\nTake input from user from console for " << name <<"\n";
    }
;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 91 "1907004.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "\nError: "<< name <<" variable not declared yet." << "\n";
    }
    else{
        cout << "\nTake input from user from console for " << name <<"\n";
    }
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 103 "1907004.y"
    {
    cout << "\nParsing for loop\n";
;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 109 "1907004.y"
    {
    cout << "\nParsing while loop\n";
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 128 "1907004.y"
    {
    cout << "\nparsing if block\n";
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 135 "1907004.y"
    {
    cout << "\nparsing else if block\n";
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 141 "1907004.y"
    {
    cout << "\nparsing else block\n";
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 173 "1907004.y"
    {
    printf("\nimported library: %s\n", (yyvsp[(2) - (3)].anytype).sval);
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 179 "1907004.y"
    {
    string name = (yyvsp[(3) - (5)].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "\nError: "<< name <<" is an invalid variable to print" << "\n";
    }
    else{
        cout<<"\nPrint -> "<<name<<"\n";
    }
;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 201 "1907004.y"
    {
    string name = (yyvsp[(2) - (6)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of int type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared : " << name << " int, size -> " << (yyvsp[(4) - (6)].anytype).ival << "\n";
        var_type[name] = "INT-arr";
        var_arr[name] = (yyvsp[(4) - (6)].anytype).ival; // store the name of the int array
    }
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 214 "1907004.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of int type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared : " << name << " int, value -> " << (yyvsp[(4) - (5)].anytype).ival << "\n";
        var_type[name] = "INT";
        var_i[name] = (yyvsp[(4) - (5)].anytype).ival; // store the name of the int
    }
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 225 "1907004.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of int type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": int\n";
        var_type[name] = "INT";
    }
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 239 "1907004.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of int type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": int, value -> " << (yyvsp[(4) - (5)].anytype).ival << "\n";
        var_type[name] = "INT";
        var_i[name] = (yyvsp[(4) - (5)].anytype).ival;
    }
;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 250 "1907004.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of int type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": int\n";
        var_type[name] = "INT";
    }
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 263 "1907004.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of double type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": double, value -> " << (yyvsp[(4) - (5)].anytype).dval << "\n";
        var_type[name] = "DOUBLE";
        var_d[name] = (yyvsp[(4) - (5)].anytype).dval;
    }
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 274 "1907004.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of double type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": double\n";
        var_type[name] = "DOUBLE";
    }
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 288 "1907004.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of double type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": double, value -> " << (yyvsp[(4) - (5)].anytype).dval << "\n";
        var_type[name] = "DOUBLE";
        var_d[name] = (yyvsp[(4) - (5)].anytype).dval;
    }
;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 299 "1907004.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of double type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": double\n";
        var_type[name] = "double";
    }
;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 312 "1907004.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of string type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ":string, value -> " << (yyvsp[(4) - (5)].anytype).sval << "\n";
        var_s[name] = (yyvsp[(4) - (5)].anytype).sval;
        var_type[name] = "STRING";
    }
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 323 "1907004.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of string type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ":string\n";
        var_type[name] = "STRING";
    }
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 336 "1907004.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of bool type has already been declared" << "\n";
    }
    else {
        string bval = "false";
        if ((yyvsp[(4) - (5)].anytype).ival) bval = "true";
        cout << "\ndeclared -> " << name << ": bool, value -> " << bval << "\n";
        var_type[name] = "BOOL";
        var_b[name] = (yyvsp[(4) - (5)].anytype).bval;
    }
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 349 "1907004.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of bool type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": bool\n";
        var_type[name] = "BOOL";
    }
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 363 "1907004.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of bool type has already been declared" << "\n";
    }
    else {
        string bval = "false";
        if ((yyvsp[(4) - (5)].anytype).ival) bval = "true";
        cout << "\ndeclared -> " << name << ": bool, value -> " << bval << "\n";
        var_type[name] = "BOOL";
        var_b[name] = (yyvsp[(4) - (5)].anytype).bval;
    }
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 376 "1907004.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of bool type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": bool\n";
        var_type[name] = "BOOL";
    }
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 389 "1907004.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: "<< name <<" variable of char type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": char, value -> '" << (yyvsp[(4) - (5)].anytype).cval << "'\n";
        var_type[name] = "CHAR";
        var_c[name] = (yyvsp[(4) - (5)].anytype).cval;
    }
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 400 "1907004.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
         cout << "\nError: "<< name <<" variable of char type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": char\n";
        var_type[name] = "CHAR";
    }
;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 414 "1907004.y"
    {
    string name = (yyvsp[(2) - (5)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
         cout << "\nError: "<< name <<" variable of char type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": char, value -> '" << (yyvsp[(4) - (5)].anytype).cval << "'\n";
        var_type[name] = "CHAR";
        var_c[name] = (yyvsp[(4) - (5)].anytype).cval;
    }
;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 425 "1907004.y"
    {
    string name = (yyvsp[(2) - (3)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
         cout << "\nError: "<< name <<" variable of char type has already been declared" << "\n";
    }
    else {
        cout << "\ndeclared -> " << name << ": char\n";
        var_type[name] = "CHAR";
    }
;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 438 "1907004.y"
    {
    string name = (yyvsp[(2) - (10)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
         cout << "\nError: "<< name <<" funciton name has already been declared" << "\n"; 
    }
    else {
        string ret = (yyvsp[(7) - (10)].anytype).sval;
        cout << "\nfunction -> " << name << ": return type -> " << ret << "\n";
        var_type[name] = "FUNC";
    }
;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 452 "1907004.y"
    {
    string name = (yyvsp[(2) - (2)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: redeclared funciton argument -> " << name << ": " << var_type[name] <<"\n";
    }
    else {
        cout << "\nargument -> " << name << ": " << (yyvsp[(1) - (2)].anytype).sval<< "\n";
        var_type[name] = (yyvsp[(1) - (2)].anytype).sval;
        for (auto &it : var_type[name]) {
            it = toupper(it);
        }
    }
;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 465 "1907004.y"
    {
    string name = (yyvsp[(2) - (4)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        cout << "\nError: redeclared function argument -> " << name << ": " << var_type[name] <<"\n";
    }
    else {
        cout << "\nargument -> " << name << ": " << (yyvsp[(1) - (4)].anytype).sval<< "\n";
        var_type[name] = (yyvsp[(1) - (4)].anytype).sval;
        for (auto &it : var_type[name]) {
            it = toupper(it);
        }
    }
;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 491 "1907004.y"
    {
    string name = (yyvsp[(1) - (6)].anytype).sval;
    if (var_type.find(name) == var_type.end()){
        cout<<"\nError: undefined variable -> "<<name <<"\n";
    }
    else if(var_type[name] == "INT-arr"){
        if (var_arr[name] > (yyvsp[(3) - (6)].anytype).ival && var_arr[name] >=0 ){
            arr_val[name] = {(yyvsp[(3) - (6)].anytype).ival,(yyvsp[(6) - (6)].anytype).ival};
            cout<<"\nassignment: " << name << "[" << (yyvsp[(3) - (6)].anytype).ival << "]" << " -> " << (yyvsp[(6) - (6)].anytype).ival << "\n";
        }
        else{
            cout<<"\nError: array size out of bounds -> " << name <<"\n";
        }
    }
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 509 "1907004.y"
    {
    // for int, double
    string name = (yyvsp[(1) - (3)].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "\nError: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] == "INT"){
        var_i[name] = (yyvsp[(3) - (3)].anytype).ival;
        cout << "\nassignment: " << name << " -> " << (yyvsp[(3) - (3)].anytype).ival << "\n";
    }
    else if (var_type[name] == "DOUBLE") {
        var_d[name] = (yyvsp[(3) - (3)].anytype).dval;
        cout << "\nassignment: " << name << " -> " << (yyvsp[(3) - (3)].anytype).dval << "\n";
    }
    else if (var_type[name] == "BOOL") {
        var_b[name] = (yyvsp[(3) - (3)].anytype).bval;
        string bval = "false";
        if ((yyvsp[(3) - (3)].anytype).bval) bval = "true";
        cout << "\nassignment: " << name << " -> " << bval << "\n";
    }
;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 533 "1907004.y"
    {
    string name = (yyvsp[(1) - (3)].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "\nError: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] != "STRING") {
        cout << "\nError: invalid value type -> string" << "\n";
    }
    else {
        var_s[name] = (yyvsp[(3) - (3)].anytype).sval;
        cout << "\nassignment: " << name << " -> " << (yyvsp[(3) - (3)].anytype).sval << "\n";
    }
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 549 "1907004.y"
    {
    string name = (yyvsp[(1) - (3)].anytype).sval;
    if (var_type.find(name) == var_type.end()) {
        cout << "\nError: undefined variable -> " << name << "\n";
    }
    else if (var_type[name] != "CHAR") {
        cout << "\nError: invalid value type -> char" << "\n";
    }
    else {
        var_c[name] = (yyvsp[(3) - (3)].anytype).cval;
        cout << "\nassignment: " << name << " -> '" << (yyvsp[(3) - (3)].anytype).cval << "'\n";
    }
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 565 "1907004.y"
    {strcpy((yyval.anytype).sval,"int");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 566 "1907004.y"
    {strcpy((yyval.anytype).sval,"double");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 567 "1907004.y"
    {strcpy((yyval.anytype).sval,"string");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 568 "1907004.y"
    {strcpy((yyval.anytype).sval,"char");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 569 "1907004.y"
    {strcpy((yyval.anytype).sval,"bool");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 570 "1907004.y"
    {strcpy((yyval.anytype).sval,"void");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 574 "1907004.y"
    { 
    // only the int and double value
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).ival;
;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 579 "1907004.y"
    {
    (yyval.anytype).dval = (yyvsp[(2) - (2)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(2) - (2)].anytype).ival;
;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 583 "1907004.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (3)].anytype).dval + (yyvsp[(3) - (3)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (3)].anytype).ival + (yyvsp[(3) - (3)].anytype).ival;
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 587 "1907004.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (3)].anytype).dval - (yyvsp[(3) - (3)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (3)].anytype).ival - (yyvsp[(1) - (3)].anytype).ival;
;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 594 "1907004.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).ival;
;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 598 "1907004.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (3)].anytype).dval * (yyvsp[(3) - (3)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (3)].anytype).ival * (yyvsp[(1) - (3)].anytype).ival;
;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 602 "1907004.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (3)].anytype).dval / (yyvsp[(3) - (3)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (3)].anytype).ival / (yyvsp[(1) - (3)].anytype).ival;
;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 606 "1907004.y"
    {
    (yyval.anytype).ival = (yyvsp[(1) - (3)].anytype).ival % (yyvsp[(3) - (3)].anytype).ival;
    (yyval.anytype).dval = (yyval.anytype).ival;
;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 613 "1907004.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).ival;
;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 618 "1907004.y"
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

  case 108:

/* Line 1455 of yacc.c  */
#line 644 "1907004.y"
    {
    (yyval.anytype).dval = (yyvsp[(2) - (3)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(2) - (3)].anytype).ival;
;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 651 "1907004.y"
    {
    string name = (yyvsp[(1) - (4)].anytype).sval;
    if (var_type.find(name) != var_type.end()) {
        if (var_type[name] != "FUNC") {
            cout << "\nError: redeclared function -> " << name << "\n";
        }
        else {
            cout << "\nCalled function name -> " << name << "\n";
        }
    }
    else if (name == "min" || name == "max" || name =="gcd" || name == "input"||name=="output") {
        cout << "\nCalled builtin function -> " << name <<"\n";
    }
    else {
        cout << "\nError: undeclared function -> " << name << "\n";
    }
;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 682 "1907004.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).ival;
;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 686 "1907004.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).dval;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).dval;
;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 690 "1907004.y"
    {
    (yyval.anytype).dval = (yyvsp[(1) - (1)].anytype).bval;
    (yyval.anytype).ival = (yyvsp[(1) - (1)].anytype).bval;
;}
    break;



/* Line 1455 of yacc.c  */
#line 2462 "1907004.tab.c"
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
#line 697 "1907004.y"


int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    yyparse();

    return 0;
}

void yyerror(char *str) {
    fprintf(stderr, "error:%s\n", str);
}

