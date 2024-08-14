#include <stdio.h>
int main (){
    float dma, dme, ar;
    printf ("Forneça a diagonal maior do losângulo: ");
    scanf ("%f", &dma);

    printf ("\nForneça a diagonal menor do losângulo: ");
    scanf ("%f", &dme);

    ar=(dma*dme)/2;
    printf ("\nA área do losângulo é: %.2f", ar);
}