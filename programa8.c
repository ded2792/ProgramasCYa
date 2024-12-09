
//Ingresar el sueldo de una persona, si supera los 3000 pesos mostrar un mensaje en pantalla indicando que debe abonar impuestos

#include<stdio.h>
#include<conio.h>

int main() {


float sueldo;
printf("Ingrese el sueldo: ");
scanf("%f", &sueldo);
if (sueldo>3000) {
    printf("Esta persona debe abonar impuestos");
}
getch();
return 0;

}
