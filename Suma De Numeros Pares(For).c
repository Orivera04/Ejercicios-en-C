#include <stdio.h>
void main()
{ 
int i=1,suma=0,par=0,impar=0;
printf("\t\t\t\t|----------|\n");
  printf("\t\t\t\t|Bienvenido|\n");
  printf("\t\t\t\t|----------|\n\n");
  printf("Programa para calcular los numeros pares del 1 al 100 y su suma\n");
  system("pause");
         for(i=1;i<=100;i++)
         { 
		    if(i%2==0)
		  	{
		     suma=suma+i;
			 printf("El numero:%d es par\n",i);		
			 par++;
			}		
			else
			{
			impar++;	
			}
					
		 } 
printf("La suma es:%d tenemos:%d numeros pares y:%d impares",suma,par,impar);
system("pause");
}