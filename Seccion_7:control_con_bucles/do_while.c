#include <stdio.h>

int main()
{
	int i;

	i = 0;

	do{
		printf("%i\n", i);
		i++;
	} while ( i < 1000);
	
	return 0;
}