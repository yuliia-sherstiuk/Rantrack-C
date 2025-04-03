#include <stdlib.h>  // Pour malloc
#include <stddef.h>  // Pour NULL

char *my_strdup(const char *src) {
    if (!src) {
        return NULL; 
    }

    int len = 0;
    while (src[len]) {  // Calcul de la longueur de la chaîne
        len++;
    }

    char *copy = (char *)malloc(len + 1);  // Allocation mémoire (+1 pour '\0')
    if (!copy) {
        return NULL;  
    }

    for (int i = 0; i <= len; i++) {  // Copie de la chaîne (y compris '\0')
        copy[i] = src[i];
    }

    return copy;  
}