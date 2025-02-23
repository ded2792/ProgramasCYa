//Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo, negativo o nulo (es decir cero)

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Ingrese un valor:");
    scanf("%i",&num);
    if (num == 0)
    {
        printf("Se ingreso el cero");
    }
    else
    {
        if (num > 0)
        {
            printf("Se ingreso un valor positivo");
        }
        else
        {
            printf("Se ingreso un valor negativo");
        }
    }
    getch();
    return 0;
}
