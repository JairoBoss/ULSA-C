#include <stdio.h>

typedef struct persona
{
	unsigned long int id_persona;
	char nombre[100];
	char sexo;
	char direccion[100], religion[50], escolaridad[20];
	unsigned short int edad;
} Persona;
int main()
{
      printf("=================================================================\n");
          printf("=================================================================\n");
    printf("d8888b. d88888b d8888b. .d8888.  .d88b.  d8b   db  .d8b.\n");
    printf("88  `8D 88'     88  `8D 88'  YP .8P  Y8. 888o  88 d8' `8b\n");
    printf("88oodD' 88ooooo 88oobY' `8bo.   88    88 88V8o 88 88ooo88\n");
    printf("88~~~   88~~~~~ 88`8b     `Y8b. 88    88 88 V8o88 88~~~88 \n");
    printf("88      88.     88 `88. db   8D `8b  d8' 88  V888 88   88\n");
    printf("88      Y88888P 88   YD `8888Y'  `Y88P'  VP   V8P YP   YP \n");
    printf("=================================================================\n");
        printf("=================================================================\n");
    printf("\n");








    Persona struct_pers[10];
		Persona una_persona;
    FILE *aarchivo;
    int cont=0;
    do {
    printf("Persona numero [%d]\n",cont);
    printf("Introduce el nombre completo de la persona:\n");
    fgets(struct_pers[cont].nombre, 99,stdin);
    fflush(stdin);
    printf("Introduce el sexo  de la persona:\n");
    struct_pers[cont].sexo = getc(stdin);
    fflush(stdin);
    printf("Introduce la direccion de la persona:\n");
    fgets(struct_pers[cont].direccion, 99,stdin);
    fflush(stdin);
    printf("Introduce la religion de la persona\n");
    fgets(struct_pers[cont].religion, 49,stdin);
    fflush(stdin);
    printf("Introduce la escolaridad de la persona:\n");
    fgets(struct_pers[cont].escolaridad, 19,stdin);
    fflush(stdin);
    printf("Introduce la edad de la persona:\n");
    scanf("%hu", &struct_pers[cont].edad);
    fflush(stdin);
    cont++;
  } while(cont<2);
  aarchivo = fopen("miarchivo.bin", "w");
  if(aarchivo == NULL)
  {
      printf("Error al abrir archivo.\n");
      return(1);
  }

  fwrite(struct_pers, sizeof(Persona), 10, aarchivo);

  fclose(aarchivo);
  return 0;
}
