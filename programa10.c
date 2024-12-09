//Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma y diferencia
//en caso contrario informar el producto y la división del primero respecto al segundo.


#include<stdio.h>
#include<conio.h>

int main() {


int num1, num2, suma, diferencia, producto, divicion;

printf("Ingresar el primer valor: ");
scanf("%i", &num1);
printf("Ingresar el segundo valor: ");
scanf("%i", &num2);

if (num1 > num2) {
    suma = num1 + num2;
    diferencia = num1 - num2;
    printf("La suma de los numeros es: ");
    printf("%i", suma);
    printf("\n");
    printf("La diferencia de los numeros es: ");
    printf("%i", diferencia);
}
else {
    producto = num1 * num2;
    divicion = num1 / num2;
    printf("El producto de los numeros es: ");
    printf("%i", producto);
    printf("\n");
    printf("La division de los numeros es: ");
    printf("%i", divicion);
}

getch();
return 0;

}
