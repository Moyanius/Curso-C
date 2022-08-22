// Sumar un numero y restar el siguiente 1 - 2 + 3 - 4 + 5 - 6 + 7
// Impares == positivos
// Pares == negativos

#include <stdio.h>

int main(void){

	int sumapar;
	int sumaimpar;
	int n;
	int i;
	int neg;
	int sumageneral;

	sumageneral = 0;
	sumapar = 0;
	sumaimpar = 0;
	
	printf("Hasta que numero quieres sumar?");
	scanf("%i", &n);
	i = 1;
	while (i <= n)
	{
		if((i%2) == 0)
		{
			neg = i * (-1);
			sumapar += neg;
		}
		else{
			sumaimpar += i;
		}
		i++;
	}
	sumageneral = sumaimpar + sumapar;
	printf("El resultado de la suma es de %i", sumageneral);
	return 0;
}