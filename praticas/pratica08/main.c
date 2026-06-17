#include <stdio.h>
#include "fila.h"

int main() {

    Fila *fila = fila_criar();

    printf("Enfileirando elementos...\n");

    fila_enfileirar(fila, 10);
    fila_enfileirar(fila, 20);
    fila_enfileirar(fila, 30);
    fila_enfileirar(fila, 40);

    fila_exibir(fila);

    printf("\nPrimeiro elemento: %d\n", fila_inicio(fila));

    printf("\nDesenfileirando: %d\n", fila_desenfileirar(fila));

    fila_exibir(fila);

    printf("\nNovo primeiro elemento: %d\n", fila_inicio(fila));

    fila_destruir(fila);

    return 0;
}