#include <stdio.h> 
/*potencia.c: Ler uma base e um expoente inteiro positivo e calcular
a potência da base elevada ao expoente sem usar funções prontas.*/


/*
int main() {
    int base, expoente, i;
    int resultado = 1;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    for(i = 1; i <= expoente; i++) {
        resultado = resultado * base;
    }

    printf("Resultado: %d\n", resultado);

    return 0;
}*/

int calcular_potencia(int base, int expoente){
    int resultado = 1;

    for(int i = 1; i <= expoente; i++){
        resultado = resultado * base;
    }

    return resultado;
}

int main(){

    int resultado = 0;

    resultado = calcular_potencia(2, 3);
    printf("base = 2, expoente = 3, resultado = %d => %i\n", resultado, resultado == 8);

    resultado = calcular_potencia(5, 0);
    printf("base = 5, expoente = 0, resultado = %d => %i\n", resultado, resultado == 1);

    resultado = calcular_potencia(3, 2);
    printf("base = 3, expoente = 2, resultado = %d => %i\n", resultado, resultado == 9);

    resultado = calcular_potencia(10, 1);
    printf("base = 10, expoente = 1, resultado = %d => %i\n", resultado, resultado == 10);

    resultado = calcular_potencia(4, 4);
    printf("base = 4, expoente = 4, resultado = %d => %i\n", resultado, resultado == 256);

    return 0;
}