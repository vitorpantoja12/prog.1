#include <stdio.h>

int main()
{
    int altura, co, i, j;

    printf("Digite a altura do triângulo de pascal: ");
    scanf("%d", &altura);

    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < altura - i - 1; j++){
            printf (" ");
        }
        co = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", co);
            co = co * (i - j) / (j + 1);
    }
    printf ("\n");
}
}