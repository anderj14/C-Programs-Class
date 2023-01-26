#include <stdio.h>
#include <conio.h>

int main()
{
    float num, count, sum;
    count = 0, sum= 0;


    do{
        printf("Ingrese la nota: ");
        scanf("%f", &num);
        sum += num;
        count++;
    }while (count <= 9);
    printf("El promedio es: %.1f", (sum/ 10));
    

    getch();
    return 0;
}