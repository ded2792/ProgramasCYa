//Realizar la carga del lado de un cuadrado, mostrar por pantalla el
//perímetro del mismo (El perímetro de un cuadrado se calcula multiplicando el valor del lado por cuatro)
#include<stdio.h>
#include<conio.h>

int main()
{
    int lado, perimetro;
    printf("Ingrese el valor del lado del cudrado: ");
    scanf("%i",&lado);
    perimetro = lado * 4;
    printf("El perimetro del cuadrado es: ");
    printf("%i", perimetro);
    getch();
    return 0;
}
