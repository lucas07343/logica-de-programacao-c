#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    char nome[50];
    double valor, pagamento;
    int horas;

    printf("Nome: ");
    ler_texto(nome, 50);
    printf("Valor por hora: ");
    scanf("%lf", &valor);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = valor * horas;
    printf("\nO pagamento para %s deve ser %.2lf\n", nome, pagamento);

    return 0;
}