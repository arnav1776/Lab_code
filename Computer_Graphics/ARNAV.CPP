#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>

int main(){
int gd = DETECT,gm;
initgraph(&gd,&gm,"");
clrscr();
setbkcolor(RED);
arc(100,100,275,110,30);
arc(100,160,255,90,30);
line(100,130,170,130);
line(170,70,170,200);
arc(220,75,180,0,30);
line(270,70,270,200);
arc(275,40,70,260,29);
line(370,75,370,200);
arc(370,120,90,270,30);
line(70,70,420,70);
getch();
closegraph();
return 0;
}