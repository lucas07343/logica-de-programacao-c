#include <stdio.h>

int main()
{
    int M, N, i, j;
    double somaLinha;

    do {
        printf("Qual a quantidade de linhas da matriz?(maximo 10) ");
        scanf("%d", &M);
        if (M > 10) {
            printf("VALOR MAXIMO ULTRAPASSADO!");
        }
    } while (M > 10);

    do {
        printf("Qual a quantidade de colunas da matriz?(maximo10) ");
        scanf("%d", &N);
        if (N > 10) {
            printf("VALOR MAXIMO ULTRAPASSADO!");
        }
    } while (N > 10);

    double mat[M][N], vet[M];

    for (i = 0; i < M; i++) {
        printf("Digite os elementos da %da. linha:\n", i+1);
        for (j = 0; j < N; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    for (i = 0; i < M; i++) {
        somaLinha = 0;

        for (j = 0; j < N; j++) {
            somaLinha = somaLinha + mat[i][j];
        }

        vet[i] = somaLinha;
    }

    printf("\nVETOR GERADO:\n");
    for (i = 0; i < N; i++) {
        printf("%.2lf\n", vet[i]);
    }

    return 0;
}