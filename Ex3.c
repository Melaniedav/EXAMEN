#include <stdio.h>
 int main()
{
    printf("Melanie Dayana Aguilar Vergara");
    float Fresa, cincokilogramos, $13, precio;
    printf ( "\n\n comprando fruta");
    printf ( "\n\n precio de cualquier fruta $13");
    printf ( "\n\n ingrese la fruta que selecciono");
    scanf ( "%f", &Fresa);
    printf ( "\n\n ingrese el peso de la fruta seleccionada");
    scanf ( "%f", &cincokilogramos);
    precio= cincokilogramos * $13;
    printf ( "\n\n el precio total es %f", precio);
    return 0;

}