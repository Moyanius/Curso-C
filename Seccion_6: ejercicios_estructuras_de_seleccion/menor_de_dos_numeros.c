#include <stdio.h>

int main()
{
	float numero1;
	float numero2;

	printf("A continuacion meta dos números para saber cual de ellos es menor\n");
	scanf("%f %f", &numero1, &numero2);

	if(numero1 < numero2)
		printf("El %2.f es el menor de los dos, lo has introducido el primero\n" ,numero1);
	else
		printf("El %2.f es el menor de los dos, lo has introducido el segundo\n", numero2);
	return 0;
}