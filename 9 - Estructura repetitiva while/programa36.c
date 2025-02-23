//Realizar un programa que permita cargar dos listas de 15 valores cada una
//Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor (mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
//Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.

#include<stdio.h>
#include<conio.h>

int main()
{
    int lista1, lista2, num, cont;
    lista1=0;
    lista2=0;
    cont=0;
    while (cont<15)
    {
        printf("Ingresar los valores a cargar en la lista 1: ");
        scanf("%i", &num);
        lista1=lista1+num;
        cont=cont+1;
    }
    cont=0;
    while (cont<15)
    {
        printf("Ingresar los valores a cargar en la lista 2: ");
        scanf("%i", &num);
        lista2=lista2+num;
        cont=cont+1;
    }
    if (lista1 > lista2)
    {
        printf("Lista 1 mayor\n");
    }
    else if (lista2 > lista1)
    {
        printf("Lista 2 mayor\n");
    }
    else
    {
        printf("Listas iguales\n");
    }
    return 0;
}
