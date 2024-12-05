//Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio

#include<stdio.h>
#include<conio.h>

int main() {

int num1, num2, num3, num4, suma, promedio;
printf("Ingrese primer valor: ");
scanf("%i", &num1);
printf("Ingrese segundo valor: ");
scanf("%i", &num2);
printf("Ingrese tercer valor: ");
scanf("%i", &num3);
printf("Ingrese cuarto valor: ");
scanf("%i", &num4);
suma = num1 + num2 + num3 + num4;
promedio = suma / 4;
printf("La suma de los valores es: ");
printf("%i", suma);
printf("\n");
printf("El promedio es: ");
printf("%i", promedio);
getch();
return 0;


}
