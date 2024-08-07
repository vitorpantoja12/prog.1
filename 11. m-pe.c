#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float m, pe;
    printf ("Forneça um valor em metros: ");
    scanf ("%f", &m);

    pe=m*3.28084;
    printf ("\nEste valor em pés equivale a: %.2f", pe);
}