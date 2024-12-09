
//Realizar un programa que solicite al operador ingresar dos números y muestre por pantalla el mayor de ellos.

#include<stdio.h>
#include<conio.h>

void main() {

int num1, num2;
printf("Ingrese el primer valor: ");
scanf("%i", &num1);
printf("Ingrese el segundo valor: ");
scanf("%i", &num2);
if (num1 > num2) {
    printf("%i", num1);
}
else {
    printf("%i", num2);
}
getch();
return 0;

}
