%{
#include<stdio.h>
%}

%%
(https?:\/\/)?([\w\-])+\.{1}([a-zA-Z]{2,63})([\/\w-]*)*\/?\??([^#\n\r]*)?#?([^\n\r]*) {printf("Valid URL");}
.* {printf("Invalid URL");}
%%

int yywrap(){
    return 0;
}

int main(){
    yylex();
    printf("\n");
    return 0;
}