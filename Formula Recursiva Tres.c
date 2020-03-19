#include <stdio.h>

int formula(int n)
{
    int operacion;
    if (n<6)
    return 1;
    else
    {
        operacion= formula(n-2)*5;
        printf("\n%d\n",operacion);
    }
    return;
}



int main() {
  int num;

  printf("\t\tIntroduzca el numero:   \n" );
  scanf("%d",&num );
  printf("\n%d\n",formula(num));

  return 0;
}
