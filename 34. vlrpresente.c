#include <stdio.h>
#include <math.h>
int main (){
float e,f,g,vp;

printf ("\nForneça o valor futuro do investimento: ");
scanf ("%f/\n", &e);

printf ("\nForneça a taxa de juros: ");
scanf ("%f/\n", &f);

printf ("\nDigite o número de períodos: ");
scanf ("%f/\n", &g);

vp=e/(pow((1+f/100),g));

printf ("O valor presente é: %.2f", vp);
return 0;
}
