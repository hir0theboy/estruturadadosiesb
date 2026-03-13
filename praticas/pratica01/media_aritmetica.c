#include <stdio.h>

/*media_artimetica.c: Ler um número inteiro n e calcular a média
aritmética de n números informados pelo usuário. O valor máximo permitido para n é 100.*/

int main() {
    int n, i;
    float numero, soma, media;
    printf("digite a quantidade de numeros (max 100): ");
    scanf("%d", &n);

    if (n>100 || n<=0) {
        printf("numero invalido");
        return 1;
    }


    for (i = 1; i<=n; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);
        soma += numero;
    }

    media = soma/n;

    printf("a media foi: %.2f\n", media);

    return 0;
}