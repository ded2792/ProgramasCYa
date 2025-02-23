//Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores enteros x e y (distintos a cero).
//Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)



#include<stdio.h>
#include<conio.h>

int main()
{
    int x, y;
    printf("Ingrese coordenada x:");
    scanf("%i",&x);
    printf("Ingrese coordenada y:");
    scanf("%i",&y);
    if (x > 0 && y > 0)
    {
        printf("Se encuentra en el primer cuadrante");
    }
    else
    {
        if (x < 0 && y > 0)
        {
            printf("Se encuentra en el segundo cuadrante");
        }
        else
        {
            if (x < 0 && y < 0)
            {
                printf("Se encuentra en el tercer cuadrante");
            }
            else
            {
                printf("Se encuentra en el cuarto cuadrante");
            }
        }
    }
    getch();
    return 0;
}
