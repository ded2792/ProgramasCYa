//Realizar un programa que imprima en pantalla los números del 1 al 100.


#include<stdio.h>
#include<conio.h>

int main(){

int x;
x=1;
while (x <= 100){
    printf("%i", x);
    printf(" - "),
    x = x + 1;
}
getch();
return 0;

}
