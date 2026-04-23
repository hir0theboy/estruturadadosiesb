#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

#define TAM 100

// Copiar vetor
void copiar_vetor(int destino[], int origem[], int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origem[i];
    }
}

// Mostrar vetor
void mostrar_vetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int original[TAM];
    int v_bubble[TAM];
    int v_selection[TAM];
    int v_quick[TAM];

    srand(time(NULL));

    // Gerar vetor original
    for (int i = 0; i < TAM; i++) {
        original[i] = rand() % 1000;
    }

    // Copiar para cada algoritmo
    copiar_vetor(v_bubble, original, TAM);
    copiar_vetor(v_selection, original, TAM);
    copiar_vetor(v_quick, original, TAM);

    clock_t inicio, fim;
    double tempo;

    // BUBBLE SORT
    printf("\n=== BUBBLE SORT ===\n");
    printf("Antes:\n");
    mostrar_vetor(v_bubble, TAM);
        printf("\n");

    inicio = clock();
    bubble_sort(v_bubble, TAM);
    fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
        printf("\n");

    printf("Depois:\n");
    mostrar_vetor(v_bubble, TAM);
        printf("\n");
    printf("Tempo: %f segundos\n", tempo);


    // SELECTION SORT
    printf("\n=== SELECTION SORT ===\n");
    printf("Antes:\n");
    mostrar_vetor(v_selection, TAM);
    printf("\n");

    inicio = clock();
    selection_sort(v_selection, TAM);
    fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Depois:\n");
    mostrar_vetor(v_selection, TAM);
        printf("\n");
    printf("Tempo: %f segundos\n", tempo);


    // QUICK SORT
    printf("\n=== QUICK SORT ===\n");
    printf("Antes:\n");
    mostrar_vetor(v_quick, TAM);
        printf("\n");

    inicio = clock();
    quick_sort(v_quick, 0, TAM - 1);
    fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Depois:\n");
    mostrar_vetor(v_quick, TAM);
        printf("\n");
    printf("Tempo: %f segundos\n", tempo);

    return 0;
}