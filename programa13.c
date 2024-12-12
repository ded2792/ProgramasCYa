//Confeccionar un programa que pida por teclado tres notas de un alumno, calcule el promedio e imprima alguno de estos mensajes:
//Si el promedio es >=7 mostrar "Promocionado".
//Si el promedio es >=4 y <7 mostrar "Regular".
//Si el promedio es <4 mostrar "Reprobado".

#include<stdio.h>
#include<conio.h>

int main()
{

    int nota1, nota2, nota3;
    float promedio;

    printf("Ingresar la primer nota: ");
    scanf("%i", &nota1);
    printf("\n");
    printf("Ingresar la segunda nota: ");
    scanf("%i", &nota2);
    printf("\n");
    printf("Ingresar la tercer nota: ");
    scanf("%i", &nota3);
    printf("\n");

    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >= 7)
    {
        printf("Promocionado");
    }
    else
    {
        if (promedio >= 4)
        {
            printf("Regular");
        }
        else
        {
            printf("Reprobado");
        }
    }
    getch();
    return 0;
}
