//Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad


#include<stdio.h>
#include<conio.h>

int main()
{
    int dd,mm,aa;
    printf("Ingrese nro de dia:");
    scanf("%i",&dd);
    printf("Ingrese nro de mes:");
    scanf("%i",&mm);
    printf("Ingrese nro de año:");
    scanf("%i",&aa);
    if (mm == 12 && dd == 25)
    {
        printf("La fecha ingresada corresponde a navidad.");
    }
    getch();
    return 0;
}
