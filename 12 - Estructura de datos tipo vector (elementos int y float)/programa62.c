//Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos
//Realizar un programa que muestre el curso que obtuvo el mayor promedio general.

#include <stdio.h>

int main ()
{
    int cursoA[5], cursoB[5], suma, i;
    double promedioA, promedioB;

    suma=0;
    printf("Ingresar las notas del primer curso: \n");
    for (i=0; i<5; i++)
    {
        printf("Cual es la nota del alumno %i: ", i + 1);
        scanf("%i", &cursoA[i]);
        suma=suma+cursoA[i];
    }

    promedioA=suma/5.0;
    printf("El promedio del curso A es: %.2lf\n", promedioA);


    suma=0;
    printf("Ingresar las notas del segundo curso: \n");
    for (i=0; i<5; i++)
    {
        printf("Cual es la nota del alumno %i: ", i + 1);
        scanf("%i", &cursoB[i]);
        suma=suma+cursoB[i];
    }

    promedioB=suma/5.0;
    printf("El promedio del curso B es: %.2lf\n", promedioB);

    if (promedioA > promedioB)
    {
        printf("El curso A tiene un promedio mayor.");
    }
    else
    {
        printf("El curso B tiene un promedio mayor");
    }

    return 0;
}
