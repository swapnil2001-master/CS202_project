%{
#include <stdio.h>
#include <string.h>

int yylex();
int yyparse();
void yyerror() {printf("not valid!\n");}
int yywrap() {return 0;}
int main() {yyparse();}
%}

%token A B newline string_var sp_int_var dp_var int_var def data User_func dim end fr next step print gosub gt rem inp output let
%token CHARPTR INT RETURN ID NUM STRING COMMA SEMICOLON PLUS MINUS MULTI ASSIGN DIV OPAR CPAR OBRACE CBRACE EQUALTO NEQUALTO LESSEQ GREATEQ LESS GREAT WHILE IF
%token ELSE FNNAME OBRACKET CBRACKET ARR_NAME AND OR LAND LOR

%%
str: A A A A A A A A A bnfrecur B newline {printf("Valid!\n");};
bnfrecur: bnfrecur A
      | A;
%%