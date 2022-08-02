//eJ3_Funciones.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char caracter;
	printf("\nIntroduce caracter :\n");
	scanf("%c",&caracter);
	fp=fopen("caracter.txt","w");
	fputc(caracter,fp);
	fclose(fp);
	printf("\nCaracter guardado en el fichero!!\n");
	system("pause");
	return 0;
}

