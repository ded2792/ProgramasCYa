//Se ingresan tres valores por teclado,
//si todos son iguales se imprime la suma del primero con el segundo y a este resultado se lo multiplica por el tercero.


#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3;
    printf("Ingrese primer valor:");
    scanf("%i",&num1);
    printf("Ingrese segundo valor:");
    scanf("%i",&num2);
    printf("Ingrese tercer valor:");
    scanf("%i",&num3);
    if (num1 == num2 && num1 == num3)
    {
        int suma = num1 + num2;
        printf("La suma del primero y segundo:");
        printf("%i",suma);
        printf("\n");
        int producto = suma * num3;
        printf("La suma del primero y segundo multiplicado por el tercero:");
        printf("%i",producto);
    }
    getch();
    return 0;
}
