//Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información:
//cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contestó correctamente.
//confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo según el porcentaje de respuestas correctas que ha obtenido
//y sabiendo que:
//Nivel máximo:	Porcentaje>=90%.
//Nivel medio:	Porcentaje>=75% y <90%.
//Nivel regular:	Porcentaje>=50% y <75%.
//Fuera de nivel:	Porcentaje<50%.

#include<conio.h>
#include<conio.h>

int main()
{
    int totalPreguntas,totalCorrectas;
    printf("Ingrese la cantidad total de preguntas del examen:");
    scanf("%i",&totalPreguntas);
    printf("Ingrese la cantidad total de preguntas contestadas correctamente:");
    scanf("%i",&totalCorrectas);
    int porcentaje=totalCorrectas * 100 / totalPreguntas;
    if (porcentaje >= 90)
    {
        printf("Nivel maximo");
    }
    else
    {
        if (porcentaje >= 75)
        {
            printf("Nivel medio");
        }
        else
        {
            if (porcentaje >= 50)
            {
                printf("Nivel regular");
            }
            else
            {
                printf("Fuera de nivel");
            }
        }
    }
    getch();
    return 0;
}
