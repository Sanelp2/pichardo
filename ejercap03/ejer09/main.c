#include <stdio.h>

void main(void)
{
int i = 2, cam = 1;
long sse = 0;
while (i <= 2500)
{
    sse = sse + i;
    printf("\t %d", i);
    if (cam)
    {
        i += 5;
        cam--;
    }
    else
    {
        i += 3;
        cam++;
    }
}
printf("\nLa suma de la serie es: %ld", sse);
}
