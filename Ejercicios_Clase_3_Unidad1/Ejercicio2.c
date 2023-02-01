// 2.	Hacer un programa en C que lea un número 
// entero e imprima la tabla de multiplicar de 
// dicho número de 1 al 15.

#include<stdio.h>
#include<conio.h>

int main(){

    int num, result;

    printf("Digite un numero para hacer la tabla: ");
    scanf("%d", &num);

    for (int i = 0; i <= 15; i++)
    {
        result = num * i;
        printf("\n %d X %d = %d", num, i, result);
    }

    result;

    getch();
    return 0;
}