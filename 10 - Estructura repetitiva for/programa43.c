//Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de la base y la altura de un triángulo
//El programa deberá informar:
//a) De cada triángulo la medida de su base, su altura y su superficie.
//b) La cantidad de triángulos cuya superficie es mayor a 12.

#include<stdio.h>
#include<conio.h>

int main()
{
    int basetri,altura,superficie,cantidad,f,n;
    cantidad=0;
    printf("Cuantos triangulos procesará:");
    scanf("%i",&n);
    for(f=1; f<=n ;f++)
    {
        printf("Ingrese el valor de la base:");
        scanf("%i",&basetri);
        printf("Ingrese el valor de la altura:");
        scanf("%i",&altura);
        superficie=basetri*altura/2;
        printf("La superficie es:");
        printf("%i",superficie);
        printf("\n");
        if (superficie>12)
        {
            cantidad=cantidad+1;
        }
    }
    printf("La cantidad de triangulos con superficie superior a 12 son:");
    printf("%i",cantidad);
    getch();
    return 0;
}

