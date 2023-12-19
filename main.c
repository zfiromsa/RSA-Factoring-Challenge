#include "factors.h"

int main(int argc, char** argv)
{
size_t len;
ssize_t read;
char *countent;
int numb;

read = numb = 0;
if (argc > 2)
    failure(1);
fptr = fopen(argv[1], "r");
if (!fptr)
    failure(2);
while (read=(getline(&countent, &len, fptr) != -1))
{
    numb = atoi(strtok(countent, "\n"));
    factors(numb);
}
free(countent);
fclose(fptr);
return (0);
}

