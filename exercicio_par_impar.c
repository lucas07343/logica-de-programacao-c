#include <stdio.h>

int main()
{
    int N, X, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &X);

        if (X % 2 != 0 && X < 0) {
            printf("IMPAR NEGATIVO\n");
        }
        else if (X % 2 != 0 && X > 0) {
            printf("IMPAR POSITIVO\n");
        }
        else if (X % 2 == 0 && X < 0) {
            printf("PAR NEGATIVO\n");
        }
        else if (X % 2 == 0 && X > 0) {
            printf("PAR POSITIVIO\n");
        }
        else {
            printf("NULO\n");
        }
    }

    return 0;
}