#include <stdio.h>
int main (){
float e,f,g,ma;

printf ("\nDigite o primeiro número: ");
scanf ("%f/\n", &e);

printf ("Digite o segundo número: ");
scanf ("%f/\n", &f);

printf ("Digite o terceiro número: ");
scanf ("%f", &g);
ma= (e+f+g) / 3;

printf ("A média aritmética dos números %.0f, %.0f e %.0f é: %.1f", e, f, g, ma);
return 0;
}