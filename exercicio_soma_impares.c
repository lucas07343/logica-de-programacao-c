#include <stdio.h>

int main()
{
    int X, Y, i, soma;

    printf("Digite dois numeros:\n");
    scanf("%d", &X);
    scanf("%d", &Y);

    soma = 0;
    if (X < Y) {
        for (i = X; i < Y; i++) {
            if (i % 2 != 0) {
                soma = soma + i;
            }
        }
    }
    else {
        for (i = Y; i < X; i++) {
            if (i % 2 != 0) {
                soma = soma + i;
            }
        }
    }

    printf("SOMA DOS IMPARES = %d", soma);

    return 0;
}