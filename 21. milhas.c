#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float ml, km;
    printf ("Forneça um valor em quilômetros: ");
    scanf ("%f", &km);

    ml=km*0.621371;
    printf ("\nEste valor em milhas equivale a: %.2f", ml);
    
}