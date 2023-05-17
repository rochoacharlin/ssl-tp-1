#include <stdio.h>

void concatenarCadenas(char *cadena1, char *cadena2);



void concatenarCadenas(char *cadena1, char *cadena2) {
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

