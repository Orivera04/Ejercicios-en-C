#include <stdio.h>
#include <conio.h>

void main(main)
{
float NotaPrimaria,NotaExamen,PromedioNotaPrimaria,PromedioNotaExamen;
float PromedioTotal;
printf("\n\tBienvenidos\n");
printf("\nEscribe tu promedio de secundaria");
scanf("%f",&NotaPrimaria);

printf("La nota del examen\n");
scanf("%f",&NotaExamen);

PromedioNotaPrimaria = NotaPrimaria * 0.30;
PromedioNotaExamen = NotaExamen* 0.70;

PromedioTotal = PromedioNotaPrimaria + PromedioNotaExamen;

printf("Tu promedio total es:%.2f",PromedioTotal);
getch();

getch();
}