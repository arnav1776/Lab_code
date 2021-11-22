#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"");
 int x1,y1,x2,y2,ls,lt,lc;
 printf("Enter coordinates for 1st point of line:");
 scanf("%d%d",&x1,&y1);
 printf("Enter coordinates for 2nd point of line:");
 scanf("%d%d",&x2,&y2);
 printf("Enter a number for linestyle:\n");
 scanf("%d",&ls);
 printf("Enter for 1/2/3 for thickness:\n");
 scanf("%d",&lt);
 printf("Enter a number for color:\n");
 scanf("%d",&lc);
 clrscr();
 setcolor(lc);
 setlinestyle(ls,1,lt);
 line(x1,y1,x2,y2);
 getch();
 closegraph();
}