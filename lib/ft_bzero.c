#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
    char *define;
    size_t i;

    i = 0;
    define = str;
    while (i < len)
        define[i++] = 0;
}
