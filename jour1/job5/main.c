#include <stdio.h>
#include "my_strdup.c"

int main() {
    char *original = "Hello, world!";
    char *copy = my_strdup(original);

    if (copy) {
        printf("Copie : %s\n", copy);
        free(copy);  // Libération de la mémoire
    } else {
        printf("Erreur d'allocation mémoire\n");
    }

    return 0;
}
