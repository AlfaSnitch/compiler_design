
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 27 "1907004.y"

    struct alltype{
        char sval[1000];
        int ival;
        double dval;
        int bval;
        char cval;
    } anytype;



/* Line 1676 of yacc.c  */
#line 114 "1907004.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


