#include "factors.h"

void factors(int numb)
{
int rem, i;

rem = 0;
i = 2;
while (true)
{
if (numb % i == 0)
{
rem = numb / i;
printf("%d=%d*%d\n", numb, i, rem);
break;
}
i++;
}
}

