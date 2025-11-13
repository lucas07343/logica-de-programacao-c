#include <stdio.h>

int main()
{
    int N, i, numerador, denominador;
    double divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Entre com o numerador: ");
        scanf("%d", &numerador);
        printf("Entre com o denominador: ");
        scanf("%d", &denominador);

        if (denominador != 0) {
            divisao = (double) numerador / denominador;
            printf("DIVISAO = %.2lf\n", divisao);
        }
        else {
            printf("DIVISAO IMPOSSIVEL\n");
        }
    }

    return 0;
}