#include <stdio.h>
#include <math.h>

void main()
{ 
	int selector,a,b,resultado;
	printf("Operaciones con potencia\n");
	printf("-------------------------\n");
	system("pause");
	system("cls");
	printf("Selecione la operacion\n1-Elevar al cuadrado un numero.\n2-Sacar la raiz cuadrado a un numero\n\n-> ");
    
	scanf("%d",&selector);
	switch(selector)
		   {
		    case 1:
				system("cls");
				printf("Dame el valor de la base -> ");
				scanf("%d",&b);
				printf("Dame el valor del exponente -> ");
				scanf("%d",&a);
	            resultado=pow(b,a);
	            printf("El resultado es: %d",resultado);
	            printf("\n");
		   
             case 2:
			 
			   system("cls");
				printf("Dame el valor del numero -> ");
				scanf("%d",&a);
				resultado=sqrt(a);
				printf("El resultado es: %d",resultado);
				printf("\n");
			  }
			 
			 
	system("pause");
	

}
