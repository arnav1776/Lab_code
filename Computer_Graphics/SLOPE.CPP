#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>

int main()
{
int gd = DETECT,gm;
clrscr();
initgraph(&gd,&gm,"");
int x1,y1,x2,y2,lt,ls,lc;
printf("Enter the coordinates");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
int m=(y2-y1)/(x2-x1);
int dx=x2-x1;
int dy=y2-y1;
int steps=(dx>=dy)?dx:dy;
int cons=y1-m*x1;
int count=0;

while(y1<y2 && x2>=x1)
{
putpixel(x1,y1,WHITE);
y1=y1+m*x1+cons;
x1=x1+1;
count++;
}
getch();
closegraph();
return 0;
}