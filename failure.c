#include "factors.h"

void failure(int i)
{
    if (i == 1)
        fprintf(stderr, "Pass the address of the file\n");
    if (i == 2)
    {
        fprintf(stderr, "Error: malloc failed\n");
        fclose(fptr);
    }
    exit(EXIT_FAILURE);
}

