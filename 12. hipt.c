#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main (){
    float qo, qa, hip;
    printf ("Forneça o cateto oposto: ");
    scanf ("%f", &qo);

    printf ("Forneça o cateto adjacente: ");
    scanf ("%f", &qa);

    hip=sqrt((pow(qo, 2))+(pow (qa, 2)));
    printf ("\nA hipotenusa é: %.2f", hip);
}