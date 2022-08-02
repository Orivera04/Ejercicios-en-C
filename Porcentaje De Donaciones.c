#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	float pepe=0,pedro=0,paco=0,cantidadtotal=0;
	printf("Ingresa las cantidades(pepe,pedro,paco)\n");
	scanf("%f%f%f",&pepe,&pedro,&paco);
	cantidadtotal=pepe+pedro+paco;
	printf("Cantidad total:%f\n",cantidadtotal);
	pedro=pedro/cantidadtotal;
	pepe=pepe/cantidadtotal;
	paco=paco/cantidadtotal;
	printf("pepe=%f\npedro=%f\npaco=%f",pepe,pedro,paco);
	getch();
}
