#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int countChar=0;

    fp=fopen("myfile_1.txt","r");

    for(ch=getc(fp);ch!=EOF;ch=getc(fp)){
        ++countChar;
    }
    printf("Total number of characters in a given file is:%d",countChar);
    return 0;
}