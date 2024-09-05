#include <stdio.h>

int main()
{
    int altura, op, i, j;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);

    printf("Escolha um tipo de triângulo (1 para triângulo preenchido e 2 para triângulo vazado): ");
    scanf("%d", &op);

   if (op == 1) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    } else if (op == 2) {
    for (int i = 1; i <= altura; i++) {
        printf("*");

        if (i < altura) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) {
                printf(" ");
            }
            printf("*");
        }
        
        printf("\n");
    }
    for (int i = 1; i <= 2 * altura - 1; i++) {
        printf("*");
    }
    printf("\n");
    } else {
        printf("Opção inválida.");
    }
    return 0;
}