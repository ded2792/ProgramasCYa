
#include<stdio.h>

int main()
{
    int horasTrabajadas; //las horas trabajadas es un entero
    float costoHora;    //costo por hora como un real
    float sueldo;   //multiplicar horasTrabajadas*costoHora tambien como un real
    printf("Ingrese las horas trabajadas por el empleado:");
    scanf("%i",&horasTrabajadas);
    printf("Ingrese el pago por hora:");
    scanf("%f",&costoHora);
    sueldo=horasTrabajadas*costoHora;
    printf("El sueldo total del operario es ");
    printf("%f",sueldo);
    getchar();
    return 0;
}
