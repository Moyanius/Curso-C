/*
Calcular tarifas de saldo en celulares
y poner precios
De 1000 a 1500 Premium
De 500 a 999 Intermedia
De 100 a 499 Basica
*/

//SOLO CON IF ANIDADOS

#define Tarifa3 "Premium"
#define Tarifa2 "Intermedia"
#define Tarifa1 "Basica"

#include <stdio.h>

#include "stdio.h"
int main (){
    float basica;
    float intermedia;
    float premium;
    float pago;

    printf("Cuanto estás dispuesto a pagar?\n");
    scanf("%f", &pago);

    if(pago >= 100 && pago <= 499)
        printf("La tarifa segun tu consumo es Tarifa Basica\n");
    
    else if(pago >= 500 && pago <= 999)
        printf("La tarifa segun tu consumo es Tarifa Intermedia\n");

    else if(pago >= 1000)
        printf("La tarifa segun tu consumo es Tarifa Premium\n");
    return 0;
}