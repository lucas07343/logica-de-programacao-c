#include <stdio.h>

int main()
{
    double A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a medida B: "); 
    scanf("%lf", &B);
    printf("Digite a medida C: "); 
    scanf("%lf", &C);

    areaQuadrado = A * A;
    printf("\nArea do quadrado = %.4lf\n", areaQuadrado);

    areaTriangulo = (A * B) / 2.0;
    printf("Area do triangulo = %.4lf\n", areaTriangulo);

    areaTrapezio = ((A + B) * C) / 2.0;
    printf("Area do trapezio = %.4lf\n", areaTrapezio);

    return 0;
}