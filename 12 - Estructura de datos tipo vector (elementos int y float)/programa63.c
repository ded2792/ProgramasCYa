//Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.

#include <stdio.h>

int main()
{

    int vector[10], i, orden;

    for (i=0; i<10; i++)
    {
        printf("Ingresar los valores a guardar: ");
        scanf("%i", &vector[i]);
    }

    orden=1;
    for (i=0; i<9; i++)
    {
        if (vector[i+1] < vector[i])
        {
            orden=0;
        }
    }

    if (orden==1)
    {
        printf ("El vector esta ordenado de menor a mayor");
    }
    else
    {
        printf("El vector no esta ordenado de menor a mayor");
    }

    return 0;
}
