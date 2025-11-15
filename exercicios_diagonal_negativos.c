#include <stdio.h>

int main()
{
    int N, i, j, qtdNegativos;

    do {
        printf("Qual a ordem da matriz?(maximo 10) ");
        scanf("%d", &N);

        if (N > 10) {
            printf("VALOR ULTRAPASSOU O LIMITE!");
        }
    } while (N > 10);

    int mat[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nDIAGONAL PRINCIPAL:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", mat[i][i]);
    }

    qtdNegativos = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                qtdNegativos++;
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d", qtdNegativos);

    return 0;
}