#include <stdio.h> 
int main(){
  int dia,mes;
  printf("============================================================\n");
  printf("============================================================\n");
printf("\n");
printf("\n");
printf("\t\t\tZODIACO\n\n\n");

    printf("\t\tIngresa el dia a calcular: ");
    scanf("%d",&dia);
    printf("------------------------------------------------------------\n");
    printf("\t\tIngresa el mes a calcular: ");
    scanf("%d",&mes);
    printf("------------------------------------------------------------\n");
    printf("\t\t");
    if (mes>=1)
    {
        if (mes<=12){

   //Signo zodiacal
    if (dia>=1)
    {
    if (dia<=31)
    {
    switch (mes)
    {
        case 1:
            if (dia>=20)
            printf("Tu signo es acuario");
            else
            printf("Tu signo es capricornio");
             break;
        case 2:
            if (dia<30)
            {
            if (dia>=19)
            printf("Tu sifgno es PISCIS");
            else
            printf("Tu signo es acuario");
            }
            else
            printf("Error 404");
        break;
        case 3:
            if (dia>=21)
            printf("Tu signo es aries");
            else
            printf("Tu signo es picis");
        break;
        case 4:
            if (dia>=20)
            printf("Tu signo es Tauro");
            else
            printf("Tu signo es aries");
        break;
        case 5:
            if (dia>=21)
            printf("Tu signo es geminis");
            else
            printf("Tu signo es tauro");
        break;
        case 6:
            if (dia>=21)
                printf("Tu signo es cancer");
            else
                printf("Tu singo es geminis");
        break;
        case 7:
            if (dia>=23)
                printf("Tu signo es leo");
            else
                printf("Tu signo es cancer");
        break;
        case 8:
            if (dia>=23)
                printf("Tu signo es virgo");
            else
                printf("Tu signo es leo");
        break;
        case 9:
            if (dia>=23)
                printf("Tu signo es libra");
            else
                printf("Tu signo es virgo");
        break;
        case 10:
            if (dia>=23)
                printf("Tu signo es escorpio");
            else
                printf("Tu signo es libra");
        break;
        case 11:
            if (dia>=22)
                printf("Tu signo es sagitario");
            else
                printf("Tu signo es escorpio");
        break;
        case 12:
            if (dia>=22)
                printf("Tu signo es caprucornio");
            else
                printf("Tu signo es sagitario");

        break;

    }
    }
    else
        printf("Error #404");
    }
    printf("\n");
      printf("------------------------------------------------------------\n");
printf("\t\t");
    //Estaciones
     if (dia>=1)
    {
    if (dia<=31)
    {
        switch(mes){
        case 1:
            printf("La estacion es invierno");
        break;
        case 2:
            if (dia<=29){
            printf("La estacion es invierno");
            }
            else
            printf("Error 404");
        break;
        case 3:
            if (dia>=20)
                printf("La estacion es primavera");
            else
                printf("La estacion es invierno");
            break;
        case 4:
            printf("La estacion es primavera");
            break;
        case 5:
            printf("La estacion es primavera");
        break;
        case 6:
            if (dia>=20)
            printf("Tu estacion es verano");
            else
                printf("Tu estacion es primavera");
        break;
        case 7:
            printf("Tu estacion es verano");
        break;
        case 8:
            printf("Tu estacion es verano");
        break;
        case 9:
            if (dia>=20)
            printf("Tu estacion es otoño");
            else
            printf("Tu estacion es verano");
        break;
        case 10:
            printf("Tu estacion es otoño");
        break;
        case 11:
            printf("Tu estacion es otoño");
        break;
        case 12:
            if (dia>=21)
            printf("Tu estacion es invierno");
            else
            printf("Tu estacion es otoño");
        break;
    }
    }
    }
    }
    else
        printf("ERROR #404");
    }
    printf("\n");
    printf("\n");
    printf("\n");


 printf("============================================================\n");
  printf("============================================================\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");


}
