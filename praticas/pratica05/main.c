#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define TAM 100
#define REP 10000

void copiar_vetor(int destino[], int origem[], int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origem[i];
    }
}

void mostrar_vetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

// Para validação
int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int original[TAM];
    int v_quick[TAM];
    int v_check[TAM];

    srand(time(NULL));

    // Gerar vetor
    for (int i = 0; i < TAM; i++) {
        original[i] = rand() % 1000;
    }

    printf("Vetor original:\n");
    mostrar_vetor(original, TAM);

    int valor = original[TAM / 2];

    clock_t inicio, fim;
    double tempo;

    // LINEAR SEARCH
    inicio = clock();
    for (int i = 0; i < REP; i++) {
        linear_search(original, TAM, valor);
    }
    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    int pos = linear_search(original, TAM, valor);

    printf("\n=== LINEAR SEARCH ===\n");
    printf("Valor buscado: %d\n", valor);
    printf("Posicao encontrada: %d\n", pos);
    printf("Tempo (%d exec): %f segundos\n", REP, tempo);

    // QUICK SELECT
    copiar_vetor(v_quick, original, TAM);
    copiar_vetor(v_check, original, TAM);

    int k = TAM / 2;

    inicio = clock();
    for (int i = 0; i < REP; i++) {
        copiar_vetor(v_quick, original, TAM);
        quick_select(v_quick, 0, TAM - 1, k);
    }
    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    int resultado = quick_select(v_quick, 0, TAM - 1, k);

    // Validação
    qsort(v_check, TAM, sizeof(int), comparar);
    int esperado = v_check[k];

    printf("\n=== QUICK SELECT ===\n");
    printf("Buscando o %d-esimo menor elemento\n", k);
    printf("Resultado: %d\n", resultado);
    printf("Esperado: %d\n", esperado);

    if (resultado == esperado) {
        printf("Validacao: CORRETO\n");
    } else {
        printf("Validacao: ERRO\n");
    }

    printf("Tempo (%d exec): %f segundos\n", REP, tempo);

    return 0;
}