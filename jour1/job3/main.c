#include <stdio.h>

int char_is_digit(char c);
int str_is_digit(const char *str);

int main() {
    // test   char_is_digit
    printf("char_is_digit('5') = %d\n", char_is_digit('5')); 
    printf("char_is_digit('a') = %d\n", char_is_digit('a')); 

    // test str_is_digit
    printf("str_is_digit(\"12345\") = %d\n", str_is_digit("12345")); 
    printf("str_is_digit(\"12a45\") = %d\n", str_is_digit("12a45")); 
    printf("str_is_digit(\"\") = %d\n", str_is_digit("")); 

    return 0;
}