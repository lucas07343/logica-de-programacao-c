#include<stdio.h>

int main()
{
    int codigo, quantidade;
    double valorTotal;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    switch (codigo) {
    case 1:
        valorTotal = quantidade * 5;
        break;
    case 2:
        valorTotal = quantidade * 3.50;
        break;
    case 3:
        valorTotal = quantidade * 4.80;
        break;
    case 4:
        valorTotal = quantidade * 8.90;
        break;
    case 5:
        valorTotal = quantidade * 7.32;
        break;
    }

    printf("\nValor a pagar: R$ %.2lf\n", valorTotal);

    return 0;
}