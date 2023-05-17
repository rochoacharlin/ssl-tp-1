#include <stdio.h>

// b. Convertir una cadena de dígitos en su equivalente numérico

int convertirCadena(char str[]);



int convertirCadena(char str[])
{
    int num = 0;
    int signo = 1;
    int i = 0;
    
    if (str[i] == '-')
    {
        signo = -1;
        i++;
    }

    while (str[i] != '\0')
    {
        num = num * 10 + (str[i] - '0'); 
        i++;
    }

    return num * signo;
}