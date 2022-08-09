//ver si un alumno va a pasar de año o no
//Un alumno solo tiene derecho a suspender 3 materias para poder pasar de año
//si suspende 4 materias no puede pasar de año y repite

#include "stdio.h"

int main() {
    int materias_suspendidas;

    printf("Cuantas materias has suspendidas?\n");
    scanf("%i", &materias_suspendidas);

    if( materias_suspendidas >= 4)
        printf("Tienes que repetir curso");
    else( materias_suspendidas < 4)
     printf("Has pasado de curso");

    return 0;
}