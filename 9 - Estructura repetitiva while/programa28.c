//Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor ingresado de uno en uno.
//Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30.

#include<stdio.h>
#include<conio.h>

int main()
{

    int x;
    x = 1;
    int y;
    printf("Ingresar un valor positivo: ");
    scanf("%i", &y);

    while (x <= y)
    {
        printf("%i", x);
        printf(" - "),
        x = x + 1;
    }

    getch();
    return 0;
}
