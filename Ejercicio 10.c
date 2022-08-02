#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	char c1,c2;
	fp1=fopen("archivo.txt","r");
	if(fp1== NULL)
	{
	printf("Error al abrir el archivo para leer");
	system("pause");
	exit(1);	
	}
	fp2=fopen("copia.txt","w");
	if(fp2==NULL)
	{
	printf("Error al abrir  el archivo copia.txt");
	system("pause");
	exit(1);	
	}
	fscanf(fp1,"%c%c",&c1,&c2);
	fscanf(fp2,"%c%c",c1,c2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
