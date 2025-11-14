#include <stdio.h>

int main()
{
    int N, i, contPares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    contPares = 0;
    printf("\nNUMEROS PARES:\n");
    for (i = 0; i < N; i++) {
        if (vet[i] % 2 == 0) {
            printf("%d ", vet[i]);
            contPares++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d", contPares);

    return 0;
}