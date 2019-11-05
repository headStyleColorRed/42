#include "libft.h"

size_t ft_strlcpy(char *str1, const char *str2, size_t size)
{
    unsigned int count;
    size_t i;
    unsigned char *dest;
    unsigned char *src;

    dest = (unsigned char *)str1;
    src = (unsigned char *)str2;
    if (!str2)
        return (0);
    count = 0;
    while (src[count] != '\0')
        ++count;
    if (!size)
		return (count);
    i = 0;
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
    return (count);
}