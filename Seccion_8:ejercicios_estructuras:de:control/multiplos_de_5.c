// Poner los multiplos de 5 de 1 hasta n

#include <stdio.h>

int main()
{
	int numero;
	int i;

	printf("Introduce hasta que numero quieres que te saquemos el multiplo de 5\n");
	scanf("%i", &numero);
	i = 1;
	while(i <= numero)
	{
			if((i % 5) == 0)
			{
				printf("%i es un multiplo de 5\n", i);
			}
			i++;
	}	
}