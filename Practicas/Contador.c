#include <stdio.h>

int main()
{
    int contador = 0;

    do
    {
        contador++;
    } while (contador < 10000);
    printf("Contador = %d", contador);
}