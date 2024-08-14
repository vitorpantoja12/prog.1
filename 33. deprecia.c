#include <stdio.h>
int main (){
float e,f,g,da;

printf ("\nForneça o valor inicial: ");
scanf ("%f/\n", &e);

printf ("\nForneça o valor residual: ");
scanf ("%f/\n", &f);

printf ("\nDigite os anos de vida útil: ");
scanf ("%f/\n", &g);

da=(e-f)/g;

printf ("A depreciação anual é: %.2f", da);
return 0;
}
