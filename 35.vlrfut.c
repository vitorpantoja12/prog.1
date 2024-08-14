#include <stdio.h>
#include <math.h>
int main (){
float e,f,g,vf;

printf ("\nForneça o valor presente do investimento: ");
scanf ("%f/\n", &e);

printf ("\nForneça a taxa de juros: ");
scanf ("%f/\n", &f);

printf ("\nDigite o número de períodos: ");
scanf ("%f/\n", &g);

vf=e*(pow((1+f/100),g));

printf ("O valor futuro é: %.2f", vf);
return 0;
}