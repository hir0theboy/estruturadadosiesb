#include "selecao.h"

// BUSCA LINEAR
// Melhor caso: O(1)
// Pior caso: O(n)
int linear_search(int v[], int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) {
            return i;
        }
    }
    return -1;
}

// Troca
static void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Particionamento
static int particionar(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio;

    for (int j = inicio; j < fim; j++) {
        if (v[j] <= pivo) {
            trocar(&v[i], &v[j]);
            i++;
        }
    }

    trocar(&v[i], &v[fim]);
    return i;
}

// QUICK SELECT
// Melhor/médio: O(n)
// Pior: O(n²)
int quick_select(int v[], int inicio, int fim, int k) {
    if (inicio <= fim) {
        int p = particionar(v, inicio, fim);

        if (p == k) {
            return v[p];
        } else if (p > k) {
            return quick_select(v, inicio, p - 1, k);
        } else {
            return quick_select(v, p + 1, fim, k);
        }
    }
    return -1;
}