#include <stdio.h>

int main()
{
    double preco, precoTotal, dinheiro, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    precoTotal = preco * quantidade;

    if (precoTotal <= dinheiro) {
        troco = dinheiro - precoTotal;
        printf("\nTROCO = %.2lf\n", troco);
    }
    else {
        troco = precoTotal - dinheiro;
        printf("\nDINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", troco);
    }

    return 0;
}