#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *dest;
    int i;
    int lenght_of_src;
    
    
    while (src[i++] != '\0')
        lenght_of_src++;
    
    dest = (char *) malloc(lenght_of_src);
    
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
