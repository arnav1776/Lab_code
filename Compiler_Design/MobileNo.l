%{
#include<stdio.h>
%}

%%
^[1-9][0-9]{9} {printf("Mobile Number is valid");}
.* {printf("Invalid Number");}
%%

int yywrap(){
    return 0;
}

int main(){
    yylex();
    printf("\n");
    return 0;
}