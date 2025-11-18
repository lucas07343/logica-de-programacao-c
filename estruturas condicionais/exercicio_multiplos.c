#include <stdio.h>

int main()
{
    int N1, N2;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d", &N1);
    scanf("%d", &N2);

    if (N1 % N2 == 0 || N2 % N1 == 0) {
        printf("\nSao multiplos\n");
    }
    else {
        printf("\nNao sao multiplos\n");
    }

    return 0;
}