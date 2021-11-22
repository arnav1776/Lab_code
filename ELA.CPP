#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

void main()

{

   int gd=DETECT,gm;
   initgraph(&gd,&gm,"");

   int x,y,xc,yc,ec,ef;
   printf("Enter x radius:");
   scanf("%d",&xc);
   printf("Enter y radius:");
   scanf("%d",&yc);
   printf("Enter center coords:");
   scanf("%d%d",&x,&y);
   printf("Enter a number for color:");
   scanf("%d",&ec);
   printf("Enter a number for fillstyle:");
   scanf("%d",&ef);
   setcolor(ec);
   setfillstyle(ef,ec);
   ellipse(x,y,0,360,xc,yc);
   fillellipse(x,y,xc,yc);
   getch();
   closegraph();

}