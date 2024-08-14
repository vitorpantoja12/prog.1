#include <stdio.h>
int main (){
    float pre, la, pr;
    printf ("Forneça o número de lados do polígono regular: ");
    scanf ("%f", &pre);

    printf ("\nForneça a medida de um dos lados: ");
    scanf ("%f", &la);

    pr=pre*la;
    printf ("\nO perímetro do polígono é de: %.2f", pr);
}