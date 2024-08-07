#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float r, h, vl;
    printf ("Forneça o raio da base do cilindro: ");
    scanf ("%f", &r);

  printf ("Forneça a altura do cilindro: ");
    scanf ("%f", &h);

    vl=M_PI*(pow(r, 2))*h;
    printf ("\nO volume do cilindro é: %.3f", vl);
}
