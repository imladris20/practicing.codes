#include <stdio.h>
#include <stdlib.h>

void my_rand(unsigned int seed, int amount);

int main()
{
    my_rand(2,8);
    return 0;
}

void my_rand(unsigned int seed, int amount)
{
    for (int i = 0 ; i < amount ; i++)
    {
        seed = seed * 1103515245 + 12345;
        printf("%u\n", seed);
    }
}
