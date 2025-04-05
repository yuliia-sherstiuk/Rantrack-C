#include <unistd.h>

//  convertir un entier en texte
void ft_putnbr(int n)
{
    char c;

    if (n >= 10)
        ft_putnbr(n / 10);
    c = '0' + (n % 10);
    write(1, &c, 1);
}

//  calculer la factorielle
int factorial(int n)
{
    int result = 1;
    int i = 1;

    while (i <= n)
    {
        result *= i;
        i++;
    }
    return result;
}

// Fonction principale
int main(int argc, char **argv)
{
    int n = 0;
    int fact = 0;

    if (argc < 2)
        return 0;

    // Convertir
    while (*argv[1] >= '0' && *argv[1] <= '9')
    {
        n = n * 10 + (*argv[1] - '0');
        argv[1]++;
    }

    fact = factorial(n);
    ft_putnbr(fact);
    write(1, "\n", 1);

    return 0;
}
