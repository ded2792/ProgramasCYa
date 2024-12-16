//Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10,
//imprimir en pantalla la leyenda "Alguno de los números es menor a diez".


#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3;
    printf("Ingrese primer valor:");
    scanf("%i",&num1);
    printf("Ingrese segundo valor:");
    scanf("%i",&num2);
    printf("Ingrese tercer valor:");
    scanf("%i",&num3);
    if (num1 < 10 || num2 < 10 || num3 < 10)
    {
        printf("Alguno de los números es menor a diez");
    }
    getch();
    return 0;
}
