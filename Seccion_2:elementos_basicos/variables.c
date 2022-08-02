//Variables

#include <stdio.h>  //libreria

int main (){        //Funcion Principal
    int x;          //Enteros 8, -9, 10 Ocupan 16 bits -32768 hasta 32767  2^16
    float y;        //Numero decimal 9.58,10,69, Ocupan 32bits 2^32, para limitar %3f o numero de decimales
    double y2;      //Lo mismo que las flotantes pero mas grande 64bits 2^64
    char z;         //Caracter: a, 4(esto lo entiende como letra)
    unsigned int f; //Numero natural 0 o mayor que 0 

    x = 5;
    y = 10.5;
    y2 = 20.9;
    z = 'a';
    f = 123;

    printf ("Valor de x: %i\n",x);
    printf ("Valor de y: %f\n",y);
    printf ("Valor de y2: %f\n",y2);
    printf ("Valor de z: %c\n",z);
    printf ("Valor de f: %i\n",f);

    printf ("Valor de x: %i\nValor de y: %f\n",x,y); //Se pueden varias variables en un printf

    return 0;

    
}