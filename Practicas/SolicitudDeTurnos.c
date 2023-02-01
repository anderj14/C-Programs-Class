// Programa que calcule el promedio de la nota de 10 
// estudiantes

#include<stdio.h>

int main(){
    int nota, sumaNotas = 0, promedio;
    for(int i = 0; i< 10; i++){
        printf("Ingrese la nota %d: ", i);
        scanf("%d", &nota);
        sumaNotas += nota;
    }

    promedio = sumaNotas / 10;
    printf("El promedio total de las notas es: %d", promedio);

    return 0;
}