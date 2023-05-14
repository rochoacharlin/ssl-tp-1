#include <stdio.h>
#include <stdlib.h>

void contarPalabras (char* cadena);

int main(int argc, char *argv[]) {
    char* cadena = "Hola mundo!";
    contarPalabras(cadena);
    return 0;
}

void contarPalabras (char* cadena){
    int contador=0;
    while(cadena[contador]!='\0'){
        contador++;
    }
    printf("La longitud de '%s' es %d\n",cadena,contador);
}
