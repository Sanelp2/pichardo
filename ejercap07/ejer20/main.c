#include <stdio.h>
#include <string.h>

int longitud(char cad);

void main(void)
{
int i, n, l = -1, p, t;
char cad[50], fra[20][50];
printf("\nIngrese el numero de filas del arreglo: ");
scanf("%d", &n);
for(i=0; i<n; i++)
{
    printf("Ingrese la linea %d de texto. Maximo 50 caracteres: ", i+1);
    fflush(stdin);
    gets(fra[i]);
}
printf("\n");
for(i=0; i<n; i++)
{
    strcpy(cad, fra[i]);
    t = longitu(cad);
    if(t > l)
    {
        l = t;
        p = i;
    }
}
printf("\nLa cadena con mayor longitud es: ");
puts(fra[p]);
printf("\nLongitud: %d", l);
}

int longitu(char* cadena)
{
int cue = 0;
while(! cadena[cue] == '\0')
    cue++;
return(cue);
}
