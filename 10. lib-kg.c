#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float l, kg;
    printf ("Forneça um valor em quilogramas: ");
    scanf ("%f", &kg);

    l=kg*2.20462;
    printf ("\nEste valor em libras equivale a: %.2f", l);
}