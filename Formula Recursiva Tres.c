#include <stdio.h>

int recursiva3(int n){
    int operacion;
    if (n<=5)
      return 1;
    else
    {
       operacion=recursiva3(n-2)*5; //aquí se hace el factorial siguiendo la fórmula

    }
    printf("\n%d\n",operacion);//aqui imprime los valores
       return operacion;//imprime el ultimo valor

}



int main() {
  int valor;//valor a ingresar

  printf("Introduzca el numero que desea hacer factorial\n" );
  scanf("%d",&valor );//se escanea el valor
  printf("\n1\n");
  printf("\n%d\n",recursiva3(valor) );//imprimimos todos los valores

  return 0;
}
