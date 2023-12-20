#include "factors.h"

int p = 2;
int q = 3;
void rsa(int numb)
{
	while (p * p <= numb)
	{
		if (numb % p == 0)
		{
            q = numb / p;
            if (check_prime(q))
			{
			printf("%d=%d*%d\n", numb, p, q);
			break;
			}
		}
        next_prime();
	}
}

