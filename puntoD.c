// 1d. Eliminar de una cadena dada todas las ocurrencias de un carácter dado.
#include <stdio.h>

void eliminarCaracter(char cadena[], char caracter);


void eliminarCaracter(char cadena[], char caracter){
    int i=0, j=0;

    while(cadena[i]!='\0'){
        if(cadena[i]!=caracter){
            cadena[j] = cadena[i];
            j++;
        }

        i++;
    }

    cadena[j] = '\0';
}