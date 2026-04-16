#include <stdio.h>
#include <stdlib.h> // rand, srand
#include <time.h>   // time

#define TAM 100

// ----------- BUSCA SEQUENCIAL -----------
// Complexidade:
// Melhor caso: O(1) -> elemento está na primeira posição
// Pior caso: O(n) -> elemento está na última posição ou não está no vetor
int busca_sequencial(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main() {
    int vetor[TAM];
    int valor, pos;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 100; // números de 0 a 99
    }

    //Mostrar o vetor gerado
    printf("Vetor gerado:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Valor a ser buscado
    printf("\nDigite o valor a ser buscado: ");
    scanf("%d", &valor);

    // Busca
    pos = busca_sequencial(vetor, TAM, valor);

    if (pos != -1) {
        printf("Valor encontrado na posicao %d\n", pos);
    } else {
        printf("Valor nao encontrado\n");
    }


    return 0;
}