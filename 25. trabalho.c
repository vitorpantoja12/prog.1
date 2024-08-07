#include <stdio.h>
#include <math.h>
int main (){
    float f, d, tb;
    printf ("Forneça a força aplicada: ");
    scanf ("%f", &f);

    printf ("\nForneça a distância percorrida: ");
    scanf ("%f", &d);

    tb=f*d;
    printf ("\nO trabalho é: %.2f", tb);
    
}