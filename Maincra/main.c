#include <stdio.h>


int main() {
  int aguante, num_filas, diamantes[1000], acumulado=0;
  int suma1[600];
  scanf("%d",&num_filas );
  printf("Ingrese los diamantes en cada fila");
  for (int i = 0; i < num_filas; i++)
  {
    scanf("%d",&diamantes[i] );
  }
  printf("Ingrese el aguante del pico");
  scanf("%d",&aguante );

  for (size_t i = 0; i < 600; i++)
  {
    suma1[i]=0;
  }
  for (size_t i = 0; i < num_filas; i++)
  {
    for (int j = 0; j < aguante; j++)
    {
      suma1[i]=suma1[i]+diamantes[j+i];
    }

  }
  for (size_t i = 0; i < 600; i++)
  {
      if (suma1[i]>suma1[i+1]&&acumulado<suma1[i+1]) {
        acumulado=suma1[i];
      }
  }


  printf("\n\n%d\n\n",acumulado );
}
