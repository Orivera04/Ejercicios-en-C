#include <stdio.h>
void main()
{ 
int i=1,departamento=0,capital=0,clave=0;
printf("\t\t\t\t|----------|\n");
  printf("\t\t\t\t|Bienvenido|\n");
  printf("\t\t\t\t|----------|\n\n");
  printf("Programa para calcular si 50 habitantes son de la capital o de los departamentos\n");
  printf("Ingresa tu clave(1:capital/2:departamento) -> ");
      for(i=1;i<=50;i++)
      {
	   scanf("%d",&clave);
	       if(clave==1)
	    	{
			 capital++;	
				
			}
			else if(clave==2)
			{
			departamento++;	
			}
			else
			{
			printf("Error\n");
			i=i-1;	
		    }
			
	  }
	  	printf("Los de la capital son:%d y los de los departamentos:%d\n",capital,departamento);
		system("pause");	
}