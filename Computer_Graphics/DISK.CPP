#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"");
setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
circle(430,270,180);
floodfill(320,240,WHITE);
line(430,90,430,450);
line(250,270,610,270);
for(int i=0;i<=360;i+=90){
setfillstyle(SOLID_FILL,RED);
pieslice(430,270,0+i,90+i,180);
setfillstyle(SOLID_FILL,BLUE);
pieslice(430,270,90+i,180+i,180);
setfillstyle(SOLID_FILL,YELLOW);
pieslice(430,270,180+i,270+i,180);
delay(100);
cleardevice();
}

getch();
closegraph();
return 0;
}
