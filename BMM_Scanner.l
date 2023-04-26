%{
#include "y.tab.h"
#define YYSTYPE char*

%}
%%

[A-Z][0-9]?[\%]?  			{printf("int -variable printed\n");return int_var; }
[A-Z][0-9]?"$" 				{printf("st -variable printed\n");return string_var; }
[A-Z][0-9]?"!"  			{printf("sp -variable printed\n");return sp_int_var; }
[A-Z][0-9]?"#" 				{printf("hh -variable printed\n");return dp_var; }

(DEF)                       {return def;}
(DATA)                      {return data;}
(FN[A-Z])                   {return User_func;}
(DIM)                       {return dim;}
(END)                       {return end;}
(FOR)                       {return fr;}
(NEXT)                      {return next;}
(STEP)                      {return step;}
(PRINT)                     {return print;}
(GOSUB)                     {return gosub;}
(GOTO)                      {printf("goto statement\n");return gt;}
(REM)                       {return rem;}
(INPUT)                     {return inp;}
(OUTPUT)                    {return output;}
(LET)                       {return let;}

[A-Z]                       {printf("Variable name for array\n"); return arr_name;}
(return)					{printf(yyout,"RETURN STATEMENT\n"); 			 return RETURN;}
[0-9]+						{printf(yyout,"NUMBER: %s\n",yytext); 		yylval =strdup(yytext); return NUM;}
[0-9]*"."[0-9]+				{printf("DEC NUMBER: %s\n",yytext); 		yylval =strdup(yytext); return DECNUM;}
\,							{printf(yyout,"COMMA    : ,\n"); 				 return COMMA;}
\;							{printf(yyout,"SEMICOLON: ;\n");				 return SEMICOLON;}

							/*For arithmetic operators*/							
\+							{fprintf(yyout,"PLUS     : +\n"); return PLUS;}
\-							{fprintf(yyout,"MINUS    : -\n"); return MINUS;}
\*							{fprintf(yyout,"MULTIPLY : *\n"); return MULTI;}
\=							{fprintf(yyout,"EQUAL    : =\n"); return ASSIGN;}
\/							{fprintf(yyout,"DIVIDE   : /\n"); return DIV;} 
\&							{printf(yyout,"OR  : &\n"); return AND;}
\|							{fprintf(yyout,"AND : &\n"); return OR;}
"&&"						{fprintf(yyout,"LOGICAL AND: &&\n"); return LAND;}
"||"						{fprintf(yyout,"LOGICAL OR : ||\n"); return LOR;}

							/*For relational operators*/
(==)						{fprintf(yyout,"EQUAL TO : ==\n"); 			return EQUALTO;}
(!=)						{fprintf(yyout,"NOT EQUAL TO: !=\n"); 		return NEQUALTO;}
(\<=)	     				{fprintf(yyout,"LESS THAN EQUAL: <=\n"); 	return LESSEQ;}
(\>=) 						{fprintf(yyout,"GREATER THAN EQUAL: >=\n"); return GREATEQ;}
(\<)						{fprintf(yyout,"LESS THAN: <\n"); 			return LESS;}
(\>)						{fprintf(yyout,"GREATER THAN: >\n"); 		return GREAT;}

							/*For control statements*/

\".*\"						{fprintf(yyout,"STRING: %s\n",yytext); 		yylval =strdup(yytext); return STRING;}

							/*For function names*/
([A-Za-z][A-Za-z0-9_]*)/"("  {fprintf(yyout,"FUNCTION NAME : %s\n",yytext); yylval =strdup(yytext); return FNNAME;}


	     
							/*braces/parenthesis*/
"{"							{fprintf(yyout,"OPENING BRACE: {\n"); return OpBRACE;}
"}"							{fprintf(yyout,"CLOSING BRACE: }\n"); return ClBRACE;}
"("							{fprintf(yyout,"OPENING PARENTHESIS: (\n"); return ORB;}
")"							{fprintf(yyout,"CLOSING PARENTHESIS: )\n"); return CRB;}
"["							{fprintf(yyout,"OPENING BRACKET: [\n"); return OBRACKET;}
"]"							{fprintf(yyout,"CLOSING BRACKET: [\n"); return CBRACKET;}

\n	       					
[ ]	       			
.							{fprintf(yyout,"others%s\n",yytext);}



%%

/*  

lex BMM_Scanner.l
yacc -d BMM_Parser.y
cc lex.yy.c y.tab.c -o BMM_Parser

 */