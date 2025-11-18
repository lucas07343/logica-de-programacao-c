#include <stdio.h>

int main()
{
    int N, i, j, soma, cont;

    do {
        printf("Qual a ordem da matriz?(maximo 10) ");
        scanf("%d", &N);

        if (N > 10) {
            printf("VALOR MAXIMO EXCEDIDIO!");
        }
    } while (N > 10);

    int mat[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    soma = 0;
    cont = 1;
    for (i = 0; i < N; i++) {
        for (j = cont; j < N; j++) {
            soma = soma + mat[i][j];
        }
        cont++;
    }

    printf("\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", soma);

    return 0;
}