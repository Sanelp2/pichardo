#include <stdio.h>

void main(void)
{
int i, n;
float lan, sla = 0;
do
{
    printf("Ingrese el numero de lanzamiento:\t");
    scanf("%d", &n);
}
while (n < 1 || n > 11);
for (i=1; i<n; i++)
{
    printf("\nIngrese el lanzamiento %d: ", i);
    scanf("%f", &lan);
    sla = sla + lan;
}
sla = sla / n;
printf("\nEl promedio de lanzamiento es: %.2f", sla);
}
