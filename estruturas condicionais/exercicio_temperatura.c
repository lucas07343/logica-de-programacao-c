#include <stdio.h>

int main()
{
    char escolha;
    double C, F;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escolha);

    switch (escolha) {
    case 'F':
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &F);

        C = 5.0 / 9.0 * (F - 32);
        printf("\nTemperatura equivalente em Celsius: %.2lf\n", C);
        break;
    case 'C':
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &C);

        F = 9.0 / 5.0 * C + 32;
        printf("\nTemperatura equivalente em Fahrenheit: %.2lf\n", F);
        break;
    }

    return 0;
}