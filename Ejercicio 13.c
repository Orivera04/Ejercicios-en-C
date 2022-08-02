//eJ4_Funciones.c
#include <stdio.h>
int main()
{
	FILE *fp;
	char cadena[]="Algoritmo y Estructura de Dartos",leida[20];
	fp=fopen("ejemplo5.txt","w");
	fputs(cadena,fp);
	fclose(fp);
	fp=fopen("ejemplo5.txt","r");
	fgets(leida,sizeof(leida)/sizeof(char),fp);
	fclose(fp);
	printf("\nCAdena leida: %s\n",leida);
	system("pause");
	return 0;
}
