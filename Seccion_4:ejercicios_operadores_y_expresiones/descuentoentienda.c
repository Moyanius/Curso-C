/*Ejercicio de de descuento en tienda
En un supermercado por la cuarentena quieren 
disminuir los precios al 15% para
ayudar a las personas y que no se queden los productos en la tienda.
Debes de dar el precio y el programa debe de dar los precios con el descuento y el descuento aparte
*/


#include <stdio.h>

int main(){

    float precio, descuento,compraDescuento;

    printf("Dame el precio del descuento\n");
    scanf("%f",&precio);

    descuento = precio * 0.15;
    compraDescuento = precio - descuento;

    printf("El precio del producto con el descuento es %.2f€\nEl total descosntando es %.2f€",compraDescuento,descuento);


   

return 0;
}
