#include <stdio.h>

//f) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada.

int longitudDeCadena (char* cadena);
void insertarCharEnPos(char *str, char caracter, int pos);

// Use la logica del ejercicio 1, estaria bueno meter todos los ejercicios en un "biblioteca"

 int longitudDeCadena (char* cadena) 
 {
    int contador=0;
    while(cadena[contador]!='\0'){
        contador++;
    }
    return contador;
}

// como no tengo acceso a stdlib.h, no puedo reservar memoria para el array con mayor tamaño
// por lo tanto me quede que sin efecto en esta funcion, por lo mismo imprimo la cadena dentro de la misma

void insertarCharEnPos(char *cadena, char caracter, int pos)
{
    int longAux = longitudDeCadena(cadena)+1;
    printf(" %d \n", longAux);
    char aux[longAux];

    for (int i = 0; i <= longAux; i++)
    {
        *(aux+i) = i < pos? *(cadena+i) : i == pos? caracter : *(cadena+i-1);
    }
        
    printf("Cadena con un espacio insertado en la poscicion 5: %s\n", aux);
}
