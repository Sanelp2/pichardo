#include <stdio.h>
#include <math.h>

void main(void)
{
    int op, t;
    float res;
    printf("Ingrese la opcion del calculo y el valor entero: ");
    scanf("%d %d", &op, &t);
    switch(op)
    {
    case 1:
        res = t / 5;
        break;
    case 2: res = pow(t,t);
        break;
    case 3:
    case 4: res = 6 * t/2;
       break;
    default: res = 1;
        break;
    }
    printf("\nResultado:    %7.2f", res);
}
