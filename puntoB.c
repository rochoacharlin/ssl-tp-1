#include <stdio.h>

// b. Convertir una cadena de dígitos en su equivalente numérico

int convertirCadena(char str[]);

int main() {
    char cadena1[] = "1234";
    int num1 = convertirCadena(cadena1);
    printf("El numero es: %d\n", num1);

    char cadena2[] = "-5678";
    int num2 = convertirCadena(cadena2);
    printf("El numero es: %d\n", num2);
    
    return 0;
}

int convertirCadena(char str[])
{
    int num = 0;
    int signo = 1;
    int i = 0;
    
    if (str[i] == '-')
    {
        signo = -1;
        str++;
    }

    while (str[i] != '\0')
    {
        num = num * 10 + (str[i] - '0'); 
        i++;
    }

    return num * signo;
}