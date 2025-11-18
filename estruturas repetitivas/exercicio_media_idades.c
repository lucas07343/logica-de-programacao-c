#include <stdio.h>

int main()
{
    int idade, soma, qte;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("\nIMPOSSIVEL CALCULAR");
    }
    else {
        soma = 0;
        qte = 0;
        while (idade > 0) {
            soma = soma + idade;
            qte = qte + 1;

            scanf("%d", &idade);
        }
        media = (double) soma / qte;
        printf("\nMEDIA = %.2lf", media);
    }

    return 0;
}