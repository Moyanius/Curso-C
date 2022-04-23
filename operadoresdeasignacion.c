//Operadores de Asignacion

#include <stdio.h>

int main(){

    int a, b, c, d, e;
    a = 10;
    b = 87;
    c = 25;
    d = 600;
    e = 89;

    a += 3;  // es igual a poner a = a + 3
    b -= 5;  // es igual a poner b = b - 5
    c *= 12; // es igual a poner c = c * 12
    d /= 4;  // es igual a poner d = d / 4
    e %= 10; // es igual a poner e = e % 10

    printf("El valor de a es = %i\n",a);
    printf("El valor de b es = %i\n",b);
    printf("El valor de c es = %i\n",c);
    printf("El valor de d es = %i\n",d);
    printf("El valor de e es = %i\n",e);

    return 0;

}