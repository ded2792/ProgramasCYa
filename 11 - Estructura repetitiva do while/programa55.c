//En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual
//El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
//Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:
//a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
//Estado de la cuenta	'Acreedor' si el saldo es >0.
//			'Deudor' si el saldo es <0.
//			'Nulo' si el saldo es =0.
//b) La suma total de los saldos acreedores.


#include<stdio.h>
#include<conio.h>

int main()
{
    int cuenta;
    float saldo,suma;
    suma=0;
    do {
        printf("Ingrese numero de cuenta:");
        scanf("%i",&cuenta);
        if (cuenta >= 0)
        {
            printf("Ingrese saldo:");
            scanf("%f",&saldo);
            if (saldo>0)
            {
                printf("Saldo Acreedor.");
                suma=suma+saldo;
            }
            else
            {
                if (saldo<0)
                {
                    printf("Saldo Deudor.");
                }
                else
                {
                    printf("Saldo Nulo.");
                }
            }
            printf("\n");
        }
    } while(cuenta>=0);
    printf("Total de saldos Acreedores:");
    printf("%f",suma);
    getch();
    return 0;
}
