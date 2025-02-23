//Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, resultado;
    printf("Tabla del 5 \n");
    for(i=1; i<=10; i++)
    {
        resultado=5*i;
        printf("5 * %i = %i\n", i, resultado);
    }
    return 0;
}
