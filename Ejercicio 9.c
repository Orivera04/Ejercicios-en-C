//AperturaArchivo.c
#include <stdio.h>
#include <stdlib.h>
int main()
 {
	FILE *fp;
	fp=fopen("archivo.txt","r");
	if(fp=NULL)
	{
	printf("Error al abrir el archivo para leer ");
	exit(1);	
	}
	fclose(fp);
	return 0;
}
