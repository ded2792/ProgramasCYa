//Se ingresa por teclado un n�mero positivo de uno o dos d�gitos (1..99)
//mostrar un mensaje indicando si el n�mero tiene uno o dos d�gitos.
//(Tener en cuenta que condici�n debe cumplirse para tener dos d�gitos un n�mero entero)


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
