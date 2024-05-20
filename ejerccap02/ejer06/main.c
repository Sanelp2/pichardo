#include <stdio.h>

void main(void)
{
    float sal;
    int niv;
    printf("Ingrese el nivel acadmico del profesor: ");
    scanf("%d", &niv);
    printf("Ingrese el salario: ");
    scanf("%f", &sal);
    switch(niv)
    {
        case 1: sal = sal * 1.035; break;
        case 2: sal = sal * 1.041; break;
        case 3: sal = sal * 1.048; break;
        case 4: sal = sal * 1.053; break;
    }
    printf("\nNivel: %d \tNuevo salario> %8.2f", niv, sal);
}
