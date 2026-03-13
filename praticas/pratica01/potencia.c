#include <stdio.h> 
/*potencia.c: Ler uma base e um expoente inteiro positivo e calcular
a potência da base elevada ao expoente sem usar funções prontas.*/

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
}