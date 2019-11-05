#include "libft.h"

char *ft_strchr(const char *string, int c)
{
    int i;
	char *str;

	str = (char *)string;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    return (0);
}
