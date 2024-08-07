#include <stdio.h>
int main (){
    float f, a, p;
    printf ("Forneça a força aplicada em newtons: ");
    scanf ("%f", &f);

    printf ("\nForneça a área em metros quadrados: ");
    scanf ("%f", &a);

    p=f/a;
    printf ("\nA pressão é: %.2f", p);
}