#include <stdio.h>

void main(void)
{
int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0;
float cal;
printf("Ingresa la calificacion el alumno: ");
scanf("%f", &cal);
while (cal != -1)
{
    if (cal < 4)
        r1++;
    else
        if (cal < 6)
            r2++;
        else
            if (cal < 8)
                r3++;
            else
                if(cal < 9)
                    r4++;
                else
                    r5++;
    printf("Ingrese la calificacion del alumno: ");
    scanf("%f", &cal);
}
printf("\n0..3.99 = %d", r1);
printf("\n4..5.99 = %d", r2);
printf("\n6..7.99 = %d", r3);
printf("\n8..8.99 = %d", r4);
printf("\n9..10 = %d", r5);
}
