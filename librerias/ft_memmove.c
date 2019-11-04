#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{

    size_t i;
    unsigned char *dest;
    unsigned char *src;

    dest = (unsigned char *)str1;
    src = (unsigned char *)str2;
    if (src < dest)
    {
        i = n;
        while (i-- > 0)
            dest[i] = src[i];
    }
    else
    {
        i = 0;
        while (i < n)
        {
            dest[i] = src[i];
            i++;
        }
    }

    return (str1);
}


int main()
{
    char dest[] = "Geeks";
    const char src[] = "Quiz123456789";
    char dest2[] = "Geeks";
    const char src2[] = "Quiz123456789";

    printf("Before memmove dest = %s, src = %s\n", dest, src);
    memmove(dest, src, 9);
    printf("After memmove dest = %s, src = %s\n\n", dest, src);

    printf("Before memmove dest = %s, src = %s\n", dest2, src2);
    ft_memmove2(dest2, src2, 9);
    printf("After memmove dest = %s, src = %s\n", dest2, src2);
    return (0);
}