#include <stdio.h>
#include <math.h>

void main(void)
{
int num;
printf("Ingresa el numero para calcular la serie: ");
scanf("%d", &num);
if (num > 0)
{
    printf("\nSerie de ULAM\n");
    printf("%d \t", num);
    while (num != 1)
    {
        if (pow(-1, num) > 0)
            num = num / 2;
        else
            num = num * 3 + 1;
        printf("%d \t", num);
    }
}
else
    printf("\n Num debe ser un entero positivo");
}
