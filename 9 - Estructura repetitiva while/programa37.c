//Desarrollar un programa que permita cargar n números enteros y luego nos informe cuántos valores fueron pares y cuántos impares.
//Emplear el operador “%” en la condición de la estructura condicional (este operador retorna el resto de la división de dos valores

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,x,valor,pares,impares;
    x=1;
    pares=0;
    impares=0;
    printf("Cuantos numeros ingresara:");
    scanf("%i",&n);
    while (x <= n)
    {
        printf("Ingrese el valor:");
        scanf("%i",&valor);
        if (valor%2 == 0)
        {
            pares=pares + 1;
        }
        else
        {
            impares=impares + 1;
        }
        x=x + 1;
    }
    printf("Cantadad de pares:");
    printf("%i",pares);
    printf("\n");
    printf("Cantidad de impares:");
    printf("%i",impares);

    return 0;
}
