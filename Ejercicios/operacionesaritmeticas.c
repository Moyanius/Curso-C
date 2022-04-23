/*Operciones Aritmeticas

Pedir al usuario que introduzca 2 numeros
Y tendremos que sumarlos, restarlos, dividrlos y multiplicarlos*/

#include <stdio.h>

int main(){

    float num1, num2, suma, resta, multiplicación, división;

    printf ("Escribe 2 numeros \n");
    scanf ("%f %f",&num1,&num2);

    suma = num1 + num2;
    resta = num1 -num2;
    multiplicación = num1 * num2;
    división = num1 / num2;

    printf ("El resultado de la suma es: %.2f\n" ,suma); //Limitamos el numero de decimales con %.2f
    printf ("El resultado de la resta es: %.2f\n" ,resta);
    printf ("El resultado de la multiplicación es: %.2f\n" ,multiplicación);
    printf ("El resultado de la división es: %.2f\n" ,división);

    printf ("Gracias por utilizar nuestro programa");

    return 0;
}
