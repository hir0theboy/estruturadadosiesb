#include <stdio.h>
#include "conta.h"

int main() {
    Conta* minha_conta = conta_criar(1234);

    // Depósitos
    conta_depositar(minha_conta, 500.0f);
    conta_depositar(minha_conta, 200.0f);

    printf("Saldo apos depositos: %.2f\n", conta_ver_saldo(minha_conta));

    // Saque válido
    if (conta_sacar(minha_conta, 300.0f)) {
        printf("Saque de 300 realizado com sucesso.\n");
    } else {
        printf("Falha ao realizar saque.\n");
    }

    printf("Saldo atual: %.2f\n", conta_ver_saldo(minha_conta));

    // Saque inválido (saldo insuficiente)
    if (conta_sacar(minha_conta, 1000.0f)) {
        printf("Saque realizado.\n");
    } else {
        printf("Saldo insuficiente para saque.\n");
    }

    printf("Saldo final: %.2f\n", conta_ver_saldo(minha_conta));

    conta_destruir(minha_conta);

    return 0;
}