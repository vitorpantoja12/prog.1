#include <stdio.h>

int main() {
    int B, L, A;
    int erro = 1;

    while (erro) {
        printf("Digite o valor de B (número de asteriscos na base, ímpar e >= 3): ");
        scanf("%d", &B);
        if (B >= 3 && B % 2 != 0) {
            erro = 0;
        } else {
            printf("Valor inválido para B.\n");
        }
    }

    erro = 1;
    while (erro) {
        printf("Digite o valor de L (largura do tronco, ímpar e <= metade de B): ");
        scanf("%d", &L);
        if (L >= 1 && L % 2 != 0 && L <= B / 2) {
            erro = 0;
        } else {
            printf("Valor inválido para L.\n");
        }
    }

    erro = 1;
    while (erro) {
        printf("Digite o valor de A (altura do tronco, >= 2 e <= metade de B): ");
        scanf("%d", &A);
        if (A >= 2 && A <= B / 2) {
            erro = 0;
        } else {
            printf("Valor inválido para A.\n");
        }
    }

    for (int i = 1; i <= B; i += 2) {

        for (int j = 0; j < (B - i) / 2; j++) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 0; i < A; i++) {
        for (int j = 0; j < (B - L) / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < L; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
