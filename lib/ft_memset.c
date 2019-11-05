#include "libft.h"

void *ft_memset(void *str, int c, size_t len)
{
    char *define;
    size_t i;

    if (len)
    {
        i = 0;
        define = str;
        while (i < len)
            define[i++] = c;
    }
    return (str);
}
