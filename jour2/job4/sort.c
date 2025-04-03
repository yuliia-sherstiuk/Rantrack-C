#include <stddef.h>  //  NULL

int my_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

char **sort(char **strs) {
    if (!strs) return NULL;

    int len = 0;
    while (strs[len]) len++;  
    
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (my_strcmp(strs[j], strs[j + 1]) > 0) {
               
                char *temp = strs[j];
                strs[j] = strs[j + 1];
                strs[j + 1] = temp;
            }
        }
    }
    return strs;
}