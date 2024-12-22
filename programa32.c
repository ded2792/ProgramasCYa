//Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas.

#include<stdio.h>
#include<conio.h>

int main()
{
    int cantPersonas, cont;
    float altura, promedio, acu;
    printf("Cuantas personas se van a ingresar? ");
    scanf("%i",&cantPersonas);
    cont=0;
    acu=0;

    while (cont<cantPersonas)
    {
        printf("Ingresar la algura de la persona: ");
        scanf("%f",&altura);
        acu=altura+acu;
        cont=cont+1;
    }
    promedio=acu/cantPersonas;
    printf("El promedio de la altura es: ");
    printf("%f",promedio);
    return 0;
}
