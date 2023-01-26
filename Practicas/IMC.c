#include <stdio.h>

int main(){
    float peso, altura, imc;
    printf("Ingrese su peso: ");
    scanf("%f", &peso);

    printf("Ingrese su altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("El peso esta por debajo de lo normal");
    }else if(imc > 18.5 && imc < 25){
        printf("El peso es saludable");
    }
    else if(imc > 25 && imc < 30){
        printf("Sobrepeso");
    }else{
        printf("Obesidad");
    }
    return 0;
}