#include <stdio.h>
#include <math.h>
int main (){
    float p, t, tb;
    printf ("Forneça o trabalho realizado: ");
    scanf ("%f", &tb);

    printf ("\nForneça o tempo gasto50: ");
    scanf ("%f", &t);

    p=tb/t;
    printf ("\nO trabalho é: %.2f", p);
    
}