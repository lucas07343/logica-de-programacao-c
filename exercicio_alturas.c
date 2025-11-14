#include <stdio.h>
#include <string.h>

void limparEntrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, " \n");
}

int main()
{
    int N, i, contIdades;
    double somaAlturas, mediaAlturas, porcentagemIdades;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nomes[N][50];
    int idades[N];
    double alturas[N];

    for (i = 0; i < N; i++) {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        limparEntrada();
        ler_texto(nomes[i], 50);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    contIdades = 0;
    for (i = 0; i < N; i++) {
        somaAlturas = somaAlturas + alturas[i];
        
        if (idades[i] < 16) {
            contIdades = contIdades + 1;
        }
    }

    mediaAlturas = somaAlturas / N;
    porcentagemIdades = 100 / N * contIdades;

    printf("\nAltura média: %.2lf\n", mediaAlturas);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", porcentagemIdades);

    for (i = 0; i < N; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}