#include <stdio.h>

void divide(int *num) {
    if (num) {
        *num /= 2;
    }
}

int main() {
    int num = 10;
    printf("Before divide: %d\n", num);
    divide(&num);
    printf("After divide: %d\n", num);
    return 0;
}