#include<stdio.h>
#include<string.h>
int main()
{
int i,flag=0,m;
char s[32][10]={"auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"},st[32];

printf("\n enter the string :");
scanf("%d",st);
for(i=0;i<32;i++)
{
m=strcmp(st,s[i]);
if(m==0)
flag=1;
}
if(flag==0)
printf("\n it is a keyword");
else

printf("\n it is not a keyword");

return 0;
}

