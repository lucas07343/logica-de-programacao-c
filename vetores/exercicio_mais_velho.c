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
    int N, i, maiorIdade;
    char maisVelha[50];

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);

    char nomes[N][50];
    int idades[N];

    for (i = 0; i < N; i++) {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }

    maiorIdade = idades[0];
    for (i = 0; i < N; i++) {
        if (idades[i] > maiorIdade) {
            maiorIdade = idades[i];
            strcpy(maisVelha, nomes[i]);
        }
    }

    printf("\nPESSOA MAIS VELHA: %s", maisVelha);

    return 0;
}