

/*imc.c: Ler o peso e a altura de uma pessoa, calcular o IMC e informar a situação dela conforme a escala abaixo
do peso (< 18.5), peso normal (18.5 até 24.9), sobrepeso (25.0 até 29.9) ou obesidade (30.0+);*/

/*int main(){
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
}*/

#include <stdio.h>

int main(){
float calcular_imc(float altura, float peso){
    if (altura <= 0.0f || peso <= 0.0f) {
        return 0.0f;
    }
    return peso / (altura * altura);
}

    float imc = 0.0f;

    imc = calcular_imc(0.0f, 50.0f);
    printf("altura = 0, peso = 50, imc = %.1f => %i\n", imc, imc == 0);

    imc = calcular_imc(1.75f, 0.0f);
    printf("altura = 1.75, peso = 0, imc = %.1f => %i\n", imc, imc == 0);

    imc = calcular_imc(1.75f, 70.0f);
    printf("altura = 1.75, peso = 70, imc = %.1f => %i\n", imc, imc > 0);

    imc = calcular_imc(1.60f, 45.0f);
    printf("altura = 1.60, peso = 45, imc = %.1f => %i\n", imc, imc < 18.5);

    imc = calcular_imc(1.70f, 80.0f);
    printf("altura = 1.70, peso = 80, imc = %.1f => %i\n", imc, imc >= 25 && imc < 30);

    imc = calcular_imc(1.70f, 100.0f);
    printf("altura = 1.70, peso = 100, imc = %.1f => %i\n", imc, imc >= 30);

    return 0;
}
