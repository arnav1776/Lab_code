#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int i,count=0;

    printf("Enter the string:\n");
    gets(str);
    for(i=0; i<strlen(str); i++)
	{
        if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
        count++;
    }
    printf("The total operators of the given string= %d",count);
    return 0;
}
