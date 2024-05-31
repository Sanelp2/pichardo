#include <stdio.h>
#include <math.h>

void main(void)
{
    int num;
    long cua, suc = 0;
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &num);
    while (num)
    {
        cua = pow (num, 2);
        printf("%d al cubo es %ld", num, cua);
        suc = suc + cua;
        printf("\nIngrese un numero entero -0 para terminar-:\t");
        scanf("%d", &num);
    }
    printf("\nLa suma de los cuadrados es %ld", suc);
}
