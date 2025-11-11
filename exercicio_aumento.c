#include <stdio.h>

int main()
{
    double salario, salarioNovo, aumento;
    int porcentagem;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if (salario <= 1000) {
        aumento = salario / 100 * 20;
        salarioNovo = salario + aumento;
        porcentagem = 20;
    }
    else if (salario <= 3000) {
        aumento = salario / 100 * 15;
        salarioNovo = salario + aumento;
        porcentagem = 15;
    }
    else if (salario <= 8000) {
        aumento = salario / 100 * 10;
        salarioNovo = salario + aumento;
        porcentagem = 10;
    }
    else {
        aumento = salario / 100 * 5;
        salarioNovo = salario + aumento;
        porcentagem = 5;
    }

    printf("\nNovo salario = R$ %.2lf\n", salarioNovo);
    printf("Aumento = R$ %.2lf\n", aumento);
    printf("Porcentagem = %d\n", porcentagem);

    return 0;
}