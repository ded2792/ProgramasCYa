//Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.


#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3;
    printf("Ingrese primer valor:");
    scanf("%i",&num1);
    printf("Ingrese segunda valor:");
    scanf("%i",&num2);
    printf("Ingrese tercer valor:");
    scanf("%i",&num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%i",num1);
        }
        else
        {
            printf("%i",num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%i",num2);
        }
        else
        {
            printf("%i",num3);
        }
    }
    getch();
    return 0;
}
