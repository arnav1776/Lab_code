%{
#include<stdio.h>
int wc=0,lc=0,nc=0,dc=0,ch=0;
%}
digit [0-9]
letter [A-Za-z]
%%
{digit}* { nc++;dc=dc+yyleng; }
{letter}* { wc++;ch=ch+yyleng; }
\n  { lc++; }
%%

int yywrap(){
}
int main(){
    FILE *fp;
    fp=fopen("myfile.txt","r");
    yyin=fp;
    yylex();
    printf("Total number of lines is:%d\n",lc);
    printf("Total number of digits is:%d\n",dc);
    printf("Total numbers Count is:%d\n",nc);
    printf("Total number of words is:%d\n",wc);
    printf("Total number of characters are as:%d\n",ch);
    return 0;
}