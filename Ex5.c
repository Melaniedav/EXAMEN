#include <stdio.h>
int main()
{
    printf("Melanie Dayana Aguilar Vergara");
    float numerodepersonas, numerodealimentos, porciones; 
    printf("\n Programa 1");
    printf("\n\n Dame el numero de personas");
    scanf("%f, &numerodepersonas");
    printf("\n\n Dame el numero de alimentos disponibles"); 
    scanf("%f, &numerodealimentos");
    porciones=numerodepersonas/numerodealimentos;
    printf("\n\n La porción para dividir equitativamente a cada persona es %f, porciones");
    return 0;
    
}