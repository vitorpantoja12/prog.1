#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float r, ar;
    printf ("Forneça o raio do círculo: ");
    scanf ("%f", &r);

    ar=M_PI*(pow(r, 2));
    printf ("\nA área do círculo é: %.2f", ar);
}