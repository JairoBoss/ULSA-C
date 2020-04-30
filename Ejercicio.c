#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *trim(char *str)
{
    size_t len = 0;
    char *frontp = str;
    char *endp = NULL;

    if( str == NULL ) { return NULL; }
    if( str[0] == '\0' ) { return str; }

    len = strlen(str);
    endp = str + len;


    while( isspace((unsigned char) *frontp) ) { ++frontp; }
    if( endp != frontp )
    {
        while( isspace((unsigned char) *(--endp)) && endp != frontp ) {}
    }

    if( frontp != str && endp == frontp )
            *str = '\0';
    else if( str + len - 1 != endp )
            *(endp + 1) = '\0';


    endp = str;
    if( frontp != str )
    {
            while( *frontp ) { *endp++ = *frontp++; }
            *endp = '\0';
    }

    return str;
}

int main(int argc, char const *argv[])
{
    FILE *aarchivo;
    char linea[10];

    aarchivo = fopen("ids.txt", "r");
    if(aarchivo == NULL)
    {
        printf("Error al abrir archivo.\n");
        return(1);
    }

    printf("Estas son las direcciones de correo de los alumnos de la clase:\n");
    while( fgets( linea, 10, aarchivo ) != NULL )
    {

        trim(linea);

        if(strlen(linea) > 0)
            printf("0%s@ulsaoaxaca.edu.mx\n" , linea) ;
    }
    fclose(aarchivo);
}
