#include "libft.h"

/*
The C library function void "memset" copies a certain character to the first n characters of the string pointed to, by the argument str.
*/

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
