#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t len)
{
    size_t i;
    unsigned char *stra;
    unsigned char *strb;

    stra = (unsigned char *)str1;
    strb = (unsigned char *)str2;
    if (len == 0)
        return (0);
    while (stra[i] == strb[i] && i < len)
        i++;
    return (stra[i] - strb[i]);
}
