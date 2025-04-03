#include <stdio.h>


char **sort(char **strs);

int main() {
    char *words[] = {"banana", "apple", "cherry", "date", NULL}; 
    int i = 0;

    printf("Avant de sort:\n");
    while (words[i]) {
        printf("%s\n", words[i]);
        i++;
    }

    sort(words); 

    printf("\nAprès le tri\n");
    i = 0;
    while (words[i]) {
        printf("%s\n", words[i]);
        i++;
    }

    return 0;
}
