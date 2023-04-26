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
    CHARPTR = 280,
    INT = 281,
    RETURN = 282,
    ID = 283,
    NUM = 284,
    STRING = 285,
    COMMA = 286,
    SEMICOLON = 287,
    PLUS = 288,
    MINUS = 289,
    MULTI = 290,
    ASSIGN = 291,
    DIV = 292,
    OPAR = 293,
    CPAR = 294,
    OBRACE = 295,
    CBRACE = 296,
    EQUALTO = 297,
    NEQUALTO = 298,
    LESSEQ = 299,
    GREATEQ = 300,
    LESS = 301,
    GREAT = 302,
    WHILE = 303,
    IF = 304,
    ELSE = 305,
    FNNAME = 306,
    OBRACKET = 307,
    CBRACKET = 308,
    ARR_NAME = 309,
    AND = 310,
    OR = 311,
    LAND = 312,
    LOR = 313
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
#define CHARPTR 280
#define INT 281
#define RETURN 282
#define ID 283
#define NUM 284
#define STRING 285
#define COMMA 286
#define SEMICOLON 287
#define PLUS 288
#define MINUS 289
#define MULTI 290
#define ASSIGN 291
#define DIV 292
#define OPAR 293
#define CPAR 294
#define OBRACE 295
#define CBRACE 296
#define EQUALTO 297
#define NEQUALTO 298
#define LESSEQ 299
#define GREATEQ 300
#define LESS 301
#define GREAT 302
#define WHILE 303
#define IF 304
#define ELSE 305
#define FNNAME 306
#define OBRACKET 307
#define CBRACKET 308
#define ARR_NAME 309
#define AND 310
#define OR 311
#define LAND 312
#define LOR 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
