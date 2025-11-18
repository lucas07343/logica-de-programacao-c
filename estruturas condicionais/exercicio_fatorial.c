#include <stdio.h>

int main()
{
    int N, i, fatorial;

    printf("Digite o valor de N (maximo 15): ");
    scanf("%d", &N);

    if (N > 15) {
        printf("\nVALOR MAXIMO EXCEDIDO!");
    }
    else if (N < 0) {
        printf("\nNao existe fatorial de numero negativo!");
    }
    else {
        fatorial = 1;
        for (i = 1; i <= N; i++) {
            fatorial = fatorial * i;
        }
        
        printf("\nFATORIAL = %d", fatorial);
    }

    return 0;
}