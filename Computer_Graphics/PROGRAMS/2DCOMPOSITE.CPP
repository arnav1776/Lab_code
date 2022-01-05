#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
int xa,xb,xc,ya,yb,yc,y1a,y1b,y1c,x1a,x1b,x1c,x2a,x2b,x2c,y2a,y2b,y2c;
int x3a,x3b,x3c,y3a,y3b,y3c,x4a,x4b,x4c,y4a,y4b,y4c,x5a,x5b,x5c,y5a,y5b,y5c;
int tx,shx,t,ch,shy;
float ang,theta,sx,sy;
int main(void)
{
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode,"");
printf("\n\t\t\t 2D Composite Transformations");
printf("\n\n Enter all coordinates values :");
scanf("%d %d %d %d %d %d",&xa,&ya,&xb,&yb,&xc,&yc);
printf("\n\n The original Image"); 
line(xa,ya,xb,yb); 
line(xb,yb,xc,yc);
line(xc,yc,xa,ya);
printf("\n\n Enter the value tranlsation factor :"); 
scanf("%d",&tx);
printf("\n\n After Translation ");
x1a=xa+tx;
x1b=xb+tx;
x1c=xc+tx;
y1a=ya;
y1b=yb;
y1c=yc;
line(x1a,y1a,x1b,y1b); 
line(x1b,y1b,x1c,y1c);
line(x1c,y1c,x1a,y1a);
delay(1);
printf("\n\n Next Operation is Rotation");
printf("\n\n Enter the rotation angle :"); 
scanf("%f",&ang);
theta=((ang*3.14)/180); 
x2a=x1a*cos(theta)-y1a*sin(theta);
y2a=x1a*sin(theta)+y1a*cos(theta);
x2b=x1b*cos(theta)-y1b*sin(theta);
y2b=x1b*sin(theta)+y1b*cos(theta);
x2c=x1c*cos(theta)-y1c*sin(theta);
y2c=x1c*sin(theta)+y1c*cos(theta);
printf("\n\n After Rotation "); 
line(x2a,y2a,x2b,y2b);
line(x2b,y2b,x2c,y2c);
line(x2c,y2c,x2a,y2a);
delay(1);
printf("\n\n Next Operation is Scaling"); 
printf("\n\n Enter the Scale factor :");
scanf("%f %f",&sx,&sy); 
x3a=x2a+sx; 
y3a=y2a+sy;
x3b=x2b+sx;
y3b=y2b+sy;
x3c=x2c+sx;
y3c=y2c+sy;
printf("\n\n After Scaling ");
line(x3a,y3a,x3b,y3b);
line(x3b,y3b,x3c,y3c);
line(x3c,y3c,x3a,y3a);
delay(1);
printf("\n\n Next Operation is Shearing"); 
printf("\n\n Enter 1 for x-axis \n 2 for y-axis: "); 
scanf("%d",&ch);
if(ch==1) 
{
printf("\n\n Enter the x-SHEAR (^.^) Value: ");
scanf("%d",&shx);
}
else
{
printf("\n\n Enter the y-SHEAR (^.^) Value: ");
scanf("%d",&shy);
}
if(ch==1)
{
x3a=x3a+shx*y3a;
y4a=y3a;
x3b=x3a+shx*y3a;
y4b=y3b;
x3c=x3a+shx*y3a;
y4c=y3c;
}
else
{
x4a=x3a;
y3a=y3a+shy*x3a;
x4b=x3b;
y3b=y3b+shy*x3b;
x4c=x3c;
y3c=y3c+shy*x3c;
}
printf("\n\n After Shearing "); 
line(x3a,y3a,x3b,y3b);
line(x3b,y3b,x3c,y3c);
line(x3c,y3c,x3a,y3a);
delay(1);
printf("\n\n Next Operation is Reflection");
t=abs(y3a-y3c); 
x5a=x3a;
x5b=x3b;
x5c=x3c;
y5a=y3a+10+(2*t);
y5b=y3b+10;
y5c=y3c+10;
printf("\n\n After Reflection "); 
line(x5a,y5a,x5b,y5b);
line(x5b,y5b,x5c,y5c);
line(x5c,y5c,x5a,y5a);
getch();
closegraph();
return 0;
}
