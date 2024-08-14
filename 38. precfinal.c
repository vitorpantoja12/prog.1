#include <stdio.h>
int main (){
    float pr, de, pf;
    printf ("Forneça o preço do produto: ");
    scanf ("%f", &pr);

    printf ("\nForneça a porcentagem de desconto: ");
    scanf ("%f", &de);

    pf=pr*(1-de/100);
    printf ("\nO preço final é: %.1f", pf);
}