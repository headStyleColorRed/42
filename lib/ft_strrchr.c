#include "libft.h"

char *ft_strrchr(const char *string, int c)
{
    int i;
	char *str;
    char *pointer;

	str = (char *)string;
    pointer = '\0';
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            pointer = &str[i];
        i++;
    }
    return (pointer);
}
