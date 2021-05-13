#include <stdio.h>
int main()
{
    printf("Melanie Dayana Aguilar Vergara");
    float primer, segundo, multiplicacion, division; 
    printf("\n \n \nPrograma 3");
    printf("\n \n \n Saca el promedio de valores reales");
    printf("\n \n \n Dame el valor real");
    scanf("%f", &primer);
    printf("\n \n \n Dame el segundo valor real"); 
    scanf("%f", &segundo);
    multiplicacion = primer * segundo;
    division = primer / segundo;
    printf ("\n El producto es %f", multiplicacion);
    printf ("\n El cociente es %f", division);
    return 0;
    
}