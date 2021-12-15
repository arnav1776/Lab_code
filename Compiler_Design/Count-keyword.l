%{
#include<stdio.h>
#include<stdlib.h>
int countKeywords=0;
%}

%%
int|float|while|for {printf("%d",++countKeywords);}
"\n" {}
%%

int yywrap(){
    return 0;
}

int main(){
    yylex();
    return 0;
}