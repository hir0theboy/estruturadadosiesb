#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

// Estrutura interna (oculta)
struct conta_t {
    int numero;
    float saldo;
};

// Criar conta
Conta* conta_criar(int numero) {
    Conta* c = (Conta*) malloc(sizeof(Conta));
    if (c != NULL) {
        c->numero = numero;
        c->saldo = 0.0f;
    }
    return c;
}

// Depositar
void conta_depositar(Conta* c, float valor) {
    if (c != NULL && valor > 0) {
        c->saldo += valor;
    }
}

// Sacar (retorna 1 se sucesso, 0 se falha)
int conta_sacar(Conta* c, float valor) {
    if (c != NULL && valor > 0 && c->saldo >= valor) {
        c->saldo -= valor;
        return 1;
    }
    return 0;
}

// Ver saldo
float conta_ver_saldo(Conta* c) {
    if (c != NULL) {
        return c->saldo;
    }
    return 0.0f;
}

// Destruir conta
void conta_destruir(Conta* c) {
    free(c);
}