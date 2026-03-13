#include <stdio.h>

/*caixa_eletronico.c: Ler o valor de um saque e calcular a quantidade de notas necessárias nas cédulas
de 200, 100, 50, 20, 10, 5 e 2, utilizando a menor quantidade possível de notas. O valor máximo permitido para saque é 1000.*/

int main() {
    int valor;
    int n200, n100, n50, n20, n10, n5, n2;

    printf("digite o valor do saque: ");
    scanf("%d", &valor);

    if(valor > 1000 || valor < 0) {
        printf("valor invalido\n");
        return 1;
    }

    n200 = valor / 200;
    valor = valor % 200;

    n100 = valor / 100;
    valor = valor % 100;

    n50 = valor / 50;
    valor = valor % 50;

    n20 = valor / 20;
    valor = valor % 20;

    n10 = valor / 10;
    valor = valor % 10;

    n5 = valor / 5;
    valor = valor % 5;

    n2 = valor / 2;
    valor = valor % 2;

    printf("notas de 200: %d\n", n200);
    printf("notas de 100: %d\n", n100);
    printf("notas de 50: %d\n", n50);
    printf("notas de 20: %d\n", n20);
    printf("notas de 10: %d\n", n10);
    printf("notas de 5: %d\n", n5);
    printf("notas de 2: %d\n", n2);


    return 0;
}