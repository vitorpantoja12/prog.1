#include <stdio.h>
int main (){
    float m, vol, d;
    printf ("Forneça a massa do objeto: ");
    scanf ("%f", &m);

    printf ("\nForneça o volume do objeto: ");
    scanf ("%f", &vol);

    d=(m/vol);
    printf ("\nA densidade desse objeto é: %.2f", d);
}