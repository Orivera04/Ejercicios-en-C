#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *archivo;
	char caracter;
	archivo=fopen("prueba.txt","r");
	if(archivo == NULL)
	{
	printf("\n Error de apertura del archivo \n\n");
	}
	else
	{
		printf("\nEl contenido del archivo de prueba es \n\n");
	    
	    while(feof(archivo) == 0)
	    {
		caracter = fgetc(archivo);
		printf("%c",caracter);	
			
		}
		}
	fclose(archivo);
	system("pause");
	return 0;	
	}
