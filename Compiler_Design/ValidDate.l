%{
#include<stdio.h>
%}

%%
^([0-9]{4})-(0[1-9]|1[0-2])-(0[1-9]|[1-2][0-9]|3[0-1]) {printf("Valid Date");}
.* {printf("Invalid Date");}
%%

int yywrap(){
    return 0;
}

int main(){
    yylex();
    printf("\n");
    return 0;
}