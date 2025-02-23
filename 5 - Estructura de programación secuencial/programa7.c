
//desarrollar un programa que pida el ingreso del precio de un artículo y la cantidad que lleva el cliente
//Mostrar lo que debe abonar el comprador. Definir una variable float para el precio del artículo.

#include<stdio.h>
#include<conio.h>

int main() {

int cantidad;
float precio, total;

printf("Ingrese la cantidad que va a llevar ");
scanf("%i", &cantidad);
printf("Ingrese el precio del producto $");
scanf("%f", &precio);
total = precio * cantidad;
printf("El total a pagar es: $");
printf("%f", total);
getch();
return 0;

}
