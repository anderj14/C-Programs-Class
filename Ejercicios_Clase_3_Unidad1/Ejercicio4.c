// 4.	Hacer un programa que lea 5 números y que
// imprima la suma de los cuadrados de los números
// leídos.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, sumNum = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &num);
        sumNum+= (num * num);
    }
    printf("El total de la suma de cuadrados es: %d", sumNum);

    getch();
    return 0;
}