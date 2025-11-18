#include <stdio.h>

int main()
{
    int N, i, j, maior;

    do {
        printf("Qual a ordem da matriz?(maximo 10) ");
        scanf("%d", &N);

        if (N > 10) {
            printf("VALOR MAXIMO EXCEDIDO!");
        }
    } while (N > 10);

    int mat[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMAIOR ELEMENTO DE CADA LINHA:\n");
    for (i = 0; i < N; i++) {
        maior = mat[i][0];
        for (j = 0; j < N; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }
        printf("%d\n", maior);
    }

    return 0;
}