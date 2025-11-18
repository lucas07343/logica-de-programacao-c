#include <stdio.h>

int main()
{
    double salario, salarioNovo, aumento;
    int porcentagem;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if (salario <= 1000) {
        porcentagem = 20;
    }
    else if (salario <= 3000) {
        porcentagem = 15;
    }
    else if (salario <= 8000) {
        porcentagem = 10;
    }
    else {
        porcentagem = 5;
    }

    aumento = salario / 100 * porcentagem;
    salarioNovo = salario + aumento;

    printf("\nNovo salario = R$ %.2lf\n", salarioNovo);
    printf("Aumento = R$ %.2lf\n", aumento);
    printf("Porcentagem = %d\n", porcentagem);

    return 0;
}