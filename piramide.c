#include <stdio.h>
#define PI 3.1416
float volumenDePiramide(float area, float altura);
int main() {

  float area, altura;
  	printf("\n");
    printf("db    db  .d88b.  db      db    db .88b  d88. d88888b d8b   db \n");
    printf("88    88 .8P  Y8. 88      88    88 88'YbdP`88 88'     888o  88 \n");
    printf("Y8    8P 88    88 88      88    88 88  88  88 88ooooo 88V8o 88 \n");
    printf("`8b  d8' 88    88 88      88    88 88  88  88 88~~~~~ 88 V8o88 \n");
    printf(" `8bd8'  `8b  d8' 88booo. 88b  d88 88  88  88 88.     88  V888 \n");
    printf("   YP     `Y88P'  Y88888P ~Y8888P' YP  YP  YP Y88888P VP   V8P \n");
    printf("\n");
    printf("Area de la base:\n");
    scanf("%f", &area);
    printf("la altura:\n");
    scanf("%f", &altura);
  printf("Volumen de la piramide es: %f",volumenDePiramide(area, altura));
}

float volumenDePiramide(float area, float altura) {
  return (area*altura)/3;
}
