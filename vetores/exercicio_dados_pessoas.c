#include <stdio.h>

int main()
{
    int N, i, qteMulheres, qteHomens;
    double maior, menor, mediaAlturaMulheres, somaAlturasMulheres;
    
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    double alturas[N];
    char generos[N];

    for (i = 0; i < N; i++) {
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &alturas[i]);
        printf("Genero da %da pessoa: ", i + 1);
        scanf(" %c", &generos[i]);
    }

    maior = alturas[0];
    menor = alturas[0];
    for (i = 0; i < N; i++) {
        if (alturas[i] < menor) {
            menor = alturas[i];
        }
        else if (alturas[i] > maior) {
            maior = alturas[i];
        }
    }

    somaAlturasMulheres = 0;
    qteMulheres = 0;
    for (i = 0; i < N; i++) {
        if (generos[i] == 'F') {
            somaAlturasMulheres = somaAlturasMulheres + alturas[i];
            qteMulheres++;
        }
    }

    mediaAlturaMulheres = somaAlturasMulheres / qteMulheres;
    qteHomens = qteMulheres - N;

    printf("\nMenor altura = %.2lf\n", menor);
    printf("Maior altura = %.2lf\n", maior);
    printf("Media das alturas das mulheres = %.2lf\n", mediaAlturaMulheres);
    printf("Numero de homens = %d", qteHomens);

    return 0;
}