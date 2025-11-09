#include <stdio.h>

int main()
{
    double preco, pagamento, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &pagamento);

    troco = pagamento - preco * quantidade;
    printf("\nTROCO = %.2lf\n", troco);

    return 0;
}