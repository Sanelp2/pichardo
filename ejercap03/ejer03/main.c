#include <stdio.h>

void main(void)
{
    float pag, spa;
    spa = 0;
    printf("Ingrese el primer pago: \t");
    scanf("%f", &pag);
    while(pag)
    {
        spa = spa + pag;
        printf("Ingrese el siguiebte pago:\t ");
        scanf("%f", &pag);
    }
    printf("\nEl total de pagos del mes es: %.2f", spa);
}
