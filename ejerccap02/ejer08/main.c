#include <stdio.h>

void main(void)
{
    int mat, car, sem;
    float pro;
    printf("Ingrese matricula: ");
    scanf("%d", &mat);
    printf("Ingrese carrera(1-Industrial 2-Telematica 3-Computacion 4-Mecanica) : ");
    scanf("%d", &car);
    printf("Ingrese semestre: ");
    scanf("%d", &sem);
    printf("Ingrese promedio: ");
    scanf("%f", &pro);
    switch(car)
    {
    case 1: if (sem >= 6 && pro >= 8.5)
            printf("\n%d %d %5.2f", mat, car, pro);
        break;
    case 2: if (sem >= 5 && pro >= 9.0)
            printf("\n%d %d %5.2f", mat, car, pro);
        break;
    case 3: if (sem >= 6 && pro >= 8.8)
            printf("\n%d %d %5.2f", mat, car, pro);
        break;
    case 4: if (sem >= 7 && pro >= 9.0)
            printf("\n%d %d %5.2f", mat, car, pro);
        break;
     default: printf("\n Error en la carrera");
        break;
        }
}
