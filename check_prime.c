#include "factors.h"

bool check_prime(int num)
{
int i;

for (i = 2; num / 2 < i; i++)
{
    if (num % i == 0)
    {
        return false;
    }
}
return true;
}