//Se cuenta con la siguiente información:
//Las edades de 5 estudiantes del turno mañana.
//Las edades de 6 estudiantes del turno tarde.
//Las edades de 11 estudiantes del turno noche.
//Las edades de cada estudiante deben ingresarse por teclado.
//a) Obtener el promedio de las edades de cada turno (tres promedios)
//b) Imprimir dichos promedios (promedio de cada turno)
//c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades menor.



#include<stdio.h>
#include<conio.h>

int main()
{
    int f,edad,suma1,suma2,suma3,pro1,pro2,pro3;
    suma1=0;
    suma2=0;
    suma3=0;
    for(f=1; f<=5; f++)
    {
        printf("Ingrese edad:");
        scanf("%i",&edad);
        suma1=suma1+edad;
    }
    pro1=suma1/5;
    printf("Promedio de edades del turno mañana:");
    printf("%i",pro1);
    printf("\n");
    for(f=1; f<=6; f++)
    {
        printf("Ingrese edad:");
        scanf("%i",&edad);
        suma2=suma2+edad;
    }
    pro2=suma2/6;
    printf("Promedio de edades del turno tarde:");
    printf("%i",pro2);
    printf("\n");
    for(f=1; f<=11; f++)
    {
        printf("Ingrese edad:");
        scanf("%i",&edad);
        suma3=suma3+edad;
    }
    pro3=suma3/11;
    printf("Promedio de edades del turno noche:");
    printf("%i",pro3);
    printf("\n");
    if (pro1 < pro2 && pro1 < pro3)
    {
        printf("El turno mañana tiene un promedio menor de edades.");
    }
    else
    {
        if (pro2 < pro3)
        {
            printf("El turno tarde tiene un promedio menor de edades.");
        }
        else
        {
            printf("El turno noche tiene un promedio menor de edades.");
        }
    }
    getch();
    return 0;
}
