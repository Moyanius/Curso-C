//Area de figuras geometricas en C

#include <stdio.h>
#include <math.h>

int main(){
    /*
    float base,altura,area;

    printf ("Este programa calcula el aerea de un triangulo\n");
    printf ("Inserta la base y la altura\n");
    scanf ("%f %f",&base,&altura);

    area = (base * altura)/2;
    printf ("El aerea del triangulo es: %.2f", area);

    */
    float lado;
    float area;

    printf ("Este programa calcula el aerea de un cuadrado\n");
    printf ("Inserta el lado\n");
    scanf ("%f",&lado);

    area = pow(lado,2); //Elevar al cuadrado con pow y la potencia
    printf ("El aerea del cuadrado es: %.2f", area);


    return 0;
}