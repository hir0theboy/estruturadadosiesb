#include <stdio.h>

int main(){
    float peso;
    float altura;
    float imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    if(peso < 0 || altura < 0){
        printf("peso/altura invalido");
    }
    else {
        printf("Seu IMC eh: %.2f\n", imc);
        if(imc > 30){
        printf("Você esta obeso");
    }
        else if(imc < 18.5){
            printf("Voce esta abaixo do peso");
    } else if(imc >= 18.5 && imc < 25){
        printf("Voce esta com peso normal");
    } else if(imc >= 25 && imc < 30){
        printf("Você esta com sobrepeso");
    } else if(peso < 0 || altura < 0){
        printf("peso/altura invalido");
    }
    }
    
    return 0;
}