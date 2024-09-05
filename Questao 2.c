#include <stdio.h>
int main () {
    int n, i, j, k;
    printf ("Digite o número de linhas da pirâmida: ");
    scanf ("%d", &n);

    if (n < 2){
        printf ("Número inválido.");
    }

    for (i = 1; i <= n; i++)
    {
        for (k = 0; k < n - i; k++)
        {
            printf (" ");
        }

    for (j = 1; j <= i; j++)
    {
        printf ("%d", j);
    }
    
    for (j = i - 1; j >= 1; j--)
    {
        printf ("%d", j);
    }
    
    printf("\n");
    }
}