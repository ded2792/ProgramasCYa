//En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500
//realizar un programa que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300
//Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.

#include<stdio.h>
#include<conio.h>

int main ()
{
    int cantEmpledos, sueldo, totalSueldos, menos300, mas300, cont;

    printf("Cuantos empleados tiene la empresa: ");
    scanf("%i", &cantEmpledos);
    cont=0;
    menos300=0,
    mas300=0;
    totalSueldos=0;
    while (cont<cantEmpledos)
    {
        printf("¿Cual es el sueldo del empleado (entre $100 y $500)? ");
        scanf("%i", &sueldo);
        if (sueldo<300){
            menos300=menos300+1;
        }
        else {
            mas300=mas300+1;
        }
        cont=cont+1;
        totalSueldos=totalSueldos+sueldo;
    }
    printf("La cantidad de empleado que ganan menos de 300 es: %i\n", menos300);
    printf("La cantidad de empleado que ganan mas de 300 es: %i\n", mas300);
    printf("El total del gasto en sueldos es: %i\n",totalSueldos);
    return 0;
}
