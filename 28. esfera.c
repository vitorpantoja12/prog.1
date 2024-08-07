#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float r, vl;
    printf ("Forneça o raio da esfera: ");
    scanf ("%f", &r);

    vl=(4/3)*M_PI*(pow(r, 3));
    printf ("\nO volume da esfera é: %.3f", vl);
    
}