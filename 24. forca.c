#include <stdio.h>
#include <math.h>
int main (){
    float m, a, fr;
    printf ("Forneça a massa do objeto: ");
    scanf ("%f", &m);

    printf ("\nForneça a aceleração do objeto: ");
    scanf ("%f", &a);

    fr=m*a;
    printf ("\nA força é: %.2f", fr);
    
}