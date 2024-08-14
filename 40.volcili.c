#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float r, a, vol;
    printf ("Forneça o raio do cilindro: ");
    scanf ("%f", &r);

    printf ("Forneça a altura do cilindro: ");
    scanf ("%f", &a);

    vol=M_PI*(pow(r, 2))*a;
    printf ("\nO volume do cilindro é de: %.3f", vol);
}