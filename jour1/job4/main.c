#include <stdio.h>

char *my_strcpy(char *dest, const char *src);

int main() {
    char dest[20];

    my_strcpy(dest, "Hello");
    printf("Copied string: %s\n", dest); 

    my_strcpy(dest, "123456789");
    printf("Copied string: %s\n", dest); 

    return 0;
}