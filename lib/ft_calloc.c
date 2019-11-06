#include "libft.h"

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
