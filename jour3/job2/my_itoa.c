#include <stdlib.h>  //  malloc
#include "my_itoa.h" 

// Fonction qui convertit un entier en chaîne de caractères
char *my_itoa(int n) {
    int len = 0, temp = n;
    int is_negative = 0;

    if (n < 0) {
        is_negative = 1;
        temp = -n;
    }
//longeur
    do {
        temp /= 10;
        len++;
    } while (temp != 0);

    len += is_negative;  //pour -

    //  выделяем память (+1 )
    char *str = (char *)malloc((len + 1) * sizeof(char));
    if (!str) return NULL; 

    str[len] = '\0';  
    // droit-> gauche
    temp = (n < 0) ? -n : n;  
    while (len > is_negative) {
        str[--len] = (temp % 10) + '0';  
        temp /= 10;
    }

    
    if (is_negative) {
        str[0] = '-';
    }

    return str;
}