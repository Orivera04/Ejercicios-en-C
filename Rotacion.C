#include <graphics.h>
#include <conio.h>
#include <math.h>
#define PI 3.141592
void main()
{
float X=300, Y=222,X1=330,Y1= 280;
float X2=X1,Y2=Y1,Angulo;
int Driver = DETECT,Mode,I = 0;
char Tecla;
printf("Teclas :   w = Rotar , esc  = salir ");
getch();
initgraph(&Driver,&Mode,"C:\\tc\\bgi");
while(I == 0)
{
line(X,Y,X2,Y2);
Tecla =
getch();
switch(Tecla)
{
case 119:
X2 =  ((( X - X1) * cos (1)) - ((Y1 - Y) * sin(1)) + X1);
Y2 = ((( Y1 - Y ) * cos(1)) - ((X-X1) * sin(1)) + Y1);
X1 = X2;
Y1 = Y2;
break;
case 27:
I=I+1;
break;
}
cleardevice();
}

}