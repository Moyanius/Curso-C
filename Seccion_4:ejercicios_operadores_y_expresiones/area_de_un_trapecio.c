#include "stdio.h"
int main() {
    float base_menor;
    float base_mayor;
    float altura;
    float area;

    printf("A continuación os solicitaremos datos necesarios para calcular el área de un trapecio\n");
    printf("Introduce la base mayor\n");
    scanf("%f",&base_mayor);
    printf("Introduce la base menor\n");
    scanf("%f",&base_menor);
    printf("Introduce la altura\n");
    scanf("%f",&altura);

    area = (((base_mayor * base_menor) / 2) * altura);

    printf("El área del trapecio es %.2f", area);
    return 0;
}