#include <stdio.h>

int main()
{
    int N, i, somaPares, contPares;
    double mediaPares;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    int vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    somaPares = 0;
    contPares = 0;
    for (i = 0; i < N; i++) {
        if (vet[i] % 2 == 0) {
            somaPares = somaPares + vet[i];
            contPares++;
        }
    }

    if (contPares != 0) {
        mediaPares = somaPares / contPares;
        printf("\nMEDIA DOS PARES = %.1lf", mediaPares);
    }
    else {
        printf("\nNENHUM NUMERO PAR");
    }
    return 0;
}