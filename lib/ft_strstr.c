#include "libft.h"

char *ft_strnstr(const char *string, const char *to_find, size_t len)
{
    unsigned int position;
    unsigned int i;
    char *str;

    str = (unsigned char *)string;
    if (!*to_find)
        return (str);
    position = 0;
    while (str[position] && (size_t)position < len)
    {
        if (str[position] == to_find[0])
        {
            i = 1;
            while (to_find[i] && str[position + i] == to_find[i] &&
                   (size_t)(position + i) < len)
                ++i;
            if (to_find[i] == '\0')
                return (&str[position]);
        }
        ++position;
    }
    return (0);
}
