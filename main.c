#include "factors.h"

int main(int argc, char** argv)
{
FILE *fptr;
size_t len;
ssize_t read;
char *countent;
int numb;

read = numb = 0;
if (argc > 2)
{
    fprintf(stderr, "Pass the address of the file\n");
    return (1);
}
fptr = fopen(argv[1], "r");
if (!fptr)
{
    fprintf(stderr, "Error: malloc failed\n");
    fclose(fptr);
    return (1);
}
while ((read=(getline(&countent, &len, fptr)) != -1))
{
    numb = atoi(strtok(countent, "\n"));
    factors(numb);
}
free(countent);
fclose(fptr);
return (0);
}

