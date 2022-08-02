#include <stdio.h>
int main(int argc, char **argv) {
	FILE *fp;
	char buffer[100]="Esto es un texto dentro del fichero .\n";
	fp=fopen("fichero.txt","r+");
	fprintf(fp,buffer);
	fprintf(fp,"%s","\nEste es otro texto dentro del fichero.");
	fclose(fp);
	return 0;
}
