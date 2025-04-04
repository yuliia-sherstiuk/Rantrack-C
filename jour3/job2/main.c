#include <stdio.h>
#include "my_itoa.h" 
#include <stdlib.h>

int main() {
    int num1 = 1234;
    int num2 = -5678;
    int num3 = 0;

    char *str1 = my_itoa(num1);
    char *str2 = my_itoa(num2);
    char *str3 = my_itoa(num3);

    printf("Résultat : %s\n", str1);
    printf("Résultat : %s\n", str2);
    printf("Résultat : %s\n", str3);

    
    free(str1);
    free(str2);
    free(str3);

    return 0;
}