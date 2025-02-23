//Se ingresa por teclado un número positivo de uno o dos dígitos (1..99)
//mostrar un mensaje indicando si el número tiene uno o dos dígitos.
//(Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)


#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Ingresar un numero entero de 1 o 2 digitos:");
    scanf("%i",&num);
    if (num < 10)
    {
        printf("Tiene un digito");
    }
    else
    {
        printf("Tiene dos digitos");
    }
    getch();
    return 0;
}
