#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float r, h, vl;
    printf ("Forneça o raio da base do cone: ");
    scanf ("%f", &r);

  printf ("Forneça a altura do cone: ");
    scanf ("%f", &h);

    vl=(1/3)*M_PI*pow(r, 2)*h;
    printf ("\nO volume do cone é: %.3f", vl);
    
}
