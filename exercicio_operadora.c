#include <stdio.h>

int main()
{
    int minutos;
    double cobranca;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if (minutos <= 100) {
        cobranca = 50;
    }
    else {
        cobranca = (minutos - 100) * 2 + 50;
    }

    printf("\nValor a pagar: R$ %.2lf\n", cobranca);

    return 0;
}