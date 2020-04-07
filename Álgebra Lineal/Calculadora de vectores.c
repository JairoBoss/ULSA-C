#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592654

int main()
{
    float valor_x, valor_y, magnitug, angulo_rad,angulo_grados; //Variables para el primer vector
    float valor_x2, valor_y2, magnitug2, angulo_rad2, angulo_grados2; //Variables para el segundo vector
    float productoescalar, anguloentrelos2_rad, anguloentrelos2_grados;
printf("\n===========================================================");
printf("\n===========================================================\n");
    printf("\t\tCalculadora de Vectores\n");
printf("\n===========================================================");
printf("\n===========================================================");
    printf("\nIntroduce el valor de x para el primer vector");
    scanf("%f",&valor_x);
    printf("\nIntroduce el valor de y para el primer vector");
    scanf("%f",&valor_y);
printf("\n===========================================================");
    printf("\nIntroduce el valor de x para el segundo vector");
    scanf("%f",&valor_x2);
    printf("\nIntroduce el valor de y para el segundo vector");
    scanf("%f",&valor_y2);
printf("\n===========================================================");

    if((valor_x>=0)&&(valor_y>=0))
    {
        printf("\nEl primer vector esta en el primer cuadrante");
        magnitug=sqrt(valor_x*valor_x+valor_y*valor_y);
        angulo_rad=(atan(valor_y/valor_x));
        angulo_grados=angulo_rad*((180)/(pi));
    }

    if ((valor_x<0)&&(valor_y>=0))
    {
        printf("\nEl primer vector esta en el segundo cuadrante");
        magnitug=sqrt(valor_x*valor_x+valor_y*valor_y);
        angulo_rad=(atan(valor_y/valor_x))+pi;
        angulo_grados=angulo_rad*((180)/(pi));

    }
    if ((valor_x<0)&&(valor_y<0))
    {
        printf("\nEl primer vector esta en el tercer cuadrante");
        magnitug=sqrt(valor_x*valor_x+valor_y*valor_y);
        angulo_rad=(-atan(valor_y/valor_x)+4.71239);
        angulo_grados=angulo_rad*((180)/(pi));
    }
    if ((valor_x>=0)&&(valor_y<0))
    {
        printf("\nEl primer vector esta en el cuarto cuadrante");
        magnitug=sqrt(valor_x*valor_x+valor_y*valor_y);
        angulo_rad=(atan(valor_y/valor_x)+6.28319);
        angulo_grados=angulo_rad*((180)/(pi));
        }
    printf("\n");

    if((valor_x2>=0)&&(valor_y2>=0))
    {
        printf("\nEl segundo vector esta en el primer cuadrante");
        magnitug2=sqrt(valor_x2*valor_x2+valor_y2*valor_y2);
        angulo_rad2=(atan(valor_y2/valor_x2));
        angulo_grados2=angulo_rad2*((180)/(pi));
    }

    if ((valor_x2<0)&&(valor_y2>=0))
    {
        printf("\nEl segundo vector esta en el segundo cuadrante");
        magnitug2=sqrt(valor_x2*valor_x2+valor_y2*valor_y2);
        angulo_rad2=(atan(valor_y2/valor_x2))+pi;
        angulo_grados2=angulo_rad2*((180)/(pi));

    }
    if ((valor_x2<0)&&(valor_y2<0))
    {
        printf("\nEl segundo vector esta en el tercer cuadrante");
        magnitug2=sqrt(valor_x2*valor_x2+valor_y2*valor_y2);
        angulo_rad2=(-atan(valor_y2/valor_x2)+4.71239);
        angulo_grados2=angulo_rad2*((180)/(pi));
    }
    if ((valor_x2>=0)&&(valor_y2<0))
    {
        printf("\nEl segundo vector esta en el cuarto cuadrante");
        magnitug2=sqrt(valor_x2*valor_x2+valor_y2*valor_y2);
        angulo_rad2=(atan(valor_y2/valor_x2)+6.28319);
        angulo_grados2=angulo_rad2*((180)/(pi));
        }
    printf("\n");
printf("\n===========================================================");
printf("\n===========================================================\n");
printf("\t\tResultado del primer vector: \n");
printf("\n===========================================================");
printf("\n===========================================================\n");
    printf("La magnitud del vector 1 es: ");
    printf("%f\n",magnitug);


printf("\n===========================================================\n");
    printf("El angulo del vector 1 en radianes es: ");
    printf("%f\n",angulo_rad);
    printf("\n");
    printf("El angulo del vector 1 en grados es: ");
    printf("%f\n",angulo_grados);
    printf("\n");
    printf("Su vector unitario del vector 1 es: ");
    printf("[%.2f]/[%f]i, [%.2f]/[%f]j ",valor_x,magnitug,valor_y,magnitug);
    printf("\n");
    printf("\nSu otro vector unitario del vector 1 es: ");
    printf("cos[%f] i +  sen [%f] j",angulo_grados,angulo_grados);


    printf("\n");
    printf("\n");

printf("\n===========================================================");
printf("\n===========================================================\n");
printf("\t\tResultado del segundo vector: \n");
printf("\n===========================================================");
printf("\n===========================================================\n");

    printf("La magnitud del vector 2 es: ");
    printf("%f\n",magnitug2);
printf("\n===========================================================");
    printf("\n");
    printf("El angulo del vector 2 en radianes es: ");
    printf("%f\n",angulo_rad2);
    printf("\n");
    printf("El angulo del vector 2 en grados es: ");
    printf("%f\n",angulo_grados2);
    printf("\n");
    printf("Su vector unitario del vector 2 es: ");
    printf("[%.2f]/[%f]i, [%.2f]/[%f]j ",valor_x2,magnitug2,valor_y2,magnitug2);
    printf("\n");
    printf("\nSu otro vector unitario del vector 2 es: ");
    printf("cos[%f] i +  sen [%f] j",angulo_grados2,angulo_grados2);

printf("\n===========================================================");
printf("\n===========================================================\n");

    productoescalar=(valor_x*valor_x2)+(valor_y*valor_y2);
    printf("\n\nSu producto escalar es: %f",productoescalar);

    anguloentrelos2_rad=acos(productoescalar/(magnitug*magnitug2));

    printf("\n\nEl angulo que hay entre ellos en radianes es: %f",anguloentrelos2_rad);
/*
    if ((anguloentrelos2_rad<=0)&&(anguloentrelos2_rad>=-1))
    {
        printf("\nTus vectores son paralelos\n");
    }
    else
        printf("HOLA");
*/
    anguloentrelos2_grados=anguloentrelos2_rad*(180)/(pi);
    printf("\n\nSu anfulo entre ellos en grados es: %f",anguloentrelos2_grados);

    return 0;
}

/*
    angulo_rad=(atan(valor_y/valor_x));
    printf("El angulo en radianes es: ");
    printf("%f\n",angulo_rad);

    angulo_grados=angulo_rad*((180)/(pi));
    printf("El angulo en grados es: ");
    printf("%f\n",angulo_grados);
*/



