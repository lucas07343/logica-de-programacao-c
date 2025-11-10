#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, X1, X2, delta;

    printf("Coeficiente a: ");
    scanf("%lf", &A);
    printf("Coeficiente b: ");
    scanf("%lf", &B);
    printf("Coeficiente c: ");
    scanf("%lf", &C);


    delta = pow(B, 2) - 4 * A * C;

    if (A == 0 || delta < 0) {
        printf("\nEsta equacao nao possui raizes reais\n");
    }
    else {
        X1 = (-B + sqrt(delta)) / (2 * A);
        X2 = (-B + sqrt(delta)) / (2 * A);

        printf("\nX1 = %.4lf\n", X1);
        printf("X2 = %.4lf\n", X2);
    }

    return 0;
}