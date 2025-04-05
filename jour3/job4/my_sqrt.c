#include <stdio.h>


int my_sqrt(int n)
{
    int i;

    if (n < 0)
        return 0;

    i = 0;
    while (i * i <= n)
    {
        if (i * i == n)
            return i;
        i++;
    }
    return 0;
}

// Fonction principale 
int main()
{
    printf("my_sqrt(25) = %d\n", my_sqrt(25)); 
    printf("my_sqrt(16) = %d\n", my_sqrt(16)); 
    printf("my_sqrt(9)  = %d\n", my_sqrt(9));  
    printf("my_sqrt(-4) = %d\n", my_sqrt(-4)); 
    printf("my_sqrt(1)  = %d\n", my_sqrt(1));  
    printf("my_sqrt(0)  = %d\n", my_sqrt(0));  
    return 0;
}
