//Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".

#include<stdio.h>
#include<conio.h>

int main()
{
    int nota1,nota2,nota3;
    float promedio;
    printf("Ingrese primer nota:");
    scanf("%i",&nota1);
    printf("Ingrese segunda nota:");
    scanf("%i",&nota2);
    printf("Ingrese tercer nota:");
    scanf("%i",&nota3);
    promedio = (nota1 + nota2 + nota3) / 3;
    if (promedio >= 7)
    {
        printf("Promocionado");
    }
    else {
        printf("No promociona");
    }
    getch();
    return 0;
}
