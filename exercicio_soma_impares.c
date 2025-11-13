#include <stdio.h>

int main()
{
    int X, Y, i, soma, troca;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &X, &Y);

    if (X > Y) {
        troca = Y;
        Y = X;
        X = troca;
    }

    soma = 0;
    for (i = X+1; i < Y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("SOMA DOS IMPARES = %d", soma);

    return 0;
}