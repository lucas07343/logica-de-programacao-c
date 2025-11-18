#include <stdio.h>
#include <math.h>

int main()
{
    int N, i, j, escolhaLinha, escolhaColuna;
    double soma;

    do {
        printf("Qual a ordem da matriz?(maximo 10) ");
        scanf("%d", &N);

        if (N > 10) {
            printf("VALOR MAXIMO EXCEDIDIO!");
        }
    } while (N > 10);

    double mat[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }

    soma = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] > 0) {
                soma = soma + mat[i][j];
            }
        }
    }

    printf("\nSOMA DOS POSITIVOS: %.1lf\n", soma);

    printf("\nEscolha uma linha: ");
    scanf("%d", &escolhaLinha);
    printf("LINHA ESCOLHIDA: ");
    for (j = 0; j < N; j++) {
        printf("%.1lf ", mat[escolhaLinha][j]);
    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &escolhaColuna);
    printf("COLUNA ESCOLHIDA: ");
    for (i = 0; i < N; i++) {
        printf("%.1lf ", mat[i][escolhaColuna]);
    }

    printf("\n\nDIAGONAL PRINCIPAL: ");
    for (i = 0; i < N; i++) {
        printf("%.1lf ", mat[i][i]);
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }

    printf("\n\nMATRIZ ALTERADA:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%.1lf ", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}