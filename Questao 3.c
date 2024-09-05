#include <stdio.h>

int main() {
    int lar, i, j, e;

    printf("Digite a largura central do losango (deve ímpar): ");
    scanf("%d", &lar);

    if (lar % 2 == 0) {
        printf("Número inválido.\n");
    }

    for (i = 3; i <= lar; i += 2) {
        e = (lar - i) / 2;

        for (j = 0; j < e; j++) {
            printf(" ");
        }

        for (j = 0; j < i; j++) {
            printf("X");
        }

        printf("\n");
    }

    for (i = lar - 2; i >= 3; i -= 2) {
        e = (lar - i) / 2;

        for (j = 0; j < e; j++) {
            printf(" ");
        }

        for (j = 0; j < i; j++) {
            printf("X");
        }

        printf("\n");
    }

}