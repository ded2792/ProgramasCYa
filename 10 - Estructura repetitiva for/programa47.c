//Realizar un programa que lea los lados de n triángulos, e informar:
//a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
//b) Cantidad de triángulos de cada tipo.
//c) Tipo de triángulo que posee menor cantidad.

#include<stdio.h>
#include<conio.h>

int main()
{
    int cantTriangulos, lado1, lado2, lado3, equilatero, isosceles, escaleno, menorCant, i;

    printf("Cuantos triangulos se van a ingresar? ");
    scanf("%i", &cantTriangulos);
    equilatero=0;
    isosceles=0;
    escaleno=0;
    menorCant=0;

    for(i=1; i<=cantTriangulos; i++)
    {
        printf("Triangulo numero %i\n", i);
        printf("Ingresar el valor del primer lado: ");
        scanf("%i", &lado1);
        printf("Ingresar el valor del segundo lado: ");
        scanf("%i", &lado2);
        printf("Ingresar el valor del tercer lado: ");
        scanf("%i", &lado3);

        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("El triangulo es equilatero.");
            printf("\n");
            equilatero++;
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        {
            printf("El triangulo es isosceles.");
            printf("\n");
            isosceles++;
        }
        else
        {
            printf("El triangulo es escaleno.");
            printf("\n");
            escaleno++;
        }

    }

    printf("Cantidad de triangulos equilateros: %i,\n", equilatero);
    printf("Cantidad de triangulos isosceles: %i,\n", isosceles);
    printf("Cantidad de triangulos escalenos: %i,\n", escaleno);

    if (equilatero < isosceles && equilatero < escaleno)
    {
        printf("Hay menor cantidad de triangulos equilateros.");
    }
    else if (isosceles < escaleno)
    {
        printf("Hay menor cantidad de triangulos isosceles.");
    }
    else
    {
        printf("Hay menor cantidad de triangulos escalenos.");
    }

    return 0;
}
