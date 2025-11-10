#include <stdio.h>

int main()
{
    int N1, N2, N3, menor;

    printf("Primeiro valor: ");
    scanf("%d", &N1);
    printf("Segundo valor: ");
    scanf("%d", &N2);
    printf("Terceiro valor: ");
    scanf("%d", &N3);

    if (N1 < N2 && N1 < N3) {
        menor = N1;
    }
    else if (N2 < N3) {
        menor = N2;
    }
    else {
        menor = N3;
    }

    printf("MENOR = %d", menor);

    return 0;
}