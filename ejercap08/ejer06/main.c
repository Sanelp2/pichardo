#include <stdio.h>
#include <string.h>

typedef struct
{
    int clave;
    char nombre[15];
    float precio;
    int existencia;
}producto;

void lectura(producto *, int);
void ventas(producto *, int);
void reabastecimiento(producto *, int);
void nuevos_productos(producto *, int *);
void inventario(producto *, int);

void main(void)
{
producto inv[100];
int tam, ope;
do
{
    printf("Ingrese el numero de productos: ");
    scanf("%d", &tam);
}
while(tam> 100 || tam < 1);
lectura(inv, tam);
printf("\nIngrese operaciones  realizar. \n\t\t 1 - Ventas \n\t\t 2 - Reabastecimiento \n\t\t 3 - Nuevos Productos \n\t\t 4 - Inventario \n\t\t 0 - Salir: ");
scanf("%d", &ope);
while(ope)
{
    switch(ope)
    {
        case 1: ventas(inv, tam);
            break;
        case 2: reabastecimiento(inv, tam);
            break;
        case 3: nuevos_productos(inv, &tam);
            break;
        case 4: inventario(inv, tam);
            break;
    };
    printf("\nIngrese operaciones  realizar. \n\t\t 1 - Ventas \n\t\t 2 - Reabastecimiento \n\t\t 3 - Nuevos Productos \n\t\t 4 - Inventario \n\t\t 0 - Salir: ");
    scanf("%d", &ope);
}
}

void lectura(producto a[], int t)
{
int i;
for(i=0; i<t; i++)
{
    printf("\nIngrese informacion del producto %d", i+1);
    printf("\n\tClave: ");
    scanf("%d", &a[i].clave);
    fflush(stdin);
    printf("\tNombre: ");
    gets(a[i].nombre);
    printf("\tPrecio: ");
    scanf("%f", &a[i].precio);
    printf("\tExistencia: ");
    scanf("%d", &a[i].existencia);
}
}

void ventas(producto a[], int t)
{
int cla, can, i, res;
float tot, par;
printf("\nIngrese clave del producto -0 para salir-: ");
scanf("%d", &cla);
tot = 0.0;
while(cla)
{
    printf("\tCantidad: ");
    scanf("%d", &can);
    i = 0;
    while((i < t) && (a[i].clave < cla))
        i++;
    if((i == t) || (a[i].clave > cla))
        printf("\nLa clave del producto es incorrecta");
    else
        if(a[i].existencia >= can)
        {
            a[i].existencia -= can;
            par = a[i].precio * can;
            tot += par;
        }
        else
        {
            printf("\nNo existe en inventario la cantidad solicitada. Solo hay %d", a[i].existencia);
            printf(" \nLos lleva 1 - Si 0 - No?: ");
            scanf("%d", &res);
            if(res)
            {
                par = a[i].precio * a[i].existencia;
                a[i].existencia = 0;
                tot += par;
            }
        }
        printf("\nIngrese la siguiente clave del producto -0 para salir-: ");
        scanf("%d", &cla);
}
printf("\nTotal de la venta: %f", tot);
}

void reabastecimiento(producto a[], int t)
{
int cla, can, i;
printf("\nIngrese clave del producto -0 para sallir-: ");
scanf("%d", &cla);
while(cla)
{
    i = 0;
    while((i < t) && (a[i].clave < cla))
        i++;
    if ((i == t) || (a[i].clave > cla))
        printf("\nLa clave del producto ingresada es incorrecta");
    else
    {
        printf("\tCantidad: ");
        scanf("%d", &can);
        a[i].existencia += can;
    }
    printf("\nIngrese otra clave del producto -0 para salir-: ");
    scanf("%d", &cla);
}
}

void nuevos_productos(producto a[], int *t)
{
int cla, i, j;
printf("\nIngrese clave del producto -0 para salir-: ");
scanf("%d", &cla);
while((*t < 30) && (cla))
{
    i = 0;
    while((i < *t) && (a[i].clave))
        i++;
    if(i == *t)
    {
        a[i].clave = cla;
        printf("\tNombre:");
        fflush(stdin);
        gets(a[i].nombre);
        printf("\tPrecio:");
        scanf("%f", &a[i].precio);
        printf("\tCantidad: ");
        scanf("%d", &a[i].existencia);
        *t = *t + 1;
    }
    else
        if(a[i].clave == cla)
            printf("\nEl producto ya se encuenra en el inventario");
        else
        {
            for(j = *t; j>i; j--)
                a[j] = a[j-1];
            a[i].clave = cla;
            printf("\tNombre: ");
            fflush(stdin);
            gets(a[i].nombre);
            printf("\tPrecio: ");
            scanf("%f", &a[i].precio);
            printf("\tCantidad: ");
            scanf("%d", &a[i].existencia);
            *t = *t + 1;
        }
        printf("\nIngrese otra clave de producto -0 para salir-: ");
        scanf("%d", &cla);
}
if(*t == 30)
    printf("\nYa no hay espacio para incorporar nuevos productos");
}

void inventario(producto a[], int t)
{
    int i;
    for(i=0; i<t; i++)
    {
        printf("\nClave: %d", a[i].clave);
        printf("\tNombre: %s", a[i].nombre);
        printf("\tPrecio: %f", a[i].precio);
        printf("\tExistencia: %d \n", a[i].existencia);
    }
}
