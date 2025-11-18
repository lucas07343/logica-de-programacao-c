#include <stdio.h>

int main()
{
    int M, N, i, j;

    do {
        printf("Quantas linhas vai ter cada matriz?(maximo 10) ");
        scanf("%d", &M);

        if (M > 10) {
            printf("VALOR MAXIMO EXCEDIDIO!");
        }
    } while (M > 10);

    do {
        printf("Quantas colunas vai ter cada matriz?(maximo 10) ");
        scanf("%d", &N);

        if (N > 10) {
            printf("VALOR MAXIMO EXCEDIDIO!");
        }
    } while (N > 10);

    int A[M][N], B[M][N], soma[M][N];

    printf("\nDigite os valores da matriz A:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            soma[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMATRIZ SOMA:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", soma[i][j]);
        }

        printf("\n");
    }

    return 0;
}