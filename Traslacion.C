#include <graphics.h>
#include <conio.h>
#include <stdio.h>
void main()
{
int X = 100, Y = 100, Driver = DETECT,Mode,I = 0;
char Tecla;
printf("Teclas :   a = izquierda , d = derecha, w = arriba, s = abajo, esc = salir");
getch();
initgraph(&Driver,&Mode,"C:\\tc\\bgi");
while(I == 0)
{
circle(X,Y,80);
Tecla = getch();
switch(Tecla)
{
case 97:
	 X= X - 5;
break;
case 27:
	  I=I+1;
	  break;
case 100:
   X=X+5;
  break;
case 119:
Y= Y -5;
break;
case 115:
Y=Y+5;
break;

}
cleardevice();
}

}