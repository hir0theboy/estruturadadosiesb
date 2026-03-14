

    /*caixa_eletronico.c: Ler o valor de um saque e calcular a quantidade de notas necessárias nas cédulas
    de 200, 100, 50, 20, 10, 5 e 2, utilizando a menor quantidade possível de notas. O valor máximo permitido para saque é 1000.*/

    /*int main() {
        int valor;
        int n200, n100, n50, n20, n10, n5, n2;

        printf("digite o valor do saque: ");
        scanf("%d", &valor);

        if(valor > 1000 || valor < 0) {
            printf("valor invalido\n");
            return 1;
        }

        n200 = valor / 200;
        valor = valor % 200;

        n100 = valor / 100;
        valor = valor % 100;

        n50 = valor / 50;
        valor = valor % 50;

        n20 = valor / 20;
        valor = valor % 20;

        n10 = valor / 10;
        valor = valor % 10;

        n5 = valor / 5;
        valor = valor % 5;

        n2 = valor / 2;
        valor = valor % 2;

        printf("notas de 200: %d\n", n200);
        printf("notas de 100: %d\n", n100);
        printf("notas de 50: %d\n", n50);
        printf("notas de 20: %d\n", n20);
        printf("notas de 10: %d\n", n10);
        printf("notas de 5: %d\n", n5);
        printf("notas de 2: %d\n", n2);


        return 0;
    }*/


    /*int main() {

        int valor;
        int n200, n100, n50, n20, n10, n5, n2;

        valor = 376;

        n200 = valor / 200;
        valor %= 200;

        n100 = valor / 100;
        valor %= 100;

        n50 = valor / 50;
        valor %= 50;

        n20 = valor / 20;
        valor %= 20;

        n10 = valor / 10;
        valor %= 10;

        n5 = valor / 5;
        valor %= 5;

        n2 = valor / 2;

        printf("valor = 376 -> 200:%d 100:%d 50:%d 20:%d 10:%d 5:%d 2:%d => %i\n",
            n200, n100, n50, n20, n10, n5, n2,
            n200==1 && n100==1 && n50==1 && n20==1 && n10==0 && n5==1 && n2==0);


        valor = 200;

        n200 = valor / 200;
        valor %= 200;

        n100 = valor / 100;
        valor %= 100;

        n50 = valor / 50;
        valor %= 50;

        n20 = valor / 20;
        valor %= 20;

        n10 = valor / 10;
        valor %= 10;

        n5 = valor / 5;
        valor %= 5;

        n2 = valor / 2;

        printf("valor = 200 -> 200:%d => %i\n",
            n200,
            n200==1 && n100==0 && n50==0 && n20==0 && n10==0 && n5==0 && n2==0);

        return 0;
    }*/

    #include <stdio.h>

typedef struct {
    int n200;
    int n100;
    int n50;
    int n20;
    int n10;
    int n5;
    int n2;
} Saque;

Saque saque(int valor) {

    Saque s;

    s.n200 = valor / 200;
    valor %= 200;

    s.n100 = valor / 100;
    valor %= 100;

    s.n50 = valor / 50;
    valor %= 50;

    s.n20 = valor / 20;
    valor %= 20;

    s.n10 = valor / 10;
    valor %= 10;

    s.n5 = valor / 5;
    valor %= 5;

    s.n2 = valor / 2;

    return s;
}

int main() {

    Saque s;

    s = saque(376);

    printf("valor = 376 -> 200:%d 100:%d 50:%d 20:%d 10:%d 5:%d 2:%d => %i\n",
        s.n200, s.n100, s.n50, s.n20, s.n10, s.n5, s.n2,
        s.n200==1 && s.n100==1 && s.n50==1 && s.n20==1 && s.n10==0 && s.n5==1 && s.n2==0);


    s = saque(200);

    printf("valor = 200 -> 200:%d => %i\n",
        s.n200,
        s.n200==1 && s.n100==0 && s.n50==0 && s.n20==0 && s.n10==0 && s.n5==0 && s.n2==0);

    return 0;
}