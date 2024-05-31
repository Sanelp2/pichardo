#include <stdio.h>

void main(void)
{
    int i, num;
    long fac;
    printf("\nIngrese el numero: ");
    scanf("%d", &num);
    if (num >= 0)
    {
        fac = 1;
        for (i=1; i <= num; i++)
            fac *= i;
        printf("\nEl factorial de %d es: %ld", num, fac);
    }
    else
        printf("\nError en el dato registrado");
}
