#include <stdio.h>

void swap(int *a, int *b) {
    if (a && b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x = 5, y = 8;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}