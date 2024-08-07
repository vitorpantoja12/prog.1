#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float r, pr;
    printf ("Forneça o raio do círculo: ");
    scanf ("%f", &r);

    pr=2*M_PI*r;
    printf ("\nO perímetro do círculo é: %.2f", pr);
}