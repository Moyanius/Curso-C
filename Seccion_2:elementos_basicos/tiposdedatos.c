//Tipos de datos en C

#include <stdio.h>
#include <stdbool.h>

int main(){

    int a = 1;                     //Enteros 8, -9, 10 Ocupan 16 bits -32768 hasta 32767  2^16
    unsigned int h = 2;            //solo puede ser verdadero, Numero natural 0 o mayor que 0
    char b = 'z';                  //Caracter: a, 4(esto lo entiende como letra)
    float c = 1.5;                 //Numero decimal 9.58,10,69, Ocupan 32bits 2^32, para limitar %3f o numero de decimales
    double  d = 1.555555555555;    //Lo mismo que las flotantes pero mas grande 64bits 2^64
    short v = 2;


    printf("el valor del entero es de %i\n",a);
    printf("el valor del chart es de %c\n",b);
    printf("el valor del float es de %f\n",c);
    printf("el valor del double es de %f\n",d);
    printf("el valor del short es de %i\n",v);
}