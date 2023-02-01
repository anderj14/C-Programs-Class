// 3.	Escribir en lenguaje C un programa que
// lea la duración en minutos (dato entero) de
// una llamada telefónica y calcule el costo de
// la llamada telefónica, sabiendo que si el
// TipoLlamada es Local, el precio por minuto
// es 0.50, y si es Internacional cuesta 1.25
// cada minuto. Debe mostrar el resultado (dato real)
// en pesos dominicanos.

#include <stdio.h>
#include <conio.h>

int main()
{
    int time = 0, TLlamada;
    float llamadaTel, TLLocal, TLInternacional;
    TLLocal = 0.50;
    TLInternacional = 1.25;
    llamadaTel = 0;

    printf("Que tipo de llamada realizo: ");
    printf("\n1 - Llamada local: ");
    printf("\n2 - Llamada internacional:\n ");
    scanf("%d", &TLlamada);

    switch (TLlamada)
    {
    case 1:
        printf("Digite tiempo de la llamada: ");
        scanf("%d", &time);
        llamadaTel = (float)time * TLLocal;
        printf("El costo por la llamada local fue: %.2f", llamadaTel);
        break;

    case 2:
        printf("Digite tiempo de la llamada: ");
        scanf("%d", &time);
        llamadaTel = (float)time * TLInternacional;
        printf("El costo por la llamada internacional fue: %.2f", TLInternacional);
        break;

    default:
        printf("Tiene que elegir del 1 al 2");
        break;
    }

    getch();
    return 0;
}