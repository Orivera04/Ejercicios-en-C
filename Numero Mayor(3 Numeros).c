#include <stdio.h>
#include <stdlib.h>
 
void main() {
        int a, b, c;
        int mayor, menor, medio;
        printf("Ingrese 3 numeros enteros (separados por espacio): ");
        scanf("%d%d%d", &a, &b, &c);
        printf("Ud. Ingreso: %d, %d y %d\n", a, b, c);
        if (a > b) {
                mayor = a;
                menor = b;
        } else {
                mayor = b;
                menor = a;
        }
        medio = c;
        if (c > mayor) {
                medio = mayor;
                mayor = c;
        }
        if (c < menor) {
                medio = menor;
                menor = c;
        }

        printf("\nDe Mayor a Menor, sus numeros son:\n");
        printf(" MAYOR: %d\n MEDIO: %d\n MENOR: %d\n\n", mayor, medio, menor);
        system("pause");    
}
