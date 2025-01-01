//Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados


#include<stdio.h>
#include<conio.h>

int main()
{
    int num, i, suma;
    suma=0;

    printf("Ingresar 10 valores \n");
    for(i=1; i<=10; i++)
    {
        printf("Cual es el valor a cargar?: ");
        scanf("%i", &num);
        if (i>5){
            suma=suma+num;
        }
    }
    printf("La suma de los ultimos 5 valores ingresados es: %i\n", suma);

    return 0;
}
