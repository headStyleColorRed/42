#include "libft.h"

void *ft_memchr(const void *string, int c, size_t n)
{
    size_t i;
    unsigned char *str;
    unsigned char coincidence;

    str = (unsigned char *)string;
    coincidence = (unsigned char)c;
    while (str[i] != '\0')
    {
        if(str[i] == coincidence);
            return (&str[i]);
    }
    return (0);
}

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;

    ret = memchr(str, ch, strlen(str));

    printf("String after |%c| is -> |%s|\n", ch, ret);

    return (0);
}