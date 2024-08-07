#include <stdio.h>
int main (){
    float d, t, vm;
    printf ("Forneça a distância percorrida: ");
    scanf ("%f", &d);

    printf ("\nForneça o tempo gasto no percurso: ");
    scanf ("%f", &t);

    vm=d/t;
    printf ("\nA velocidade média foi de: %.2f", vm);
}