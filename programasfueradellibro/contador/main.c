#include <stdio.h>
#include <ctype.h>

int may = 0, min = 0, num = 0;
char a = 160, e = 130, u = 163;

void main(void)
{
    char cad[100], resp = 'o';
    printf("**************************\n*Bienvenid@ a mi programa*\n**************************\n\n");
    printf("Aqu%c podras saber cuantas may%csculas, min%csculas y n%cmeros tiene una cadena de car%ccteres.\n(No puede ser mayor a 100 car%ccteres).\n",161,u,u,u,a,a);
    do
    {
        printf("\nIngrese una cadena de car%ccteres:\n", a);
        fflush(stdin);
        gets(cad);
        if(cad[0] != '\0')
        {
            if(cad[100] == '\0')
            {
                printf("\nTu cadena de car%ccteres es:\n%s\n\nEst%cs seguro que quieres que se analize esta cadena? <S/N>\n",a,cad,a);
                fflush(stdin);
                resp = getchar();
                while((resp != 's' && resp != 'S') && (resp != 'n' && resp != 'N'))
                {
                    if((resp != 's' && resp != 'S') && (resp != 'n' && resp != 'N'))
                    {
                        printf("\nLa respuesta ingresada no ha sido reconocida, por favor, ingrese una respuesta valida. <S/N>\nRecuerda que tu cadena es:\n%s\n", cad);
                        fflush(stdin);
                        resp = getchar();
                    }
                }
            }
            else
                printf("\nTu cadena es muy larga, aseg%crate ue tenga 100 car%ccteres maximos.",u,a);
        }
        else
            printf("Tu cadena no tiene ning%cn car%ccter.\n",u,a);
    }
    while(resp != 's' && resp != 'S');
    contador(cad);
    printf("\nFelicidades!!!, la cadena fue an%clizada %cxitosamente.\nEn tu cadena hay %d may%csculas, %d min%csculas y %d d%cgitos\n",a,e,may,u,min,u,num,161);
    }
void contador(char cad0[100])
{
    int i = 0;
    while(cad0[i] != '\0')
        {
            if(isalpha(cad0[i]))
            {
                if(isupper(cad0[i]))
                    may++;
                else
                    if(islower(cad0[i]))
                        min++;
            }
        i++;
        }
    i = 0;
    while(cad0[i] != '\0')
    {
        if(isdigit(cad0[i]))
            num++;
        i++;
    }
}
