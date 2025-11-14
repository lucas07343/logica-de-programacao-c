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
    int N, i;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &N);

    char nomes[N][50];
    double notas1[N], notas2[N];
    double medias[N];

    for (i = 0; i < N; i++) {
        printf("Digite nome, primeira e segunda nota do %do aluno:\n", i+1);
        limpar_entrada();
        ler_texto(nomes[i], 50);
        scanf("%lf %lf", &notas1[i], &notas2[i]);
    }

    for (i = 0; i < N; i++) {
        medias[i] = (notas1[i] + notas2[i]) / 2;
    }

    printf("\nAlunos aprovados:\n");
    for (i = 0; i < N; i++) {
        if (medias[i] >= 6) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}