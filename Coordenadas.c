#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lngrados, lnminutos, lnsegundos; //ln es la latitud norte
    float lsgrados, lsminutos, lssegundos;  //ls es latitud sur
    float longitud_grados,latitud_grados; //Este dato nos va a calcular los grados
    int Latitud, longitud;//Estas variables las ocuparemos para elegir si es norte o sur o este o oeste
    printf("\t\t\tHola");

    //De la linea 14 a la linea 42 calculamos la latitud, con un switch creamos 2 casos posibles, norte y sur
    //este switch nos ayuda para saber si es negativo o positivo
    printf(" \nPresiona un numero para indicar su latitud [1]Norte o [2] Sur");
    scanf("%d",&longitud);
    switch (longitud)
    {
    case 1:
    printf("\n\t\t\tMete los valores de la latitud norte");
    printf("\n\t\t\tDa los grados: ");
    scanf("%f",&lngrados);
    printf("\n\t\t\tDa los minutos: ");
    scanf("%f",&lnminutos);
    printf("\n\t\t\tDa los segundos: ");
    scanf("%f",&lnsegundos);
    latitud_grados=(lngrados)+((lnminutos)/60)+((lnsegundos)/3600);//calcula las cordenadas
    break;
    case 2:
    printf("\n\t\t\tMete los valores de la latitud norte");
    printf("\n\t\t\tDa los grados: ");
    scanf("%f",&lngrados);
    printf("\n\t\t\tDa los minutos: ");
    scanf("%f",&lnminutos);
    printf("\n\t\t\tDa los segundos: ");
    scanf("%f",&lnsegundos);
    latitud_grados=(((lngrados)+((lnminutos)/60)+((lnsegundos)/3600))*-1);//calcula las cordenadas
    break;
    default:
        printf("Este no es un  valor valido ");
        return 0;
    break;
    }
    //De la linea 45 a la linea 73 calculamos la longitud con un switch creamos 2 casos posibles, este o oeste
    //este switch nos ayuda para saber si es negativo o positivo
    printf(" \nPresiona un numero para indicar su longitud [1]este o [2] oeste");
    scanf("%d",&Latitud);
    switch  (Latitud)
    {
    case 1:
    printf("\n\t\t\tAhora mete mete las de longitud sur\n ");
    printf("\n\t\t\tDa los grados: ");
    scanf("%f",&lsgrados);
    printf("\n\t\t\tMete los minutos: ");
    scanf("%f",&lsminutos);
    printf("\n\t\t\tMete los segundos: ");
    scanf("%f",&lssegundos);
    longitud_grados=(lsgrados)+((lsminutos)/60)+((lssegundos)/3600);//calcula las cordenadas
    break;
    case 2:
    printf("\n\t\t\tAhora mete mete las de lo longitud sur\n ");
    printf("\n\t\t\tDa los grados: ");
    scanf("%f",&lsgrados);
    printf("\n\t\t\tMete los minutos: ");
    scanf("%f",&lsminutos);
    printf("\n\t\t\tMete los segundos: ");
    scanf("%f",&lssegundos);
    longitud_grados=-((lsgrados)+((lsminutos)/60)+((lssegundos)/3600));//calcula las cordenadas
    break;
    default:
        printf("ERROR #404");
        return 0;
    break;
    }

    printf("\n\t\t\tTu link es el siguiente");
    printf("\nhttps://maps.google.com/maps/place/%f,%f",latitud_grados,longitud_grados);

    return 0;
}

