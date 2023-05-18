// f. Modificar la cadena dada con la inserción de un carácter dado en una posición determinada.
#include <stdio.h>

int longitudString(char* cadena)
{
    int contador=0;
    while(cadena[contador]!='\0')
    {
        contador++;
    }
    return contador;
}

void insertarCharEnPos(char *cadena, char caracter, int pos)
{
    int longAux = longitudString(cadena)+1;
    char aux[longAux];

    for (int i = 0; i <= longAux; i++)
    {
        *(aux+i) = i < pos? *(cadena+i) : i == pos? caracter : *(cadena+i-1);
    }
    printf("Cadena con un el caracter '%c' insertado en la posicion %d: %s\n\n", caracter, pos, aux);
}