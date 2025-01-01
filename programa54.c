//Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga).
//Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.

#include<stdio.h>
#include<conio.h>

int main()
{
    int suma,valor;
    suma=0;
    do {
        printf("Ingrese un valor:");
        scanf("%i",&valor);
        if (valor != 9999)
        {
            suma=suma+valor;
        }
    }while (valor != 9999);
    printf("El valor acumulado es ");
    printf("%i",suma);
    printf("\n");
    if (suma == 0)
    {
        printf("El valor acumulado es cero.");
    }
    else
    {
        if (suma > 0)
        {
            printf("El valor acumulado es positivo.");
        }
        else
        {
            printf("El valor acumulado es negativo");
        }
    }
    getch();
    return 0;
}
