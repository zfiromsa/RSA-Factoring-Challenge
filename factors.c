#include "factors.h"

void factors(int numb)
{
	int rem, i;

	rem = 0;
	i = 2;
	while (true)
	{
		if (i >= numb)
		{
			printf("\n");
			break;
		}
		if (numb % i == 0)
		{
			rem = numb / i;
			printf("%d=%d*%d\n", numb, rem, i);
			break;
		}
		i++;
	}
}

