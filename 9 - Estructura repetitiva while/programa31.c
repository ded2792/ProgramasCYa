//Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y
//cuántos menores.

#include<stdio.h>
#include<conio.h>

int main()
{
    int alumnos, nota, menor, mayor;
    alumnos=0;
    menor=0;
    mayor=0;

    while (alumnos<=10)
    {
        printf("Ingresar la nota: ");
        scanf("%i", &nota);
        if (nota>=7)
        {
            mayor=mayor+1;
        }
        else
        {
            menor=menor+1;
        }
        alumnos=alumnos+1;
    }
    printf("La cantidad de alumnos con una nota mayor o igual a 7 es: ");
    printf("%i", mayor);
    printf("\n");
    printf("La cantidad de alumnos con una nota menor a 7 es: ");
    printf("%i", menor);

    return 0;
}
