#include "libft.h"
#include <string.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t len)
{
    char *define;
    size_t i;

    i = 0;
    define = str;
    while (i < len)
        define[i++] = 0;
}

int main(void)
{
    //Basic string to test
    char str[50] = "Testing this sh*t !\0";
    int nbr = 3;

    ft_bzero(str,  nbr);
    
    printf("%s ", str[0]);
    printf("%s ", str[1]);
    printf("%s ", str[2]);
    return (0);
}