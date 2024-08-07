#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float min,seg;
    printf ("Forneça um valor em minutos: ");
    scanf ("%f", &min);

    seg=min*60;
    printf ("Em segundos, isso equivale a: %.1f", seg);
}