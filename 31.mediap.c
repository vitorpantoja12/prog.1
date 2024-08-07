#include <stdio.h>
int main (){
float e,f,g,ma;

printf ("\nDigite a primeira nota: ");
scanf ("%f/\n", &e);

printf ("Digite a segunda nota: ");
scanf ("%f/\n", &f);

printf ("Digite a terceira nota: ");
scanf ("%f", &g);

printf ("\nDigite o peso da primeira nota: ");
scanf ("%f/\n", &p1);

printf ("Digite o peso da segunda nota: ");
scanf ("%f/\n", &p2);

printf ("Digite o peso da terceira nota: ");
scanf ("%f", &p3);
ma=((e*p1)+(f*p2)+(g*p3))/(p1+p2+p3);

printf ("A média ponderada é: %.2f", ma);
return 0;
}
