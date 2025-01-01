//Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
//a) La cantidad de valores ingresados negativos.
//b) La cantidad de valores ingresados positivos.
//c) La cantidad de m�ltiplos de 15.
//d) El valor acumulado de los n�meros ingresados que son pares.


#include<stdio.h>
#include<conio.h>

int main()
{
    int f,valor,negativos,positivos,mult15,sumapares;
    negativos=0;
    positivos=0;
    mult15=0;
    sumapares=0;
    for(f=1; f<=10; f++)
    {
        printf("Ingrese valor:");
        scanf("%i",&valor);
        if (valor < 0)
        {
            negativos++;
        }
        else
        {
            if (valor>0)
            {
                positivos++;
            }
        }
        if (valor%15==0)
        {
            mult15++;
        }
        if (valor%2==0)
        {
            sumapares=sumapares+valor;
        }
    }
    printf("Cantidad de valores negativos:");
    printf("%i",negativos);
    printf("\n");
    printf("Cantidad de valores positivos:");
    printf("%i",positivos);
    printf("\n");
    printf("Cantidad de valores m�ltiplos de 15:");
    printf("%i",mult15);
    printf("\n");
    printf("Suma de los valores pares:");
    printf("%i",sumapares);
    getch();
    return 0;
}
