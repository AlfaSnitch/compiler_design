
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

/* Line 1676 of yacc.c  */
#line 24 "parser.y"

    struct alltype{
        char sval[1000];
        int ival;
        double dval;
        int bval;
        char cval;
    } anytype;



/* Line 1676 of yacc.c  */
#line 108 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


