#include <stdio.h>
int main (){
float e,f,g,tc;

printf ("\nForneça a população inicial: ");
scanf ("%f/\n", &e);

printf ("\nForneça a população final: ");
scanf ("%f/\n", &f);

printf ("\nDigite o número de anos: ");
scanf ("%f/\n", &g);

tc=((f-e)/e)*100/g;

printf ("A taxa de crescimento populacional é: %.2f", tc);
return 0;
}
