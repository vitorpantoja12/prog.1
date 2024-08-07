#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float ce, fah;
    printf ("Forneça uma temperatura em Celsius: ");
    scanf ("%f", &ce);

    fah=(ce*9/5)+32;
    printf ("\nEsta temperatura em Fahrenheit é: %.2f", fah);
}