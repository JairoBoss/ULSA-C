#include <stdio.h>
int main()
{
  int i,j;
  char cadena[100];
    printf("\nIngresa la palabra qiue vamos a voltear\n");
  for (i=0;(cadena[i]=getchar())!='\n';i++); //aqui pedimos la palabra, mientras condicion sea diferente al caracter enter o espacio le sumamos una pocision xd
      printf("\nLa palabra volteada es: \n");
  for (j=i;j>=0;j--){ //a J le asignamos i y mientras j sea menor o igual a 0 (como la cadena empieza en 0 por eso ponemos que sea mayor o igual a 0), le restamos uno para que vaya recorriendose caracter por caracter
    printf("%c",cadena[j]);} // aqui imprimimos la pocision en la que este J
}
