// Determinar suma de todos los numeros hasta que el usuario determine

#include <stdio.h>

int main()
{
	
	int i;
	int numero;
	int suma;

	suma = 0;
	i = 1;
	printf("Introduce el numero hasta el que quieres que te sume\n");
	scanf("%i", &numero);

	while(i <= numero)
	{
		suma += i;
		i++;
	}
	printf("La suma hasta el numero %i es de %i\n", numero, suma);
	
	return 0;
}