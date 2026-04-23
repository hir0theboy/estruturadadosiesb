#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

// PERCORRER COM DOIS LAÇOS
// Complexidade:
// Tempo: O(n²)
// Espaço: O(1)
void percorrer_duplo(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            int valor = matriz[i][j];
        }
    }
}

// PERCORRER COM UM LAÇO
// Complexidade:
// Tempo: O(n²)
// Espaço: O(1)
void percorrer_simples(int matriz[TAM][TAM]) {
    for (int k = 0; k < TAM * TAM; k++) {
        int i = k / TAM;
        int j = k % TAM;
        int valor = matriz[i][j];
    }
}

int main() {
    int matriz[TAM][TAM];

    // Preenchendo matriz com valores aleatórios
    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    // -------- EXIBINDO A MATRIZ --------
    printf("Matriz gerada:\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%3d ", matriz[i][j]); // alinhamento bonito
        }
        printf("\n");
    }

    clock_t inicio, fim;
    double tempo_duplo, tempo_simples;

    // TESTE COM DOIS LAÇOS
    inicio = clock();
    percorrer_duplo(matriz);
    fim = clock();
    tempo_duplo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // TESTE COM UM LAÇO
    inicio = clock();
    percorrer_simples(matriz);
    fim = clock();
    tempo_simples = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // RESULTADOS
    printf("\nTempo com dois lacos: %f segundos\n", tempo_duplo);
    printf("Tempo com um laco: %f segundos\n", tempo_simples);

    return 0;
}