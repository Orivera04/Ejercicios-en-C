//eJ4_Funciones.c
#include <stdio.h>
int main()
{
	FILE *fp;
	char leido;
	fp=fopen("archivo.txt","r");
	leido=fgetc(fp);
	fclose(fp);
	printf("\nEl caracter leido es: %c\n",leido);
	system("pause");
	return 0;
}
