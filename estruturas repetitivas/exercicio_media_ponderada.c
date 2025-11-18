#include <stdio.h>

int main()
{
    int N, i;
    double val1, val2, val3, mediaPonderada;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Digite tres numeros:\n");
        scanf("%lf", &val1);
        scanf("%lf", &val2);
        scanf("%lf", &val3);

        mediaPonderada = (val1 * 2 + val2 * 3 + val3 * 5) / 10;
        printf("MEDIA = %.1lf\n", mediaPonderada); 
    }

    return 0;
}