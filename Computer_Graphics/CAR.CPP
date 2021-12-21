#include <stdio.h>
#include <graphics.h>
#include <dos.h>
#include <conio.h>
void main()
{
   int i;
   int gd = DETECT, gm;

   initgraph(&gd,&gm,"");

   for (i = 0; i <= 800; i = i+10)
   {
   cleardevice();
	  line(0,300,800,300);
	  line(50+i,220,100+i,220);
	  line(50+i,220,30+i,250);
	  line(100+i,220,120+i,250);
	  line(0+i,300,0+i,330);

      rectangle(0+i,250,160+i,270);
      circle(30+i,285,12);
      circle(130+i,285,12);
      delay(100);
   }

   getch();
   closegraph();
}
