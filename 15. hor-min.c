#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float h, min;
    printf ("Forneça um valor em horas: ");
    scanf ("%f", &h);

    min=h*60;
    printf ("Em minutos, isso equivale a: %.1f", min);
}