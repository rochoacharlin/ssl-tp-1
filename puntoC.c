#include <stdio.h>

// c. Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula.

void pasarAMayusculas(char *str);

int main()
{
    char cadena[] = "Hola mundo!";
    printf("Cadena original: %s\n", cadena);
    pasarAMayusculas(cadena);
    printf("Cadena en mayusculas: %s\n", cadena);

    return 0;
}

void pasarAMayusculas(char *cadena)
{
    for (char *aux = cadena; *aux != '\0'; aux++)
    {
        if (*aux >= 'a' && *aux <= 'z')
        {
            *aux = *aux - ('a' - 'A');
        }
    }
}