#include <stdlib.h>
#include <stdio.h>

int main()
{
	FILE *aarchivo;
	char linea[100];
	aarchivo = fopen("ids.txt", "r");
	if(aarchivo == NULL)
	{
		printf("Error al abrir el archivo");
		return(1);
	}
	while( fgets ( linea, 10, aarchivo ) != NULL )
    {
        fscanf(aarchivo,"%s",linea);
        printf("0%s @ulsaoaxaca.edu.mx\n", linea);
    }

	fclose(aarchivo);
}
