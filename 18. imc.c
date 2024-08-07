#include <stdio.h>
int main (){
    float m, h, imc;
    printf ("Forneça o seu peso: ");
    scanf ("%f", &m);

    printf ("\nForneça a sua altura: ");
    scanf ("%f", &h);

    imc=m/(h*h);
    printf ("\nO seu IMC é de: %.2f", imc);
}