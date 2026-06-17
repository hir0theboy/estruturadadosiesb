#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

typedef struct no_t {
    struct no_t *esquerda;
    int valor;
    struct no_t *direita;
} No;

struct arvore_t {
    No *raiz;
};

/* Protótipos auxiliares */

static No* inserir_rec(No *raiz, int valor);
static void pre_ordem(No *raiz);
static void em_ordem(No *raiz);
static void pos_ordem(No *raiz);
static void destruir_rec(No *raiz);

/* Implementação */

Arvore* arvore_criar() {

    Arvore *arvore = (Arvore*) malloc(sizeof(Arvore));

    if (arvore != NULL) {
        arvore->raiz = NULL;
    }

    return arvore;
}

int arvore_esta_vazia(Arvore *arvore) {
    return arvore->raiz == NULL;
}

static No* inserir_rec(No *raiz, int valor) {

    if (raiz == NULL) {

        No *novo = (No*) malloc(sizeof(No));

        novo->valor = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;

        return novo;
    }

    if (valor < raiz->valor)
        raiz->esquerda = inserir_rec(raiz->esquerda, valor);
    else
        raiz->direita = inserir_rec(raiz->direita, valor);

    return raiz;
}

void arvore_inserir(Arvore *arvore, int valor) {
    arvore->raiz = inserir_rec(arvore->raiz, valor);
}

static void pre_ordem(No *raiz) {

    if (raiz == NULL)
        return;

    printf("%d ", raiz->valor);

    pre_ordem(raiz->esquerda);
    pre_ordem(raiz->direita);
}

void arvore_exibir_pre_ordem(Arvore *arvore) {

    printf("Pre-ordem: ");
    pre_ordem(arvore->raiz);
    printf("\n");
}

static void em_ordem(No *raiz) {

    if (raiz == NULL)
        return;

    em_ordem(raiz->esquerda);

    printf("%d ", raiz->valor);

    em_ordem(raiz->direita);
}

void arvore_exibir_em_ordem(Arvore *arvore) {

    printf("Em ordem: ");
    em_ordem(arvore->raiz);
    printf("\n");
}

static void pos_ordem(No *raiz) {

    if (raiz == NULL)
        return;

    pos_ordem(raiz->esquerda);
    pos_ordem(raiz->direita);

    printf("%d ", raiz->valor);
}

void arvore_exibir_pos_ordem(Arvore *arvore) {

    printf("Pos-ordem: ");
    pos_ordem(arvore->raiz);
    printf("\n");
}

static void destruir_rec(No *raiz) {

    if (raiz == NULL)
        return;

    destruir_rec(raiz->esquerda);
    destruir_rec(raiz->direita);

    free(raiz);
}

void arvore_destruir(Arvore *arvore) {

    destruir_rec(arvore->raiz);
    free(arvore);
}
