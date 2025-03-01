#include <stdio.h>

int main()
{
    int vector[8];
    int i, suma, mayores36, mayores50;

    // Entrada de datos
    for (i = 0; i < 8; i++) {
        printf("Ingresar valor: ");
        scanf("%i", &vector[i]);
    }

    // Inicialización de variables
    suma = 0;
    mayores36 = 0;
    mayores50 = 0;

    // Procesamiento de datos
    for (i = 0; i < 8; i++) {
        suma += vector[i];

        if (vector[i] > 36) {
            mayores36 += vector[i];
        }

        if (vector[i] > 50) {
            mayores50++;
        }
    }

    // Salida de datos
    printf("La suma es: %i\n", suma);
    printf("La suma de números mayores a 36 es: %i\n", mayores36);
    printf("La cantidad de números mayores a 50 es: %i\n", mayores50);

    return 0;
}
