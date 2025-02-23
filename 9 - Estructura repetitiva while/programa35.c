//Mostrar todos los múltiplos de 8 que hay hasta el valor 500.
//Debe aparecer en pantalla 8 - 16 - 24, etc.

#include<stdio.h>
#include<conio.h>

int main()
{
    int mult8;
    mult8=8;
    while (mult8 <= 500)
    {
        printf("%i",mult8);
        printf(" - ");
        mult8=mult8 + 8;
    }
    return 0;
}
