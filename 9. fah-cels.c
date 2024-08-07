#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float ce, fah;
    printf ("Forneça uma temperatura em Fahrenheit: ");
    scanf ("%f", &fah);

    ce=(fah-32)*5/9;
    printf ("\nEsta temperatura em Celsius é: %.2f", ce);
}