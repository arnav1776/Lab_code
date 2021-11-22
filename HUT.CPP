#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
int gd = DETECT, gm;
clrscr();
initgraph(&gd, &gm, "");
rectangle(150,180,250,300);
rectangle(250,180,420,300);
rectangle(180,250,220,300);
line(200,100,150,180);
line(200,100,250,180);
line(200,100,370,100);
line(370,100,420,180);

line(10,75,50,35);
line(50,35,100,75);
line(85,100,190,35);
line(190,35,300,100);
line(85,100,300,100);
pieslice(85,100,30,120,95);

setfillstyle(SLASH_FILL, BLUE);
floodfill(152,182, WHITE);
floodfill(252,182, WHITE);
setfillstyle(WIDE_DOT_FILL, YELLOW);
floodfill(182,252, WHITE);
setfillstyle(XHATCH_FILL, GREEN);
floodfill(200,105, WHITE);
floodfill(210,105, WHITE);
setfillstyle(SOLID_FILL, GREEN);
floodfill(87,102, WHITE);

getch();
closegraph();
return 0;
}



