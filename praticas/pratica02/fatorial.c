#include <stdio.h>

// ---------------- ITERATIVO ----------------
// Complexidade:
// Tempo: O(n)
// Espaço: O(1)
unsigned long long fatorial_iterativo(int n) {
    if (n < 0) {
        return 0; // inválido
    }

    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

// ---------------- RECURSIVO ----------------
// Complexidade:
// Tempo: O(n)
// Espaço: O(n) (pilha de chamadas)
unsigned long long fatorial_recursivo(int n) {
    if (n < 0) {
        return 0; // inválido
    }

    if (n == 0 || n == 1) {
        return 1;
    }

    return n * fatorial_recursivo(n - 1);
}

int main() {
    unsigned long long fat;

    printf("---- ITERATIVO ----\n");

    fat = fatorial_iterativo(-1);
    printf("n = -1, fatorial = %llu => %i\n", fat, fat == 0);

    fat = fatorial_iterativo(0);
    printf("n = 0, fatorial = %llu => %i\n", fat, fat == 1);

    fat = fatorial_iterativo(5);
    printf("n = 5, fatorial = %llu => %i\n", fat, fat == 120);

    fat = fatorial_iterativo(7);
    printf("n = 7, fatorial = %llu => %i\n", fat, fat == 5040);

    fat = fatorial_iterativo(10);
    printf("n = 10, fatorial = %llu => %i\n", fat, fat == 3628800);

    printf("\n---- RECURSIVO ----\n");

    fat = fatorial_recursivo(-1);
    printf("n = -1, fatorial = %llu => %i\n", fat, fat == 0);

    fat = fatorial_recursivo(0);
    printf("n = 0, fatorial = %llu => %i\n", fat, fat == 1);

    fat = fatorial_recursivo(5);
    printf("n = 5, fatorial = %llu => %i\n", fat, fat == 120);

    fat = fatorial_recursivo(7);
    printf("n = 7, fatorial = %llu => %i\n", fat, fat == 5040);

    fat = fatorial_recursivo(10);
    printf("n = 10, fatorial = %llu => %i\n", fat, fat == 3628800);

    return 0;
}