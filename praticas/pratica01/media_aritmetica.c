#include <stdio.h>

/*media_artimetica.c: Ler um número inteiro n e calcular a média
aritmética de n números informados pelo usuário. O valor máximo permitido para n é 100.*/

/*int main() {
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
}*/

float calcular_media(int n, float numeros[]) {
    if (n <= 0 || n > 100) {
        return 0.0f;
    }

    float soma = 0.0f;

    for (int i = 0; i < n; i++) {
        soma += numeros[i];
    }

    return soma / n;
}

int main() {

    float numeros1[] = {2, 4, 6};
    float media = calcular_media(3, numeros1);
    printf("n = 3, media = %.1f => %i\n", media, media == 4.0f);

    float numeros2[] = {10, 10, 10, 10};
    media = calcular_media(4, numeros2);
    printf("n = 4, media = %.1f => %i\n", media, media == 10.0f);

    float numeros3[] = {5};
    media = calcular_media(1, numeros3);
    printf("n = 1, media = %.1f => %i\n", media, media == 5.0f);

    float numeros4[] = {1, 2, 3, 4, 5};
    media = calcular_media(5, numeros4);
    printf("n = 5, media = %.1f => %i\n", media, media == 3.0f);

    media = calcular_media(0, numeros4);
    printf("n = 0, media = %.1f => %i\n", media, media == 0.0f);

    return 0;
}