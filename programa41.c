//Escribir un programa que lea 10 n�meros enteros y luego muestre cu�ntos valores ingresados fueron m�ltiplos de 3 y cu�ntos de 5.
//Debemos tener en cuenta que hay n�meros que son m�ltiplos de 3 y de 5 a la vez.

#include<stdio.h>
#include<conio.h>

int main()
{
    int mul3,mul5,valor,f;
    mul3=0;
    mul5=0;
    for(f=1; f <= 10 ;f++)
    {
        printf("Ingrese un valor:");
        scanf("%i",&valor);
        if (valor%3 == 0)
        {
            mul3=mul3+1;
        }
        if (valor%5 == 0)
        {
            mul5=mul5+1;
        }
    }
    printf("Cantidad de valores ingresados multiplos de 3:");
    printf("%i",mul3);
    printf("\n");
    printf("Cantidad de valores ingresados multiplos de 5:");
    printf("%i",mul5);

    return 0;
}
