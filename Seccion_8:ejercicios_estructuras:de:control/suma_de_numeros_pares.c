/*
Suma de 20 numeros pares 20
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int i;
    int suma;
    int numstart;
    int numnext;
    int suma_total;

    suma = 0;
    suma_total = 0;
    numstart = 0;
    i = 0;
    numnext = 0;

    printf("Introduce desde que numero par quieres que sumemos 20 pares\n");
    scanf("%i", &numstart);

    if(numstart % 2 == 0)
    {
            while(i <= 20)
            {
                numnext = numstart + 2;
                numstart = numstart + numnext;
                i++;
                
                printf("El resultado es %i\n", numstart);
            }
    }
else
    printf("El numero no es par");
    return 0;
}
