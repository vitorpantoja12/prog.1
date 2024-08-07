#include <stdio.h>
int main (){
    float alt, larg, ar;
    printf ("Forneça a altura do retângulo: ");
    scanf ("%f", &alt);

    printf ("\nForneça a altura do retângulo: ");
    scanf ("%f", &larg);

    ar=(alt*larg);
    printf ("\nA área do retângulo é: %.1f", ar);
}