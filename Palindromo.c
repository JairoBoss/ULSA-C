//Falta correcion del bucle
#include <stdio.h>
#define max 30
void palin()
{
 int inicio,fin;
    char palabra[max], caracater;
    int i;


    printf("\t\t\tIntrodusca la palabra: \n\n\t\t\t");
    scanf("%c",&caracater);
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
        printf("La palabra no es palindroma\t\t\t");
        printf("\n\n\n");

    }
        printf("\n\n\n");
        printf("\n\n\n");


}
void bucle()
{
    int bucle1;
     printf("\t\t\tQuieres probar con otra palabra?");
        printf("[1]Si[2]No");
        scanf("%d",&bucle1);
        while(bucle1==1)
        {
            palin();
            printf("\t\t\t\n\n\n");
            printf("\n\n\t\t\tQuieres probar con otra palabra?");
            printf("[1]Si[2]No");
            scanf("%d",&bucle1);
        }
}
int main()
{
    printf("\t\t\tCorregir la parte del bucle xd")
    printf("\t\t\tBienvenido al palindromo xd\n\n");
    palin();
    bucle();

}


