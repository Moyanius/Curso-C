// Continue sirve para terminar una itecacion y pasar a la siguiente
// Break no solo termina con una itercion, si no con el ciclo completo

#include <stdio.h>

int main(void)
{
	int numero,i;
    printf("Escribe el numero que sera ignorado\n");
    scanf("%i",&numero);

    for (i = 0; i < 100; i++){
        if (i == numero)
            continue;
            printf("\n%i",i);
    }
        printf("\n\n");
//* El ciclo esta definido hasta 99

for (i = 0; i < 100; i++){
    if (i == 5)
    break;
    printf("\n%i",i);
    
}

    return 0;
}