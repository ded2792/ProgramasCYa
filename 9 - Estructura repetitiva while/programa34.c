//Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)

#include<stdio.h>
#include<conio.h>

int main()
{
    int cont, suma;
    cont=1;
    suma=11;
    while (cont<25)
    {
        printf("%i", suma);
        printf(" ");
        cont=cont+1;
        suma=suma+11;
    }
    return 0;
}
