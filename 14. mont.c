#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float v1, ja, ti, mt;
    printf ("Forneça o valor inicial do investimento: ");
    scanf ("%f", &v1);

    printf ("Forneça a taxa de juros anual: ");
    scanf ("%f", &ja);

    printf ("Forneça o tempo de investimento em anos: ");
    scanf ("%f", &ti);

    mt=v1*(pow((1+(ja/100)), ti));
    printf ("\nO montante final é: %.2f", mt);
}