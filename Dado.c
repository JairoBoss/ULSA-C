#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int basura1,basura2;
    int suma;
    printf("\t\t\tPrograma del dado\n\n");
    printf("\t\t\tPresiona 1 para lanzar el primer dado\n\n");
    scanf("%d",&basura1);//para que los aleatorios no se repitan tiene que haber un rango de tiempo, eso entendi, y pues puse esto xd
    printf("\t\t\tPresiona 2 para lanzar el primer dado\n\n");
    scanf("%d",&basura1);

    srand(time(NULL));
    int  numero = 1+rand () % 6;
    printf("\t\t\tEl primer dado es %d\n\n",numero);

    int  numero2 = 1+rand () % 6;
    printf("\t\t\tEl primer dado es %d\n\n",numero2);

    suma = numero2+numero;

    printf("\t\t\tLa suma de los dados es %d\n\n\n\n",suma);



    return 0;
}