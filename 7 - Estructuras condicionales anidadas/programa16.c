//Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras
//y muestre un mensaje indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor.

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Ingrese un valor de hasta tres digitos positivo:");
    scanf("%i",&num);
    if (num < 10)
    {
        printf("Tiene un digito");
    }
    else
    {
        if (num < 100)
        {
            printf("Tiene dos digitos");
        }
        else
        {
            if (num < 1000)
            {
                printf("Tiene tres digitos");
            }
            else
            {
                printf("Error en la entrada de datos.");
            }
        }
    }
    getch();
    return 0;
}
