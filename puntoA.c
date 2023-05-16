#include <stdio.h>
#include <stdlib.h>

int longitudCadena(char* cadena);

int main(int argc, char *argv[]) {
    char* cadena = "Prueba del codigo!";
    int valor;
    valor=longitudCadena(cadena);
    printf("La longitud de la cadena  son: %d\n",valor);
    return 0;
}

int longitudCadena(char* cadena){
    int contador=0;
    while(cadena[contador]!='\0'){
        contador++;
    }
    return contador;
}
