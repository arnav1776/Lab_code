%{
#include<stdio.h>
#include<stdlib.h>
%}

%%
^[_a-zA-Z][_a-zA-Z0-9]* {printf("Valid Identifier");}
"\n" {exit(0);}
%%

int yywrap(){
    return 0;
}

int main(){
    yylex();
    return 0;