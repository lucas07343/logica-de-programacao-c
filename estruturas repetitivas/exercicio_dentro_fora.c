#include <stdio.h>

int main()
{
    int N, X, i, dentro, fora;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    dentro = 0;
    fora = 0;
    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &X);

        if (X >= 10 && X <= 20) {
            dentro = dentro + 1;
        }
        else {
            fora = fora + 1;
        }
    }

    printf("\n%d DENTRO\n", dentro);
    printf("%d FORA", fora);

    return 0;
}