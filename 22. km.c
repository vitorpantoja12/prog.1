#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float ml, km;
    printf ("Forneça um valor em milhas: ");
    scanf ("%f", &ml);

    km=ml/0.621371;
    printf ("\nEste valor em quilômetros equivale a: %.2f", km);
    
}