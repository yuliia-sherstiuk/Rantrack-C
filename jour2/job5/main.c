#include <stdio.h>

// Déclarations des fonctions
void func_to_array(char **strs, void (*fun)(char *));
void my_strtoupper(char *str);
void my_putstr(char *str);

int main() {
    char *words[] = {"bonjour", "monde", "test", NULL}; // Tableau de chaînes

    printf("Avant la transformation :\n");
    func_to_array(words, my_putstr); // Affiche les mots avant modification

    func_to_array(words, my_strtoupper); // Convertit les lettres en majuscules

    printf("\nAprès la transformation :\n");
    func_to_array(words, my_putstr); // Affiche les mots après modification

    return 0;
}