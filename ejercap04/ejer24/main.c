#include <stdio.h>

int f1(void);
int f2(void);
int f3(void);
int f4(void);
int k = 5;

void main(void)
{
int i;
for(i=1; i <=4; i++)
{
    printf("\n\nEl resultado de la funcion f1 es: %d", f1());
    printf("\nEl resultado de la funcion f2 es: %d", f2());
    printf("\nEl resultado de la funcion f3 es: %d", f3());
    printf("\nEl resultado de la funcion f4 es: %d", f4());
}
}

int f1(void)
{
k *= k;
return(k);
}

int f2(void)
{
int k = 3;
k++;
return(k);
}

int f3(void)
{
static int k = 6;
k += 3;
return(k);
}

int f4(void)
{
int l = 4;
l = l + k;
return(l);
}
