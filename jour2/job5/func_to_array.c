#include <stddef.h> // Pour NULL
#include <stdio.h> // Pour putchar

// Fonction qui applique une autre fonction à chaque chaîne du tableau
void func_to_array(char **strs, void (*fun)(char *)) {
    if (!strs || !fun) return;  // Vérifie que le tableau et la fonction ne sont pas NULL

    int i = 0;
    while (strs[i]) { // Tant qu'on n'atteint pas NULL dans le tableau
        fun(strs[i]); // Applique la fonction à chaque chaîne
        i++;
    }
}

// Fonction qui convertit une chaîne en majuscules (équivalent de strtoupper)
void my_strtoupper(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str -= 32; // Convertit le caractère en majuscule
        }
        str++;
    }
}

// Fonction qui affiche une chaîne de caractères (remplace l'ancien asm)
void my_putstr(char *str) {
    while (*str) {
        putchar(*str); // Affiche chaque caractère
        str++;
    }
    putchar('\n'); // Ajoute un saut de ligne après l'affichage
}