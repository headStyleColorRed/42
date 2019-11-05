#include "libft.h"

void *ft_memchr(const void *string, int c, size_t n)
{
    size_t i;
    unsigned char *str;
    unsigned char coincidence;

    i = 0;
    str = (unsigned char *)string;
    coincidence = (unsigned char)c;
    while (i < n)
    {
        if(str[i] == coincidence)
            return (&str[i]);
    }
    return (0);
}
