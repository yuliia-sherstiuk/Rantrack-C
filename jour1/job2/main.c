#include <stdio.h>

int my_strlen(const char *str);

int main() {
    const char *test = "Hello, world!";
    printf("Length: %d\n", my_strlen(test));
    return 0;
}