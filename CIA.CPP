#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

void main()

{

   int gd=DETECT,gm;
   initgraph(&gd,&gm,"");
   int x,y,c,cc,cf;
   printf("Enter radius of circle:");

   scanf("%d",&c);
   printf("Enter center coordinates:");
   scanf("%d%d",&x,&y);
   printf("Enter a number for color:");
   scanf("%d",&cc);
   printf("Enter a number for fillstyle:");
   scanf("%d",&cf);
   setcolor(cc);
   setfillstyle(cf,cc);
   circle(x,y,c);
   floodfill(x,y,cc);
   getch(); 
   closegraph();

}