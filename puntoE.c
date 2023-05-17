#include <stdio.h>

int main()
{
    char cadena1[50] = "Este es ";
    char cadena2[] = " el item e";

    concatenarCadenas(cadena1, cadena2);

    printf("Cadena concatenada: %s\n", cadena1);
    return 0;
}

void concatenarCadenas(char *cadena1,const char *cadena2) {
    // Obtener la longitud de la primera cadena
    int longitud1 = 0;
    while (cadena1[longitud1] != '\0') {
        longitud1++;
    }

    // Concatenar la segunda cadena al final de la primera
    int longitud2 = 0;
    while (cadena2[longitud2] != '\0') {
        cadena1[longitud1 + longitud2] = cadena2[longitud2];
        longitud2++;
    }

    // Agregar el carácter nulo al final de la cadena concatenada
    cadena1[longitud1 + longitud2] = '\0';

    return;
}   

