#include<stdio.h>
#include<conio.h>

//Se desea guardar los sueldos de 5 operarios.

int main()
{
    int f;
    int sueldos[5];
    //Carga del vector
    for (f=0; f<5; f++)
    {
        printf("Ingrese valor del sueldo:");
        scanf("%i",&sueldos[f]);
    }
    printf("Listado de sueldos.");
    printf("\n");
    //impresion del vector
    for(f=0; f<5; f++)
    {
        printf("%i",sueldos[f]);
        printf("\n");
    }
    getch();
    return 0;
}
