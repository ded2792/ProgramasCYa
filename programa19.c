//Se carga una fecha (d�a, mes y a�o) por teclado. Mostrar un mensaje si corresponde al primer trimestre del a�o (enero, febrero o marzo)
//Cargar por teclado el valor num�rico del d�a, mes y a�o.
//Ejemplo: dia:10 mes:2 a�o:2017.

#include<stdio.h>
#include<conio.h>

int main()
{
    int dd,mm,aa;
    printf("Ingrese nro de dia:");
    scanf("%i",&dd);
    printf("Ingrese nro de mes:");
    scanf("%i",&mm);
    printf("Ingrese nro de a�o:");
    scanf("%i",&aa);
    if (mm==1 || mm==2 || mm==3)
    {
        printf("Corresponde al primer trimestre");
    }
    getch();
    return 0;
}
