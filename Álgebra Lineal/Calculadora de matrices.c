#include <stdio.h>
#include <stdlib.h>
void suma ()
{
    printf("\nEstas en la suma de Matrices");
    int m, n, c, d, primera[10][10], segunda[10][10], suma[10][10];

   printf("\nMete las filas de la matriz: ");
   scanf("%d", &m);
   printf("Mete las columnas de la matriz:");
   scanf("%d",&n);

   printf("Mete los valores de la primera matriz\n");

   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &primera[c][d]);

   printf("Mete los valores de la segunda matriz\n");

   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &segunda[c][d]);

   printf("La suma de las matrices es:\n");

   for (c = 0; c < m; c++)
    {
      for (d = 0 ; d < n; d++)
      {
         suma[c][d] = primera[c][d] + segunda[c][d];
         printf("%d\t", suma[c][d]);
      }
      printf("\n");
   }

}
void resta()
{
     int m, n, c, d, primera[10][10], segunda[10][10], resta[10][10];
    printf("\nEstas en la resta de Matrices");
    printf("\nMete las filas de la matriz: ");
    scanf("%d", &m);
    printf("Mete las columnas de la matriz:");
    scanf("%d",&n);

    printf("Mete los valores de la primera matriz\n");
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++) scanf("%d", & primera[c][d]);
    printf("Mete los valores de la segunda matriz\n");;
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++) scanf("%d", & segunda[c][d]);
    printf("La resta de las matrices es:\n");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            resta[c][d] = primera[c][d] - segunda[c][d];
            printf("%d\t", resta[c][d]);
        }
        printf("\n");
    }
}

void multiplicar()
{
     int m, n, p, q, c, d, k, sum = 0;
  int primera[10][10], segunda[10][10], multiplicacion[10][10];
printf("\nEstas en la multiplicacion de Matrices");
  printf("\nMete las filas de la primera matriz: ");
    scanf("%d", &m);
    printf("Mete las columnas de la primera matriz:");
    scanf("%d",&n);

  printf("Mete los valores de la primera matriz\n");

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &primera[c][d]);

    printf("\nMete las filas de la segunda matriz: ");
    scanf("%d", &p);
    printf("Mete las columnas de la segunda matriz:");
    scanf("%d",&q);


  if (n != p)
    printf("Error #404\nLa multiplicacion no se puede hacer :(\n");
  else
  {
    printf("Mete los valores de la segunda matriz\n");

    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &segunda[c][d]);

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + primera[c][k]*segunda[k][d];
        }

        multiplicacion[c][d] = sum;
        sum = 0;
      }
    }

    printf("El producto de las matrices es:\n");

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiplicacion[c][d]);

      printf("\n");
    }
  }

}

void mulescalar()
{
    int i, j, filas, columnas, Multiplicacion[10][10], numero;
    printf("\nEstas en la multiplicacion de una matrizpor un escalar");
    printf("\nMete las filas de la matriz: ");
    scanf("%d", &i);
    printf("\nMete las columnas de la matriz:");
    scanf("%d",&j);

 	printf("\n Introduce los valores de las matriz \n");
 	for(filas = 0; filas < i; filas++)
  	{
   		for(columnas = 0;columnas < j;columnas++)
    	{
      		scanf("%d", &Multiplicacion[filas][columnas]);
    	}
  	}

 	printf("\n Mete el numero escalar :  ");
 	scanf("%d", &numero);

 	for(filas = 0; filas < i; filas++)
  	{
   		for(columnas = 0; columnas < j; columnas++)
    	{
      		Multiplicacion[filas][columnas] = numero * Multiplicacion[filas][columnas];
   	 	}
  	}

 	printf("\n El resultado de la matriz por el escalar es: \n");
 	for(filas = 0; filas < i; filas++)
  	{
   		for(columnas = 0; columnas < j; columnas++)
    	{
      		printf("%d \t ", Multiplicacion[filas][columnas]);
    	}
    	printf("\n");
  	}
}

void determinantes()
{

  int a[3][3], i, j;

  long determinante;
    printf("\nEstas en la determinantes de la matriz 3x3\n");
    printf("Introduce los datos de la matriz: ");
  for(i = 0 ;i < 3;i++)
      for(j = 0;j < 3;j++)
           scanf("%d", &a[i][j]);

  printf("\nLa matriz es:\n");
  for(i = 0;i < 3; i++){
      printf("\n");
      for(j = 0;j < 3; j++)
           printf("%d\t", a[i][j]);
  }

  determinante = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);

  printf("\n\nLa determinante de la matriz es: %ld\n\n", determinante);

}
int main()
{
    int opcion;
printf("\n===========================================================");
printf("\n===========================================================\n");
    printf("Bienvenido a la calculadora de matrices:\n");
printf("===========================================================");
printf("\n===========================================================");
    printf("\nEscoge una opcion:\n");
    printf("[1]Suma de matrices\n");
    printf("[2]Resta de matrices\n");
    printf("[3]Multiplicacion de matrices\n");
    printf("[4]Multiplicacion de una matriz por un escalar\n");
    printf("[5]Determinantes de una matriz 3x3\n");
    scanf("%d",&opcion);
printf("===========================================================");
    switch (opcion)
    {
    case 1:
        suma();
    break;

    case 2:
        resta ();
    break;

    case 3:
        multiplicar();
    break;

    case 4:
        mulescalar();
    break;
    case 5:
        determinantes();
    break;
    default:
        printf("\nError #404\nOpcion no valida");
    break;

    }
printf("\n===========================================================");
printf("\n===========================================================");
    return 0;
}
