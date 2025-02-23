//Escribir un programa en el cual se ingresen cuatro números,
//calcular e informar la suma de los dos primeros y el producto del tercero y el cuarto.

#include<stdio.h>
#include<conio.h>

int main() {

int num1, num2, num3, num4, suma, producto;
printf("Ingresar el valor del primer numero: ");
scanf("%i", &num1);
printf("Ingresar el valor del segundo numero: ");
scanf("%i", &num2);
printf("Ingresar el valor del tercer numero: ");
scanf("%i", &num3);
printf("Ingresar el valor del cuarto numero: ");
scanf("%i", &num4);
suma = num1 + num2;
producto = num3 * num4;
printf("La suma de los dos primeros numeros es: ");
printf("%i", suma);
printf("\n");
printf("El producto de los ultimos dos numeros es: ");
printf("%i", producto);
getch();
return 0;
}
