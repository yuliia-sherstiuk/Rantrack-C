#include <stdio.h>
#include <stdlib.h>

char *itoa_hex(int n); 

int main()
{
    char *hex;

    hex = itoa_hex(255);
    printf("255 en hexadécimal = %s\n", hex); 
    free(hex); 

    hex = itoa_hex(4095);
    printf("4095 en hexadécimal = %s\n", hex); 
    free(hex);

    return 0;
}
