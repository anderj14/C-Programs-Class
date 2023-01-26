// 1)	Dado el valor Horas Trabajadas, Codifique el programa que permita
// calcular el sueldo neto de una persona, considerando lo siguiente:

// •	Sueldo neto = (Horas regulares x precio por hora regular) + (horas extras x precio por hora extra)
// •	Se consideran Horas extras aquellas que están por encima de 40
// •	El precio de las horas regulares es 35.00
// •	El precio de las horas extras es 42.00

#include <stdio.h>
#include <conio.h>

int main()
{
    float sueldoNeto, hRegular, hExtras, pRegular, pExtra, horas;
    sueldoNeto = 0, hRegular = 0, hExtras = 0, pRegular = 0, pExtra = 0;

    do
    {
        printf("\nIngrese las horas trabajadas: ");
        scanf("%f", &horas);

        if (horas <= 0)
        {
            printf("\nLas horas deben ser mayor a 0\n");
        }
        else if (horas > 40)
        {
            hRegular = 40;
            hExtras = horas - hRegular;
            printf("\nLas horas trabajadas fueron %.2f\nLas horas regulares fueron: %.2f\nLa extras: %.2f", horas, hRegular, hExtras);

            pRegular = 35.00;
            pExtra = 42.00;
            sueldoNeto = (hRegular * pRegular) + (hExtras * pExtra);
            printf("\n\n Las horas trabajadas fueron: %.2f", sueldoNeto);
            printf("\n Sueldo regular a 40 horas: %.2f", (hRegular * pRegular));
            printf("\n Sueldo extra: %.2f", (hExtras * pExtra));
        }
    } while (horas < 0);


        

    getch();
    return 0;
}