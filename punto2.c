#include <stdio.h>
#include "puntoA.c"
#include "puntoB.c"
#include "puntoC.c"
#include "puntoD.c"
#include "puntoE.c"
#include "puntoF.c"

int main(){
    // punto A
    char* cadenaA = "Esta cadena tiene 31 caracteres";
    int valorA;
    valorA=longitudCadena(cadenaA);
    printf("La longitud de la cadena  son: %d\n",valorA);
    
    //punto B
    char cadenaB [] = "1234";
    int valorB = convertirCadena(cadenaB);
    printf("El numero es: %d\n", valorB);


    //punto C
    char cadenaC[] = "ahora susurro despues grito";
    printf("Cadena original: %s\n", cadenaC);
    pasarAMayusculas(cadenaC);
    printf("Cadena en mayusculas: %s\n", cadenaC);

    //punto D
    char cadenaD[] = "Esta es la cadena sin las a";
    printf("%s\n", cadenaD);
    eliminarCaracter(cadenaD, 'a');
    printf("%s\n", cadenaD);

    //Punto E
    char cadenaE1[50] = "Hola, ";
    char cadenaE2[12] = "Como estas?";

    concatenarCadenas(cadenaE1, cadenaE2);

    printf("Cadena concatenada: %s\n", cadenaE1);

    //Punto F

    char cadenaF[] = "PuntoF";
    char caracterAAgregar = ' ';
    int posicionCaracter= 5;
    printf("Cadena original: %s\n Caracter insertado \" \" , en la poscicion %d\n", cadenaF, posicionCaracter);
    insertarCharEnPos(cadenaF, caracterAAgregar, posicionCaracter);
    return 0;
}