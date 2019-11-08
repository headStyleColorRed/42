#include "libft.h"

/*
The bzero() function erases the data in the n bytes of the memory
starting at the location pointed to by s, by writing zeros to that area.
*/

void	ft_bzero(void *str, size_t len)
{
    char *define;
    size_t i;

    i = 0;
    define = str;
    while (i < len)
        define[i++] = 0;
}
