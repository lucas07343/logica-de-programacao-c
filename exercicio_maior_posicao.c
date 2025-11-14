#include <stdio.h>

int main()
{
    int N, i, indiceMaior;
    double maior;

    printf("Quanto numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    maior = vet[0];
    indiceMaior = 0;
    for (i = 0; i < N; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            indiceMaior = i;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d", indiceMaior); 

    return 0;
}