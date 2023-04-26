/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    A = 258,
    B = 259,
    newline = 260,
    string_var = 261,
    sp_int_var = 262,
    dp_var = 263,
    int_var = 264,
    def = 265,
    data = 266,
    User_func = 267,
    dim = 268,
    end = 269,
    fr = 270,
    next = 271,
    step = 272,
    print = 273,
    gosub = 274,
    gt = 275,
    rem = 276,
    inp = 277,
    output = 278,
    let = 279,
    DECNUM = 280,
    CHARPTR = 281,
    INT = 282,
    RETURN = 283,
    ID = 284,
    NUM = 285,
    STRING = 286,
    COMMA = 287,
    SEMICOLON = 288,
    PLUS = 289,
    MINUS = 290,
    MULTI = 291,
    ASSIGN = 292,
    DIV = 293,
    ORB = 294,
    CRB = 295,
    OpBRACE = 296,
    ClBRACE = 297,
    EQUALTO = 298,
    NEQUALTO = 299,
    LESSEQ = 300,
    GREATEQ = 301,
    LESS = 302,
    GREAT = 303,
    WHILE = 304,
    IF = 305,
    ELSE = 306,
    FNNAME = 307,
    OBRACKET = 308,
    CBRACKET = 309,
    ARR_NAME = 310,
    AND = 311,
    OR = 312,
    LAND = 313,
    LOR = 314
  };
#endif
/* Tokens.  */
#define A 258
#define B 259
#define newline 260
#define string_var 261
#define sp_int_var 262
#define dp_var 263
#define int_var 264
#define def 265
#define data 266
#define User_func 267
#define dim 268
#define end 269
#define fr 270
#define next 271
#define step 272
#define print 273
#define gosub 274
#define gt 275
#define rem 276
#define inp 277
#define output 278
#define let 279
#define DECNUM 280
#define CHARPTR 281
#define INT 282
#define RETURN 283
#define ID 284
#define NUM 285
#define STRING 286
#define COMMA 287
#define SEMICOLON 288
#define PLUS 289
#define MINUS 290
#define MULTI 291
#define ASSIGN 292
#define DIV 293
#define ORB 294
#define CRB 295
#define OpBRACE 296
#define ClBRACE 297
#define EQUALTO 298
#define NEQUALTO 299
#define LESSEQ 300
#define GREATEQ 301
#define LESS 302
#define GREAT 303
#define WHILE 304
#define IF 305
#define ELSE 306
#define FNNAME 307
#define OBRACKET 308
#define CBRACKET 309
#define ARR_NAME 310
#define AND 311
#define OR 312
#define LAND 313
#define LOR 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
