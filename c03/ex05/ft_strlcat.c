#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    
    
    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (j < size - 1 && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (i);
}
