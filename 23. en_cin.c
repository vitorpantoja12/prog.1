#include <stdio.h>
#include <math.h>
int main (){
    float m, v, ec;
    printf ("Forneça a massa do objeto: ");
    scanf ("%f", &m);

    printf ("\nForneça a velocidade do objeto: ");
    scanf ("%f", &v);

    ec=(m*pow(v,2))/2;
    printf ("\nA energia cinética é: %.2f", ec);
    
}