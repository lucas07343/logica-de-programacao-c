#include <stdio.h>

int main()
{
    int N, i, cont, totalCobaias, totalCoelhos, totalRatos, totalSapos;
    double percentualCoelhos, percentualRatos, perecentualSapos;
    char tipo;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

    totalCoelhos = 0;
    totalRatos = 0;
    totalSapos = 0;
    for (i = 0; i < N; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &cont);
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        switch (tipo) {
            case 'C' :
                totalCoelhos += cont;
                break;
            case 'R' :
                totalRatos += cont;
                break;
            case 'S' :
                totalSapos += cont;
                break;
        }
    }

    totalCobaias = totalCoelhos + totalRatos + totalSapos;

    percentualCoelhos = (double) totalCoelhos / totalCobaias  * 100;
    percentualRatos = (double) totalRatos / totalCobaias * 100;
    perecentualSapos = (double) totalSapos / totalCobaias * 100;

    printf("\nRELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", totalCobaias);
    printf("Total de coelhos: %d\n", totalCoelhos);
    printf("Total de ratos: %d\n", totalRatos);
    printf("Total de sapos: %d\n", totalSapos);
    printf("Percentual de coelhos: %.2lf\n", percentualCoelhos);
    printf("Percentual de ratos: %.2lf\n", percentualRatos);
    printf("Percentual de sapos: %.2lf", perecentualSapos);

    return 0;
}