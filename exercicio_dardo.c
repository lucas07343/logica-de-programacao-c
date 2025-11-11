#include <stdio.h>

int main()
{
    double D1, D2, D3, maior;

    printf("Digite as tres distancias:\n");
    scanf("%lf", &D1);
    scanf("%lf", &D2);
    scanf("%lf", &D3);

    if (D1 > D2 && D1 > D3) {
        maior = D1;
    }
    else if (D2 > D3) {
        maior = D2;
    }
    else {
        maior = D3;
    }

    printf("\nMAIOR DISTANCIA = %.2lf\n", maior);

    return 0;
}