#include <stdio.h>
int main()
{
    printf("Melanie Dayana Aguilar Vergara");
    float peso, altura, IMC; 
    printf("\n Programa 7");
    printf("\n\nCalcular el indice de masa corporal");
    printf("\n Dame el peso");
    scanf("%f", &peso);
    printf("\n\n Dame la altura"); 
    scanf("%f", &altura);
    IMC = peso /(altura*altura);
    printf("\n La masa muscular es %f", IMC);
    return 0;
    
}