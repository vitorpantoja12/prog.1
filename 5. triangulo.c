#include <stdio.h>
int main (){
    float alt, larg, ar;
    printf ("Forneça a altura do triângulo: ");
    scanf ("%f", &alt);

    printf ("\nForneça a altura do triângulo: ");
    scanf ("%f", &larg);

    ar=(alt*larg)/2;
    printf ("\nA área do triângulo é: %.1f", ar);
}