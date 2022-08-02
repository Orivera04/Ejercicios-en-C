#include <stdio.h>
void main()
{
  int a,b,c; 
  printf("\t\t\t\t|----------|\n");
  printf("\t\t\t\t|Bienvenido|\n");
  printf("\t\t\t\t|----------|\n ");
  printf("\nIngrese los tres lados -> ");
  scanf("%d%d%d",&a,&b,&c);
         if(a==b & b==c)
		{
		printf("Es equilatero\n");		
		}
		if(a!=b & b!=c)
		{
		printf("Es escaleno\n");	
		}
	    if(a==b & a!=c)
	    {
			printf("Es Isosceles\n");	
				
	     }
  system("pause");
}
