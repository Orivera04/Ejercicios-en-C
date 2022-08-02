#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *archivo;
	char caracteres[100];
	archivo=fopen("prueba.txt","r");
	if(archivo == NULL)
	{
	exit(1);
    }
		printf("\nEl contenido del archivo de prueba es \n\n");
	    while(feof(archivo) == 0)
	    {
		fgets(caracteres,100,archivo);
		printf("%s",caracteres);	
			
		}
		
	fclose(archivo);
	system("pause");
	return 0;	
	}
