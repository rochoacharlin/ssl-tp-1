#include <stdio.h>
#include <stdlib.h>

int longitudCadena(char* cadena);

int longitudCadena(char* cadena){
    int contador=0;
    while(cadena[contador]!='\0'){
        contador++;
    }
    return contador;
}
