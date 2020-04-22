#include <stdio.h>
#define PI 3.1416
float volumenDeEsfera(float radio);
int main()
{

	 float radio;
	printf("\n");
    printf("db    db  .d88b.  db      db    db .88b  d88. d88888b d8b   db \n");
    printf("88    88 .8P  Y8. 88      88    88 88'YbdP`88 88'     888o  88 \n");
    printf("Y8    8P 88    88 88      88    88 88  88  88 88ooooo 88V8o 88 \n");
    printf("`8b  d8' 88    88 88      88    88 88  88  88 88~~~~~ 88 V8o88 \n");
    printf(" `8bd8'  `8b  d8' 88booo. 88b  d88 88  88  88 88.     88  V888 \n");
    printf("   YP     `Y88P'  Y88888P ~Y8888P' YP  YP  YP Y88888P VP   V8P \n");
    printf("\n");
    printf("Radio de la esfera:\n");
    scanf("%f", &radio);
    printf("Volumen dela esfera es: %f",volumenDeEsfera(radio));
}

float volumenDeEsfera(float radio) {
  return (4 * (PI * radio*radio*radio)) / 3;
}
