#include <stdio.h>
#include <math.h>
int main (){
float e,g,te;

printf ("\nForneça a taxa de juros nominal: ");
scanf ("%f/\n", &e);

printf ("\nDigite o número de períodos por ano: ");
scanf ("%f/\n", &g);

te=(pow(((1+e)/g),(g-1)));

printf ("A taxa efetiva é: %.4f", te);
return 0;
}