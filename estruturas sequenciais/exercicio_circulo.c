#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    double area, R;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &R);

    area = M_PI * pow(R, 2);
    printf("\nAREA = %.3lf\n", area);

    return 0;
}