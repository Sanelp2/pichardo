#include <stdio.h>
#include <string.h>

typedef struct
{
    char noba[10];
    char nucu[10];
}banco;

typedef union
{
    banco che;
    banco nomi;
    char venta;
}fpago;

typedef struct
{
    char cnu[20];
    char col[20];
    char cp[5];
    char ciu[15];
}domicilio;

typedef struct
{
    int num;
    char nom[20];
    float ven[12];
    domicilio domi;
    float sal;
    fpago pago;
    int cla;
}vendedor;

void lectura(vendedor *, int);
void f1(vendedor *, int);
void f2(vendedor *, int);
void f3(vendedor *, int);
void f4(vendedor *, int);

void main(void)
{
vendedor vendedores[100];
int tam;
do
{
    printf("Ingrese el numero de vendedores: ");
    scanf("%D", &tam);
}
while(tam > 100 || tam < 1);
lectura(vendedores, tam);
f1(vendedores, tam);
f2(vendedores, tam);
f3(vendedores, tam);
f4(vendedores, tam);
printf("\n\tFIN DEL PROGRAMA");
}

void lectura(vendedor a[], int t)
{
    int i, j;
    for(i=0; i<t; i++)
    {
        printf("\n\tIngrese datos del vendedor %d", i+1);
        printf("\nNumero de vendedor: ");
        scanf("%d", &a[i].num);
        printf("Nombre del vendedor: ");
        fflush(stdin);
        gets(a[i].nom);
        printf("Ventas del ano: \n");
        for(j=0; j<12; j++)
        {
            printf("\tMes %d: ", j+1);
            scanf("%f", &a[i].ven[j]);
        }
        printf("Domicilio del vendedor: \n");
        printf("\tCalle y numero: ");
        fflush(stdin);
        gets(a[i].domi.cnu);
        printf("\tColonia: ");
        fflush(stdin);
        gets(a[i].domi.col);
        printf("\tCodigo Postal: ");
        fflush(stdin);
        gets(a[i].domi.cp);
        printf("\tCiudad: ");
        fflush(stdin);
        gets(a[i].domi.ciu);
        printf("Salario del vendedor: ");
        scanf("%f", &a[i].sal);
        printf("Forma de Pago (Banco-1 Nomina-2 Ventanilla-3): ");
        scanf("%d", &a[i].cla);
        switch(a[i].cla)
        {
            case 1:{
                    printf("\tNombre del banco: ");
                    fflush(stdin);
                    gets(a[i].pago.che.noba);
                    printf("\tNumero de cuenta: ");
                    fflush(stdin);
                    gets(a[i].pago.che.nucu);
                }
                break;
            case 2:{
                    printf("\tNombre del banco: ");
                    fflush(stdin);
                    gets(a[i].pago.nomi.noba);
                    printf("\tNumero de cuenta: ");
                    fflush(stdin);
                    gets(a[i].pago.nomi.nucu);
                }
                break;
            case 3: a[i].pago.venta = 'S';
                break;
        }
    }
}

void f1(vendedor a[], int t)
{
    int i, j;
    float sum;
    printf("\n\t\tVentas Totales de los Vendedores");
    for(i=0; i<t; i++)
    {
        printf("\nVendedor: %d", a[i].num);
        sum = 0.0;
        for(j=0; j<12; j++)
            sum += a[i].ven[j];
        printf("\nVentas: %.2f\n", sum);
    }
}

void f2(vendedor a[], int t)
{
    int i, j;
    float sum;
    printf("\n\t\tIncremento a los Vendedores con Ventas > 1,500,000$");
    for(i=0; i<t; i++)
    {
        sum = 0.0;
        for(j=0; j<12; j++)
            sum += a[i].ven[j];
        if(sum > 1500000.00)
        {
            a[i].sal = a[i].sal * 1.05;
            printf("\nNumero de empleado: %d\nVentas: %.2f\nNuevo salario: %.2f", a[i].num, sum, a[i].sal);
        }
    }
}

void f3(vendedor a[], int t)
{
    int i, j;
    float sum;
    printf("\n\t\tVendedores con Ventas < 300,000");
    for(i=0; i<t; i++)
    {
        sum =0.0;
        for(j=0; j<12; j++)
            sum += a[i].ven[j];
        if(sum <300000.00)
            printf("\nNumero de empleado: %d\nNombre: %s\nVentas: %.2f", a[i].num, a[i].nom, sum);
    }
}

void f4(vendedor a[], int t)
{
    int i;
    float sum;
    printf("\n\t\tVendedores con Cuenta en el Banco");
    for(i=0; i<t; i++)
        if(a[i].cla == 1)
            printf("\nNumero de vendedor: %d\n Banco: %s\nCuenta: %s",a[i].num, a[i].pago.che.noba, a[i].pago.che.nucu);
}
