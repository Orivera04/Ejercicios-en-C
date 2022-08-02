#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	char Carrera[40], Alumno[30],Asignatura[5][30],Ano_Lectivo[20],Ano_Academico[20],Semestre[20],Temporar[20],Caracter;
	int Nota[5],Promedio_Del_Semestre,I; 
	float Promedio,Suma=0;
	fp=fopen("UNI.txt","w");
	printf("|*************************************|\n");
	
	fputs("|*************************************|\n",fp);
	
	printf("|                UNI                  |\n");
	
	fputs("|                UNI                  |\n",fp);
	
    printf("|*************************************|\n");
    
    fputs("|*************************************|\n",fp);
    
    printf("Carrera -> ");
    gets(Carrera);
    fputs("Carrera -> ",fp);
    fputs(Carrera,fp);
    fputs("\n",fp);
    printf("Nombre Del Alumno -> ");
    gets(Alumno);
    fputs("Alumno-> ",fp);
    fputs(Alumno,fp);
    fputs("\n",fp);
    printf("Ano Lectivo  -> ");
    gets(Ano_Lectivo);
    fputs("Ano Lectivo -> ",fp);
    fputs( Ano_Lectivo,fp);
    fputs("\n",fp);
    printf("Ano Academico  -> ");
    gets(Ano_Academico);
    fputs("Ano Academico -> ",fp);
    fputs( Ano_Academico,fp);
    fputs("\n",fp);
    printf("Semestre  -> ");
    gets(Semestre);
    fputs("Ano Academico -> ",fp);
    fputs( Semestre,fp);
    fputs("\n",fp);
     fputs("Asignaturas : ",fp);
    fputs("\n",fp);
    for(I = 0 ; I < 5; I++)
    {
	printf("Asignatura [%d] -> ",I+1);
	/*scanf("%s",Asignatura[I]);*/
	fflush(stdin); 
	gets(Asignatura[I]);
	fputs(Asignatura[I],fp);
	fputs("-> ",fp);
	printf("Nota [%d] -> ",I+1);
	scanf("%d",&Nota[I]);
	Suma=Suma+Nota[I];
	sprintf(Temporar, "%d", Nota[I]); 
	fputs(Temporar,fp);
	fputs("\n",fp);
	}
	Promedio=Suma / 5;
	sprintf(Temporar, "%f", Promedio); 
	fputs("Promedio -> ",fp);
	fputs(Temporar,fp);
	fputs("\n",fp);
	fclose(fp);
	printf("Presione Una tecla Para Leer el Fichero");
	getwchar();
	getwchar();
    system("cls");
    FILE *Leer;
    Leer=fopen("UNI.txt","r");
         while (feof(fp) == 0)
	    {
		Caracter = fgetc(Leer);
		printf("%c",Caracter);
	    }
	system("pause");
    
    
    
}
