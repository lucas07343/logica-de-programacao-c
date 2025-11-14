#include <stdio.h>

int main()
{
    int N, i;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &N);

    int A[N], B[N], C[N];

    printf("\nDigite os valores do vetor A:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("\nDigite os valores do vetor B:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
    }

    printf("\nVETOR RESULTANTE:\n");
    for (i = 0; i < N; i++) {
        printf("%d\n", C[i]);
    }

    return 0;
}