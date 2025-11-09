#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    printf("\nAREA = %.4lf\n", area);

    perimetro = (base + altura) * 2;
    printf("PERIMETRO = %.4lf\n", perimetro);

    diagonal = sqrt(pow(base, 2) + pow(altura, 2));
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}