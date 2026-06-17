#include <stdio.h>
#include <stdlib.h>
#include "lista_linear.h"

typedef struct no_t {
    struct no_t *anterior;
    int valor;
    struct no_t *proximo;
} No;

struct lista_t {
    No *primeiro;
    No *ultimo;
};

Lista* lista_criar() {
    Lista *lista = (Lista*) malloc(sizeof(Lista));

    if (lista != NULL) {
        lista->primeiro = NULL;
        lista->ultimo = NULL;
    }

    return lista;
}

int lista_esta_vazia(Lista *lista) {
    return lista->primeiro == NULL;
}

void lista_inserir(Lista *lista, int valor) {
    No *novo = (No*) malloc(sizeof(No));

    if (novo == NULL)
        return;

    novo->valor = valor;
    novo->proximo = NULL;
    novo->anterior = lista->ultimo;

    if (lista_esta_vazia(lista)) {
        lista->primeiro = novo;
    } else {
        lista->ultimo->proximo = novo;
    }

    lista->ultimo = novo;
}

int lista_buscar(Lista *lista, int valor) {
    No *aux = lista->primeiro;

    while (aux != NULL) {
        if (aux->valor == valor)
            return 1;

        aux = aux->proximo;
    }

    return 0;
}

int lista_remover(Lista *lista, int valor) {
    No *aux = lista->primeiro;

    while (aux != NULL) {

        if (aux->valor == valor) {

            if (aux->anterior != NULL)
                aux->anterior->proximo = aux->proximo;
            else
                lista->primeiro = aux->proximo;

            if (aux->proximo != NULL)
                aux->proximo->anterior = aux->anterior;
            else
                lista->ultimo = aux->anterior;

            free(aux);
            return 1;
        }

        aux = aux->proximo;
    }

    return 0;
}

void lista_exibir(Lista *lista) {
    No *aux = lista->primeiro;

    printf("Lista: ");

    while (aux != NULL) {
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }

    printf("\n");
}

void lista_destruir(Lista *lista) {
    No *aux = lista->primeiro;

    while (aux != NULL) {
        No *temp = aux;
        aux = aux->proximo;
        free(temp);
    }

    free(lista);
}