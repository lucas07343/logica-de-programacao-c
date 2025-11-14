#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int N, i, lucroBaixo, lucroMedio, lucroCima;
    double lucroTotal, totalCompra, totalVenda;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);

    char produtos[N][50];
    double precoCompras[N], precoVendas[N], lucros[N];

    for (i = 0; i < N; i++) {
        printf("Produto %d:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(produtos[i], 50);
        printf("Preco de compra: ");
        scanf("%lf", &precoCompras[i]);
        printf("Preco de venda: ");
        scanf("%lf", &precoVendas[i]);
    }

    for (i = 0; i < N; i++) {
        lucros[i] = (precoVendas[i] - precoCompras[i]) / precoCompras[i] * 100;
    }

    lucroBaixo = 0;
    lucroMedio = 0;
    lucroCima = 0;
    for (i = 0; i < N; i++) {
        if (lucros[i] <= 10) {
            lucroBaixo++;
        }
        else if (lucros[i] <= 20) {
            lucroMedio++;
        }
        else {
            lucroCima++;
        }
    }

    totalCompra = 0;
    totalVenda = 0;
    for (i = 0; i < N; i++) {
        totalCompra = totalCompra + precoCompras[i];
        totalVenda = totalVenda + precoVendas[i];
    }

    lucroTotal = totalVenda - totalCompra;

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", lucroBaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", lucroMedio);
    printf("Lucro acima de 20%%: %d\n", lucroCima);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", lucroTotal);

    return 0;
}