#include <stdlib.h>

//obtenir la longueur 
int hex_length(int n)
{
    int len = 0;
    if (n == 0)
        return 1;
    while (n > 0)
    {
        len++;
        n = n / 16;
    }
    return len;
}

// Fonction principale
char *itoa_hex(int n)
{
    char *hex_digits = "0123456789ABCDEF";
    int len = hex_length(n);
    char *result = malloc(sizeof(char) * (len + 1)); 

    if (!result)
        return NULL;

    result[len] = '\0'; 

    if (n == 0)
    {
        result[0] = '0';
        return result;
    }

    while (len > 0)
    {
        result[len - 1] = hex_digits[n % 16];
        n = n / 16;
        len--;
    }

    return result;
}
