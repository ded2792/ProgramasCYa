//Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano
//Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. Al comenzar el programa se pide que
//se ingrese la cantidad de puntos a procesar.


#include<stdio.h>
#include<conio.h>

int main()
{
    int n,f,x,y,cant1,cant2,cant3,cant4;
    cant1=0;
    cant2=0;
    cant3=0;
    cant4=0;
    printf("Cantidad de puntos:");
    scanf("%i",&n);
    for(f=1; f<=n; f++)
    {
        printf("Ingrese coordenada x:");
        scanf("%i",&x);
        printf("Ingrese coordenada y:");
        scanf("%i",&y);
        if (x > 0 && y > 0)
        {
            cant1++;
        }
        else
        {
            if (x < 0 && y > 0)
            {
                cant2++;
            }
            else
            {
                if (x < 0 && y < 0)
                {
                    cant3++;
                }
                else
                {
                    if (x > 0 && y < 0)
                    {
                        cant4++;
                    }
                }
            }
        }
    }
    printf("Cantidad de puntos en el primer cuadrante:");
    printf("%i",cant1);
    printf("\n");
    printf("Cantidad de puntos en el segundo cuadrante:");
    printf("%i",cant2);
    printf("\n");
    printf("Cantidad de puntos en el tercer cuadrante:");
    printf("%i",cant3);
    printf("\n");
    printf("Cantidad de puntos en el cuarto cuadrante:");
    printf("%i",cant4);
    getch();
    return 0;
}
