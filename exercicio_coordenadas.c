#include <stdio.h>

int main()
{
    double X, Y;

    printf("Valor de X: ");
    scanf("%lf", &X);
    printf("Valor de Y: ");
    scanf("%lf", &Y);

    if (X > 0 && Y > 0) {
        printf("\nQ1");
    }
    else if (X < 0 && Y > 0) {
        printf("\nQ2");
    }
    else if (X < 0 && Y < 0) {
        printf("\nQ3");
    }
    else if (X > 0 && Y < 0) {
        printf("\nQ4");
    }
    else if (X > 0 && Y == 0) {
        printf("\nEIXO X");
    }
    else if (X == 0 && Y > 0) {
        printf("\nEIXO Y");
    }
    else {
        printf("\nORIGEM");
    }

    return 0;
}