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

int main()
{
    char str1[20] = "vaya que cosas";
    char str2[20] = "vaya que cosaS";
    int ret;
    int limit = 0;

    //ret = memcmp(str1, str2, limit);
    ret = ft_memcmp(str1, str2, limit);

    if (ret > 0)
    {
        printf("str2 is less than str1");
    }
    else if (ret < 0)
    {
        printf("str1 is less than str2");
    }
    else
    {
        printf("str1 is equal to str2");
    }

    printf("\n\n");

    return (0);
}