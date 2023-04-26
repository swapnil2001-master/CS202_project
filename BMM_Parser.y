%{
#include <stdio.h>
#include <string.h>

/* code */
int yylex();
int yyparse();
void yyerror() {printf("not valid!\n");}
int yywrap() {return 0;}
int main() {yyparse();}
%}

%token A B newline string_var sp_int_var dp_var int_var def data User_func dim end fr next step print gosub gt rem inp output let DECNUM
%token CHARPTR INT RETURN ID NUM STRING COMMA SEMICOLON PLUS MINUS MULTI ASSIGN DIV ORB CRB OpBRACE ClBRACE EQUALTO NEQUALTO LESSEQ GREATEQ LESS GREAT WHILE IF
%token ELSE FNNAME OBRACKET CBRACKET ARR_NAME AND OR LAND LOR 


%%
program: loop program|;
loop: def User_func ORB param CRB ASSIGN expr | def User_func ASSIGN expr;

expr : expr PLUS term {$$ = $1 + $3;}
| expr MINUS term {$$ = $1 - $3;}
| term{$$ = $1; printf("\ntoken passed in yacc file value is %d" , $$);} |;  

term : term MULTI factor {$$ = $1 * $3;}| 
        term DIV factor {$$ = $1 / $3;}| 
        factor {$$ = $1;}; 

factor : NUM{$$ = $1;}| param{$$ = $1;} |
         DECNUM {$$ = $1;}| 
        ORB expr CRB {$$ = $2;};


array_init: DIM arr_name ORB NUM CRB
            | DIM arr_name ORB NUM COMMA NUM CRB;


param : int_var | sp_int_var | dp_var;

%%