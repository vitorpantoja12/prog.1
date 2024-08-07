#include <stdio.h>
#include <math.h>
int main (){
    float v, a;
    printf ("Forneça a aresta do cubo: ");
    scanf ("%f", &a);

    v=pow(a,3);
    printf ("\nO volume do cubo é: %.2f", v);
    
}