// 1.	Hacer un programa en C que lea un número en 
// pesos dominicanos y lo convierta a US Dólares 
// y a Euros, según la tasa de compra del día de 
// la página https://www.banreservas.com/

#include<stdio.h>

int main(){

    float pDominican, dolar, euro, conversion;
    dolar = 55.80;
    euro = 56.80;
    conversion = 0;
    printf("Digite la cantidad en pesos dominicanos RD$: ");
    scanf("%f", &pDominican);

    dolar /=pDominican;
    printf("La conversion a dolar es US$: %.2f", dolar);

    euro /= pDominican;
    printf("\nLa conversion a euro es E$: %.2f", euro);

    return 0;
}

