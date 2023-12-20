#include "factors.h"

int next_prime(void)
{
while (true)
{
    int i;

    i = 2;
    while (true)
    {
        if (p % i == 0)
        {
            break;
        }
        i++;
    }
    if (i > p / i )
    {
        break;      
    }
    p++;
}
}

