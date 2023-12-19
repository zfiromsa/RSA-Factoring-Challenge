#include "factors.h"

void factors(int numb)
{
	int i;

	for (i = 2; i * i <= numb; i++)
	{
		if (numb % i == 0)
		{
			printf("%d=%d*%d\n", numb, numb / i, i);
			break;
		}
	}
}


