#include <stdio.h>

struct estructura_persona {
	char nombre[100];
	char direccion[100];
	char religion[50];
	char sexo;
	int edad;
	int id;
	char escolaridad [100];
	};

struct estructura_persona persona;

main()
{
	printf( "Escribe el nombre de la persona: " );
	fgets(persona.nombre, 100, stdin);

	printf( "Escribe el direccion del persona: " );
    fgets(persona.direccion, 100, stdin);

	printf( "Escribe la escolaridad de la persona: " );
    fgets(persona.escolaridad, 100, stdin);

	printf( "Escribe el religion del persona: " );
    fgets(persona.religion, 50, stdin);

	printf( "Escribe el sexo de la persona: " );
    fgets(persona.sexo, 10, stdin);

	printf( "Escribe la edad de la persona: " );
	scanf( "%d", &persona.edad );

	printf( "Escribe el ID de la persona: " );
    scanf("%d",&persona.id);

    printf("\n\nEl nombre de la persona es %s\n\n",persona.nombre);
    printf("La direccion de la persona es: %s\n\n",persona.direccion);
    printf("La escolaridad de la persona es: %s\n\n",persona.escolaridad);
    printf("La religion de la persona es: %s\n\n",persona.religion);
    printf("El sexo de la persona es: %s\n\n",persona.sexo);
    printf("La edad de la persona es: %d\n\n",persona.edad);
    printf("La id de la persona es: %d\n\n",persona.id);


	}
