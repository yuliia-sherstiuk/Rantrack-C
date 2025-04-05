#include <stdio.h>

// Fonction qui élève n à la puissance power
int power(int n, int power)
{
    int result = 1;
    int i;

    if (power < 0)
        return 0;

    i = 0;
    while (i < power)
    {
        result = result * n;
        i++;
    }
    return result;
}

// Fonction principale pour tester
int main()
{
    printf("2^3 = %d\n", power(2, 3));   // 8
    printf("5^0 = %d\n", power(5, 0));   // 1
    printf("7^2 = %d\n", power(7, 2));   // 49
    printf("10^-2 = %d\n", power(10, -2)); // 0 (non supporté)
    return 0;
}