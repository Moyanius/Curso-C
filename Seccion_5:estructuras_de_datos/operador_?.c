// Expresion condicional operador ?
// Sintsaxis -> Condicion ? Expresion1 : Expresion2

#include "stdio.h"
int main(){
    int  numero;
    puts("Escribe un numero\n");
    scanf("%i", &numero);

    (numero%2==0) ? printf("El numero es par\n") : printf("Es impar\n");

    return 0;
}