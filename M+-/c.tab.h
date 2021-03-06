/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_C_TAB_H_INCLUDED
# define YY_YY_C_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    END = 258,                     /* END  */
    INT = 259,                     /* INT  */
    WHILE = 260,                   /* WHILE  */
    FLOAT = 261,                   /* FLOAT  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    RETURN = 264,                  /* RETURN  */
    STRING_LITERAL = 265,          /* STRING_LITERAL  */
    ASSIGN = 266,                  /* ASSIGN  */
    ADD = 267,                     /* ADD  */
    BOOL = 268,                    /* BOOL  */
    IDENTIFIER = 269,              /* IDENTIFIER  */
    AND = 270,                     /* AND  */
    BVAL = 271,                    /* BVAL  */
    CEIL = 272,                    /* CEIL  */
    CLPAR = 273,                   /* CLPAR  */
    COLON = 274,                   /* COLON  */
    COMMA = 275,                   /* COMMA  */
    CRPAR = 276,                   /* CRPAR  */
    DIV = 277,                     /* DIV  */
    DO = 278,                      /* DO  */
    EQUAL = 279,                   /* EQUAL  */
    FLOOR = 280,                   /* FLOOR  */
    FUN = 281,                     /* FUN  */
    GE = 282,                      /* GE  */
    GT = 283,                      /* GT  */
    ID = 284,                      /* ID  */
    IVAL = 285,                    /* IVAL  */
    LE = 286,                      /* LE  */
    MUL = 287,                     /* MUL  */
    NOT = 288,                     /* NOT  */
    OR = 289,                      /* OR  */
    READ = 290,                    /* READ  */
    RPAR = 291,                    /* RPAR  */
    RVAL = 292,                    /* RVAL  */
    REAL = 293,                    /* REAL  */
    PRINT = 294,                   /* PRINT  */
    SEMICOLON = 295,               /* SEMICOLON  */
    SIZE = 296,                    /* SIZE  */
    SLPAR = 297,                   /* SLPAR  */
    SRPAR = 298,                   /* SRPAR  */
    SUB = 299,                     /* SUB  */
    THEN = 300,                    /* THEN  */
    VAR = 301,                     /* VAR  */
    LPAR = 302,                    /* LPAR  */
    LT = 303,                      /* LT  */
    BEGINN = 304                   /* BEGINN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "c.y"

	
	Node	*node;
	char* strings;
	int intVal;
	float realVal;
	bool boolVal;

#line 122 "c.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_TAB_H_INCLUDED  */
