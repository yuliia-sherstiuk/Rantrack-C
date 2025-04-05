#include <unistd.h>


void ft_putnbr(int n)
{
    char c;
    if (n >= 10)
        ft_putnbr(n / 10);
    c = '0' + (n % 10);
    write(1, &c, 1);
}

//calculer 1 nombre  Fibonacci
int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int temp;
    int i = 1;

    if (n == 0)
        return 0;
    while (i < n)
    {
        temp = a + b;
        a = b;
        b = temp;
        i++;
    }
    return b;
}

// Fonction principale
int main(int argc, char **argv)
{
    int n = 0;
    int i = 0;

    if (argc < 2)
        return 0;

  
    while (argv[1][i] >= '0' && argv[1][i] <= '9')
    {
        n = n * 10 + (argv[1][i] - '0');
        i++;
    }

    ft_putnbr(fibonacci(n));
    write(1, "\n", 1);

    return 0;
}
