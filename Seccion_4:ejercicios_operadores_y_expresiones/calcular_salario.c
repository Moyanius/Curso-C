#include "stdio.h"
int main() {

    float precio_hora;
    int semanas;
    float ganado_dia;

    printf("Calculadora de salarios por semanas trabajadas\n");

    printf("Introduce cuanto ganas por hora\n");
    scanf("%f", &precio_hora);

    ganado_dia = precio_hora * 8;
    if(ganado_dia == 0)
     {
        printf("eres un tieso Alvaro");
        return 0;
     }   
    printf("Has ganado al dia %.2f €", ganado_dia);

    return 0;
}