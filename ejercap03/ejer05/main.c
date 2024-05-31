#include <stdio.h>

void main (void)
{
    float pag, spa = 0;
    printf("Ingrese el primer pago:\t ");
    scanf("%f", &pag);
    do
{
    spa = spa + pag;
    printf("Ingrese el siguiente pago -0 para terminar- :\t ");
    scanf("%f", &pag);
}
while(pag);
printf("\nEl total de pagos del mes es: %.2f", spa);
}
