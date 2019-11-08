#include "libft.h"

/*
The C library function void *calloc allocates the requested memory and returns a pointer to it. The difference in malloc and calloc is that malloc does not set the memory to zero where as calloc sets allocated memory to zero.
*/

void *ft_calloc(size_t nitems, size_t size)
{
    size_t i;
    void *result;

    if (!(nitems) || !(size))
        return (0);

    result = malloc(size * nitems);
    if (result == 0)
        return (0);
    i = 0;
    while (i < nitems)
        ((char*)result)[i++] = '\0';
    return (result);

}
