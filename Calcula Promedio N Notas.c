#include <stdio.h>
void main()
{ 
int i=1,suma=0,promedio=0,nota=0,N=0;
printf("\t\t\t\t|----------|\n");
  printf("\t\t\t\t|Bienvenido|\n");
  printf("\t\t\t\t|----------|\n\n");
  printf("Programa para calcular N notas y su promedio\n");
  printf("Ingrese Cantidad de Notas a Calcular -> ");
  scanf("%d",&N);
        for(i=1;i<=N;i++)
	    {
		 scanf("%d",&nota);
		 suma=suma + nota;	
			
	    }
		promedio=suma/N;
		printf("En total son:%d notas");
printf("El promedio es:%d\n",promedio);
system("pause");

}
