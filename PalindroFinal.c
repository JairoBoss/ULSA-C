#include <stdio.h>
#define max 30 //valor maximo de nuestra palabra
void palin()
{
 int inicio,fin;
    char palabra[max], caracater;//aqui caracter me refiero a la palabra, para ver si es o n o es palindroma
    int i;


    printf("\t\t\tIntrodusca la palabra: \n\t\t\t");
    scanf("%c",&caracater);
    printf("------------------------------------------------------------\n");

    i=0;
    while(i<max&&caracater!='\n')
    {
        palabra[i]=caracater;
        i++;
        scanf("%c",&caracater);
    }
    inicio=0;
    fin=i-1;

    while(inicio<fin && palabra[inicio]==palabra[fin])
    {
        inicio++;
        fin--;
    }
    fflush(stdin);
    if (inicio>=fin)
    {
        printf("\n\n");
        printf("\t\t\t");
        printf("La palabra es palindroma");
        printf("\n\n\n");
    }
    else
    {
        printf("\n\n");
        printf("\t\t\t");
        printf("ERROR #404 \n\t\t\tLa palabra no es palindroma\t\t\t");
        printf("\n\n\n");

    }


}
int main()
{
     printf("============================================================\n");
    printf("============================================================\n");
    printf("\n");
    printf("\n");
    printf("\t\t\tPALINDROMIA\n\n\n");
    printf("\t\t\tBienvenido al palindromo xd\n\n");
    printf("------------------------------------------------------------\n");

    palin();


}
