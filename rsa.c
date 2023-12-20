#include "factors.h"

void rsa(int numb)
{
	p = 2;
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

