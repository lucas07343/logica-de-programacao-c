#include <stdio.h>

int main()
{
    int X, i, resultado;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d\n", &X);

    for (i = 1; i < 11; i++) {
        resultado = X * i;
        printf("%d x %d = %d\n", X, i, resultado);
    }
    
    return 0;
}