#include <stdio.h>

int main() {

    int n;
	int cont;
	int i;

	cont = 0;

    printf("Escribe un numero\n");
    scanf("%i",&n);

    for ( i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cont++;
        }
    }
    if (cont>2)
    {
        printf("El numero %i no es primo\n",n);
    }else
    {
        printf("El numero %i es primo\n",n);
    }
}