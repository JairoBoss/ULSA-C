#include <stdio.h>

int factorial(int n)
{
    if (n==0)
      return 1;
    else
      return (n * factorial(n-1));
}


int main()
{
  int numero;

  printf("\t\tIntroduzca el numero que desea hacer factorial\n" );
  scanf("%d",&numero );
  printf("\n\t\t
         %d\n",factorial(numero) );

  return 0;
}
