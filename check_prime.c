#include "factors.h"

bool check_prime(int num)
{
int i;

for (i = 2; i * i <= num; i++)
{
    if (num % i == 0)
    {
        return false;
    }
}
return true;
}