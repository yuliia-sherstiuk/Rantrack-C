int char_is_digit(char c);

int str_is_digit(const char *str) {
    if (!*str) return 0; // Пустая строка не считается числом

    while (*str) {
        if (!char_is_digit(*str))
            return 0;
        str++;
    }
    return 1;
}
