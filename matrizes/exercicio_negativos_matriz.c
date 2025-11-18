#include <stdio.h>

int main()
{
    int M, N, i, j;

    do {
        printf("Qual a quantidade de linhas da matriz?(maximo 10) ");
        scanf("%d", &M);

        if (M > 10) {
            printf("VALOR MAXIMO ULTRAPASSADO!");
        }
    } while (M > 10);

    do {
        printf("Qual a quantidade de colunas da matriz?(maximo 10) ");
        scanf("%d", &N);

        if (N > 10) {
            printf("VALOR MAXIMO ULTRAPASSADO!");
        }
    } while (N > 10);

    int mat[M][N];

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nVALORES NEGATIVOS:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                printf("%d\n", mat[i][j]);
            }
        }
    }

    return 0;
}