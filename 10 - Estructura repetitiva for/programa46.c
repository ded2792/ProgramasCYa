//Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre la tabla de multiplicar del mismo
//(los primeros 12 t�rminos)
//Ejemplo: Si ingreso 3 deber� aparecer en pantalla los valores 3, 6, 9, hasta el 36.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,valor;
    printf("Ingresar un valor entre 1 y 10:");
    scanf("%i",&valor);
    for(i=valor; i<=valor*12; i=i+valor)
    {
        printf("%i",i);
        printf("-");
    }

    return 0;
}
