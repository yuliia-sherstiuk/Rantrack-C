#include <stdio.h>
#include "my_atoi.h"

int main() {
    char str1[] = "  -1234";
    char str2[] = "42";
    char str3[] = "   +5678abc"; 
    printf("Result: %d\n", my_atoi(str1)); 
    printf("Result: %d\n", my_atoi(str2)); 
    printf("Result: %d\n", my_atoi(str3)); 

    return 0;
}