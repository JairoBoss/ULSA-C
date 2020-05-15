#include <stdio.h>

typedef struct persona
{
	unsigned long int id_persona;
	char nombre[100];
	char sexo;
	char direccion[100], religion[50], escolaridad[20];
	unsigned short int edad;
	// unsigned long int id_persona;
		// char sexo;
	// char nombre[100];
	// char direccion[100], religion[50], escolaridad[20];
	// unsigned short int edad;
} Persona;
Persona array_de_personas[10];
// Leer 
// fread(&array_de_personas, sizeof(Persona), 10, aarchivo);
// 
//             for(int i=0; i<10;i++)
//             {
//                 printf("%d\n\n", array_de_personas[i].id_persona);
//                 printf("%s\n", array_de_personas[i].nombre);
//                 printf("%c\n\n", array_de_personas[i].sexo);
//                 printf("%s\n", array_de_personas[i].direccion);
//                 printf("%s\n", array_de_personas[i].religion);
//                 printf("%s\n", array_de_personas[i].escolaridad);
//                 printf("%d\n\n\n\n\n", array_de_personas[i].edad);
//             }

int main() {
	// do {
  //   printf("\t\t====================================================\n" );
  //   printf("\t\t====================================================\n\n" );
	// 
  //   printf("\t\t\t.88b  d88. d88888b d8b   db db    db \n" );
  //   printf("\t\t\t88'YbdP`88 88'     888o  88 88    88\n" );
  //   printf("\t\t\t88  88  88 88ooooo 88V8o 88 88    88 \n" );
  //   printf("\t\t\t88  88  88 88~~~~~ 88 V8o88 88    88\n" );
  //   printf("\t\t\t88  88  88 88.     88  V888 88b  d88 \n" );
  //   printf("\t\t\tYP  YP  YP Y88888P VP   V8P ~Y8888P' \n" );
  //   printf("\n\t\t====================================================\n" );
  //   printf("\t\t\tBienvenido al menu\n" );
  //   printf("\t\t====================================================\n\n" );
  //   printf("\t\t\t[1]Cargar datos del archivo\n" );
  //   printf("\t\t\t[2]Modificar los datos de una persona\n" );
  //   printf("\t\t\t[3]Mostrar la lista de las personas\n" );
  //   printf("\t\t\t[4]Guardar los datos en el archivo\n" );
  //   printf("\t\t\t[5]Salir\n");
  //   printf("\t\t====================================================\n\n" );
  //   printf("\t\t\t");
  //   scanf("%d",&menu );
  //   switch (menu) {
  //     case 1:
  //     printf("En esta parte del menu se cargara o creara (en caso de que el archivo no funcione) el archivo a utilizar.\n");
  //     printf("\n" );
  //     break;
  //     case 2:
  //     printf("En esta parte se podra agregar y modificar a las personas en el archivo.\n" );
  //     printf("\n" );
  //     break;
  //     case 3:
  //     printf("Se mostrara en la pantalla la lista de personas que contenga el archivo.\n" );
  //     printf("\n" );
	FILE *miaarchivo;
	int menu,per_m,p;
	char d;
	//int ans;
	do {
		// fflush(stdin);

		
		printf("\t\t=========================================================================\n" );
		printf("\t\t=========================================================================\n\n" );
		printf("\t\t\td8888b. d88888b d8888b. .d8888.  .d88b.  d8b   db  .d8b. \n");
		printf("\t\t\t88  `8D 88'     88  `8D 88'  YP .8P  Y8. 888o  88 d8' `8b\n");
		printf("\t\t\t88oodD' 88ooooo 88oobY' `8bo.   88    88 88V8o 88 88ooo88\n");
		printf("\t\t\t88~~~   88~~~~~ 88`8b     `Y8b. 88    88 88 V8o88 88~~~88\n");
		printf("\t\t\t88      88.     88 `88. db   8D `8b  d8' 88  V888 88   88\n");
		printf("\t\t\t88      Y88888P 88   YD `8888Y'  `Y88P'  VP   V8P YP   YP\n");
		printf("\n\t\t=========================================================================\n" );
		printf("\t\t\tBienvenido al menu, Seleciona una opcion\n" );
		printf("\t\t=========================================================================\n\n" );
	printf("\t\t\t[1]Cargar datos del archivo\n" );
	printf("\t\t\t[2]Modificar los datos de una persona\n" );
	printf("\t\t\t[3]Mostrar la lista de las personas\n" );
	printf("\t\t\t[4]Guardar los datos en el archivo\n" );
	printf("\t\t\t[5]Salir\n");
	// case 4:
	// printf("Se borrara el contenido del archivo y se le agregara nueva informacion.\n" );
	// printf("\n" );
	// break;
	// default:
	// printf("Selecciona una opcion valida =)\n" );
	// printf("\n" );
	// break;
	printf("\t\t=========================================================================\n\n" );
	printf("\t\t\t");



	scanf("%d",&menu );
	switch (menu) {
		case 1:
		printf("\t\t\t" );
		printf("En esta parte del menu se cargara o creara el archivo a utilizar.\n");
		printf("\n" );
		miaarchivo = fopen("miarchivo.bin", "rb");
		if(miaarchivo == NULL){
			printf("\t\t\t" );
	printf("Error #404 Not Found\n");

		}
		else{
				fread(array_de_personas, sizeof(Persona),10,miaarchivo);
				printf("\n\t\t\t" );

				printf("La opcion [1] ha sido ejecutada exitosamente\n");
				fclose(miaarchivo);
		}
		break;
		case 2:
				 if(array_de_personas[0].id_persona != 1)
				 				 {
					 int numewro=0;
					 printf("\t\t\t" );
					 printf("Tu lista esta vacia, vamos a rellenarla =)\n");
						do{
														for(int i = 0; i < 2; i++)
														{
																		numewro=1;
																		array_de_personas[i].id_persona = i+1;
																		printf("\t\t\t" );
																		printf("Esta es la persona [#%d]\n",array_de_personas[i].id_persona );
																		while ((d = getc(stdin)) != '\n' && d != EOF);
																		printf("\t\t\t" );
																		printf("Introduzca su nombre completo:\n");
																		printf("\t\t\t" );
																		fgets(array_de_personas[i].nombre, 99,stdin);
																		while ((d = getc(stdin)) != '\n' && d != EOF);
																		// fflush(stdin);
																		printf("\t\t\t" );
																		printf("Introduzca el sexo de la persona [H/M]:\n");
																		printf("\t\t\t" );
																		array_de_personas[i].sexo = getc(stdin);
																		while ((d = getc(stdin)) != '\n' && d != EOF); //Esta linea hace flush a la entrada
																		printf("\t\t\t" );
																		printf("Introduzca la direccion:\n");
																		printf("\t\t\t" );
																		fgets(array_de_personas[i].direccion, 99,stdin);
																		printf("\t\t\t" );
																		printf("Introduzca la religion:\n");
																		printf("\t\t\t" );
																		fgets(array_de_personas[i].religion, 49,stdin);
																		printf("\t\t\t" );
																		printf("Introduzca la escolaridad:\n");
																		printf("\t\t\t" );
																		fgets(array_de_personas[i].escolaridad, 19,stdin);
																		printf("\t\t\t" );
																		printf("Introduzca la edad:\n");
																		printf("\t\t\t" );
																		scanf("%hu", &array_de_personas[i].edad);
																		while ((d = getc(stdin)) != '\n' && d != EOF); //Esta linea hace flush a la entrada
																		numewro++;
														}
														printf("\t\t\t" );
														printf("Tus personas ya han sido agregadas =)\n" );
									}while(numewro==3);
				}
				else{
						printf("Cual es el ID de la persona a modificar?");
						scanf("%d", &per_m);
						printf("%d\n",per_m );
						while((d = getc(stdin)) != '\n' && d != EOF);
						per_m=per_m-1;

								        // printf("Escriba el nuevo ID: ");
								        // scanf("%d", &array_de_personas[per_m].id_persona);
												// while((d = getc(stdin)) != '\n' && d != EOF);

												printf("\t\t\t" );
								        printf("Escriba el nuevo nombre: ");

												fgets(array_de_personas[per_m].nombre, 99,stdin);
												while((d = getc(stdin)) != '\n' && d != EOF);

												printf("\t\t\t" );
								        printf("Escriba el nuevo sexo: ");
								        scanf("%c", &array_de_personas[per_m].sexo);

												while((d = getc(stdin)) != '\n' && d != EOF);

												printf("\t\t\t" );
								        printf("Escriba la nueva direccion: ");

								        fgets(array_de_personas[per_m].direccion,99,stdin);
												while((d = getc(stdin)) != '\n' && d != EOF);

												printf("\t\t\t" );
								        printf("Escriba la nueva religion: ");
								        fgets(array_de_personas[per_m].religion,49,stdin);
												while((d = getc(stdin)) != '\n' && d != EOF);

												printf("\t\t\t" );
								        printf("Escriba la nueva escolaridad: ");
								        gets(array_de_personas[per_m].escolaridad);
												while((d = getc(stdin)) != '\n' && d != EOF);

												printf("\t\t\t" );
								        printf("Escriba la nueva edad: ");
								        scanf("%hu", &array_de_personas[per_m].edad);
								        while((d = getc(stdin)) != '\n' && d != EOF);

												printf("\t\t\t" );
								        printf("La persona se ha modificado con exito =)\n");
								    }
										printf("\t\t\t" );
										printf("La opcion [2] ha sido ejecutada exitosamente\n" );

				break;

		case 3:
		printf("\t\t\t" );
		printf("Se mostrara en la pantalla la lista de personas que contenga el archivo.\n" );
		printf("\n" );
		if(array_de_personas[0].id_persona != 1){
			printf("\t\t\t" );
				printf("Erro #404 Not Found\n");
		}
		else{
			printf("\t\t\t" );
				printf("Estas son las personas que hay: \n");
				for(int i = 0; i < 10; i++){
					printf("\t\t\t" );
						printf("El ID de la persona es: %d",array_de_personas[i].id_persona);
						printf("\n\t\t\t" );
						printf("El Nombre de la persona es: %s",array_de_personas[i].nombre);
						printf("\n\t\t\t" );
						printf("El Sexo de la persona es: %c",array_de_personas[i].sexo);
						printf("\n\t\t\t" );
						printf("La Direccion de la persona es: %s",array_de_personas[i].direccion);
						printf("\n\t\t\t" );
						printf("La Religion de la persona es: %s",array_de_personas[i].religion);
						printf("\n\t\t\t" );
						printf("La Escolaridad de la persona es: %s",array_de_personas[i].escolaridad);
						printf("\n\t\t\t" );
						printf("La Edad de la persona es: %d",array_de_personas[i].edad);
						printf("\n\t\t\t" );
				}
				//printf("\t\t\t" );
				printf("La opcion [3] ha sido ejecutada exitosamente\n");
		}


		break;

		case 4:
		printf("\n\t\t\t" );
		printf("Se borrara el contenido del archivo y se le agregara nueva informacion.\n" );
		printf("\n" );
		miaarchivo = fopen("miarchivo.bin", "wb");
		fwrite(array_de_personas, sizeof(Persona), 10, miaarchivo);
		printf("\n\t\t\t" );
		printf("La opcion [4] se ejecuto exitosamente\n");

		break;
		case 5:
		printf("\n\t\t\t" );
		printf("Adios\n" );
		break;
		default:
		printf("\n\t\t\t" );
		printf("Selecciona una opcion valida =)\n" );
		printf("\n" );
		break;
	}
} while(menu!=5);

	return 0;
}

