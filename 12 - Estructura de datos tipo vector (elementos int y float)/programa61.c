//Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. Obtener la suma de los dos
//vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente.


#include <stdio.h>

int main()
{
    int vector1[4], vector2[4], vector3[4], i;

    printf("Ingrese los valores del primer vector:\n");
    for (i=0; i<4; i++)
    {
        printf("Valor: ");
        scanf("%i", &vector1[i]);
    }

    printf("Ingrese los valores del segundo vector:\n");
    for (i=0; i<4; i++)
    {
        printf("Valor: ");
        scanf("%i", &vector2[i]);
    }

    printf("Los valores sumados de vector1 y vector2 son: \n");
    for (i=0; i<4; i++)
    {
        vector3[i]=vector1[i]+vector2[i];
        printf("%i", vector3[i]);
    }

    return 0;
}
