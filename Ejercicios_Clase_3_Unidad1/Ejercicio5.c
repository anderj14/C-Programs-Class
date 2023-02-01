

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, par = 0, impar = 0;

    printf("Inserte un numero distinto de 0: ");
    scanf("%d", &num);

    while ( num != 0 )
    {
        if (num % 2 == 0)
            par += num;
        else
            impar += num;

        printf("\nInserte un numero distinto de 0: ");
        scanf("%d", &num);
    }

    printf("\nLa suma de los numeros pares es: %d", par);
    printf("\nLa suma de los numeros impares es: %d", impar);

    getch();
    return 0;
}