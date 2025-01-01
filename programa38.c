//Realizar un programa que imprima en pantalla los números del 1 al 100.

#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    for(f=1; f <= 100 ;f++)
    {
        printf("%i",f);
        printf("-");
    }
    getch();
    return 0;
}
