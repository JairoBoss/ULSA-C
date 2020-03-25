#include <stdio.h>
#define max 40
int main()
{
    int carpetas,i,munero,ultimo,asumar,basura,j,sumafinal;
    char ext[max];
    printf("============================================================\n");
    printf("============================================================\n");
    printf("\n");
    printf("\n");
    printf("\t\t\Recovery\n\n\n");
    printf("\t\t\tBienvenido al recovery\n\n");
    printf("------------------------------------------------------------\n");
    printf("Da la extencion de la carpeta: ");
    scanf("%s",&ext);
    printf("\n");
    printf("------------------------------------------------------------\n");
    //Aqui tampien podemos usar el fgest(ext,max,stdin);
    printf("Da el numero de carpetas: ");
    scanf("%d",&carpetas);
        printf("\n");

    printf("------------------------------------------------------------\n");

    for (i=1;i<carpetas;i++)
    {
        printf("\nNombre de la %da carpeta %s. ",i,ext);
        scanf("%d",&basura);
    }

    printf("\nNombre de la %da carpeta %s.  ",i,ext);
    scanf("%d",&ultimo);
    printf("------------------------------------------------------------\n");
    printf("------------------------------------------------------------\n");
    printf("Ingresa el numero que vamos a sumar");
    scanf("%d",&asumar);
    sumafinal=ultimo+asumar;
    printf("------------------------------------------------------------\n");
    printf("El recovery es: \n");
    printf("------------------------------------------------------------\n");

    j=0;


    for (j=ultimo+1;j<=sumafinal;j++)
    {
        printf("%s.%d \n",ext,j);
    }
    printf("------------------------------------------------------------\n");
    printf("------------------------------------------------------------\n");

}
