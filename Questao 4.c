#include <stdio.h>

int main()
{
    int altura, op, i, j;

    printf("Digite a altura do quadrado: ");
    scanf("%d", &altura);

    printf("Escolha um tipo de quadrado (1 para quadrado preenchido e 2 para quadrado vazado): ");
    scanf("%d", &op);

    if (op==2)
    {
    for (i = 0; i < altura; i++)
    {
        for (j = 0; j < altura; j++)
        {
            if (i == 0 ||
                j == 0 ||
                i == altura - 1 ||
                j == altura - 1 )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    } else {
        if (op==1)
        {
            for (i = 0; i < altura; i++)
    {
        for (j = 0; j < altura; j++)
        {
            if (i == 0 ||
                j == 0 ||
                i == altura - 1 ||
                j == altura - 1 ||
                i == j ||
                i + j == altura - 1||
                j == i - 1||
                i == j - 1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        }
        
    } else {
        printf ("Opção inválida.");
    }}

    return 0;
}