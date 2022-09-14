//Determinar el factorial de un numero
//1*2*3*4*5*6*7*8*9*10 = 10

#include <stdio.h>
int main(void) 
{
    
    int i;
	int n;
	int fact;
	
	i = 0;
	n = 0;
	fact = 1;

    printf("Escribe un numero para calcular su factorial\n");
    scanf("%i",&n);

    for ( i = 1; i <= n; i++)
    {
        fact *= i;
    }
    
        printf("El factorial de %i", fact);


    return 0;
} 