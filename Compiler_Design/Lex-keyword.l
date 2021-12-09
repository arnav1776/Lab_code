%{
#include<stdio.h>
#include<stdlib.h>
%}

%%
int|float|for|while {printf("This is the keyword");}
"\n" {exit(0);}
%%

int yywrap(){
    return 0;
}

int main(){
    yylex();
    return 0;
}