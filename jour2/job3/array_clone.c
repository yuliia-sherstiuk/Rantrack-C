#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **array_clone(char *arr[], int n) {
    int i;
    for (i = 0; i < n && arr[i] != NULL; i++); 

    char **clone = malloc((i + 1) * sizeof(char *));
    if (!clone) return NULL;

    for (int j = 0; j < i; j++) {
        clone[j] = malloc(strlen(arr[j]) + 1); 
        if (!clone[j]) {
            for (int k = 0; k < j; k++) free(clone[k]); 
            free(clone);
            return NULL;
        }
        strcpy(clone[j], arr[j]); 
    }
    
    clone[i] = NULL;
    return clone;
}

int main() {
    char *words[] = {"Hello", "World", "C", "Programming", NULL};
    int n = 3;
    
    char **cloned_array = array_clone(words, n);
    if (cloned_array) {
        printf("Cloned array:\n");
        for (int i = 0; cloned_array[i] != NULL; i++) {
            printf("%s\n", cloned_array[i]);
            free(cloned_array[i]); 
        }
        free(cloned_array); 
    }

    return 0;
}