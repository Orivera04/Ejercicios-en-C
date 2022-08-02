#include <stdio.h>
#include <math.h>
void main()
{
	char  cuadrado=253;
	float a,b,c,disc,resultado,resultado2;
  printf("Ecuacion Cuadratica\n");
  printf("-------------------\nAx%c + Bx +C\n\n",cuadrado);
  printf("Dame el valor de A -> ");
  scanf("%f",&a);
  while(a==0)
	    {
		printf("Error a no puede ser igual a 0");
		}
		printf("Dame el valor de B -> ");
        scanf("%f",&b);
        printf("Dame el valor de C -> ");
        scanf("%f",&c);
        disc=pow(b,2)-(4*a*c);
        if(disc>0)
			{
			resultado=((-b+sqrt(disc))/2*a);
            resultado2=((-b-sqrt(disc))/2*a);
			
			  
			printf("El discrimante es mayor que 0\nPor lo tanto la ecuacion tiene dos soluciones");
			printf("X1=%.2f  ",resultado);
			printf("X2=%.2f",resultado2);
			}
			if(disc=0)
			{
			resultado=((-b+sqrt(disc))/2*a); 
			printf("El discrimante es igual que 0\nPor lo tanto la ecuacion tiene solo una solucion");
			printf("X1=%.2f  ",resultado);
			}
			if(disc<0)
			 {
			 resultado=((-b+sqrt(disc))/2*a);
			 resultado=((-b-sqrt(disc)/2*a));
			printf("El discriminante es menor que 0\nNo hay soluciones en los numeroes reales");
			printf("X1=%.2f  ",resultado);
			printf("X2=%.2f",resultado2);		
	         }
}

