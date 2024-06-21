#include <stdio.h>
#include <ctype.h>
char a = 160, e = 130, i = 161, u = 163;
void cambio(char ora1[100]);
void main(void)
{
    char oracion0[100], respuesta0 = 'n';
    int p;
    printf("**************************");
    printf("\n*Bienvenid@ a mi programa*\n");
    printf("**************************\n\n");
    printf("Aqu%c podras ingresar una cadena de car%ccteres (De no m%cs de 100 elementos), y el programa te devolver%c la misma cadena,\npero con las may%csculas y min%csculas invertidas.\nDebe tener en cuenta, que debe elegir car%ccteres el abecedario estadounidense \n\n",i, a, a, a, u, u,a);
    do
    {
        printf("\nIngresa t%c cadena de car%ccteres: \n\n",u, a);
        fflush(stdin);
        gets(oracion0);
        if(oracion0[0] != '\0')
        {
            if(oracion0[100] == '\0')
            {
                printf("\n\nMuy bien, t%c cadena de car%ccteres es:\n%s",u,a,oracion0);
                printf("\n\nEstas seguro de haberla ingresado de forma correcta? <S/N>\n", i);
                fflush(stdin);
                scanf("%c", &respuesta0);
                while((respuesta0 != 's' && respuesta0 != 'S') && (respuesta0 != 'n' && respuesta0 != 'N'))
                {
                    if((respuesta0 != 's' && respuesta0 != 'S') && (respuesta0 != 'n' && respuesta0 != 'N'))
                    {
                        printf("\nLa respuesta ingresada no ha sido reconocida, por favor, ingrese una respuesta valida. <S/N>\nRecuerda que tu cadena es:\n%s\n", oracion0);
                        fflush(stdin);
                        respuesta0 = getchar();
                    }
                }
            }
            else
            {
                printf("\n\nLa cadena ingresada es muy larga, aseg%crese de que tenga 100 elementos m%cximos",u,a);
                i = strlen(oracion0);
                printf("\n\nla longitud de la cadena es %d",i);
            }

        }
        else
            printf("\nDebe ingresar al menos un car%ccter", a);
    }
    while((respuesta0 != 's') && (respuesta0 != 'S'));
    cambio(oracion0);
}
void cambio(char ora1[100])
{
    int i = 0;
    while(ora1[i] != '\0')
    {
        if(isalpha(ora1[i]))
        {
            if(islower(ora1[i]))
                ora1[i] = toupper(ora1[i]);
            else
                if(isupper(ora1[i]))
                ora1[i] = tolower(ora1[i]);
        }
        i++;
    }
    printf("\nLa cadena resultante, con las may%csculas y min%csculas invertidas es:\n%s\n", u, u, ora1);
}
