/*
Transformar años a meses
Meses a Semanas
Semanas a dias
y dias a horas

1 año = 12 meses
1 mes = 4 semanas
1 semana = 7 dias
1 dia = 24 horas
*/

//Pedirle al usuario que digite la cantidad de años con las que se hara la conversion

#include "stdio.h"
int main()
{
    int years;
    int months;
    int weeks;
    int days;
    long hours;
    long minutes;
    long seconds;

    printf("Este programa pasará los años introducidos a segundos\n");
    printf("Introduce el número de años\n");

    scanf("%i", &years);

    months = years * 12;
    weeks = months * 4;
    days =  weeks * 7;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;

    printf("%d meses\n", months);
    printf("%d semanas\n", weeks);
    printf("%d dias\n", days);
    printf("%ld horas\n", hours);
    printf("%ld minutos\n", minutes);
    printf("%ld segundos\n", seconds);
    printf("Aprovecha el tiempo, es poco e irreversible");


    return (0);

}