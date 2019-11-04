#include "libft.h"

void *ft_memset(void *str, int c, size_t len)
{
    char *define;
    size_t i;

    if (len)
    {
        i = 0;
        define = str;
        while (i < len)
            define[i++] = c;
    }
    return (str);
}

int main(void)
{
    //Basic string to test
    char str[50] = "Testing this sh*t !\0";
    char str2[50] = "Testing this sh*t !\0";
    //replace by
    char replace = '-';
    //on X c
    int nbr = 5;

    //Display result
    printf("\x1b[31m-----ORIGINAL MEMSET-----\n\x1b[0m");
    printf("\x1b[32mOriginal : %s\n\x1b[0m", str);
    printf("\x1b[32mMemset   : %s\n\x1b[0m", (char *)memset(str, replace, nbr));
    printf("\x1b[31m---------------------------------\n\x1b[0m");
    printf("\x1b[31m\n-----TEST FT_MEMSET------\n\x1b[0m");
    printf("\x1b[32mOriginal : %s\n\x1b[0m", str2);
    printf("\x1b[32mft_memset: %s\n\x1b[0m", (char *)ft_memset(str2, replace, nbr));
    printf("\x1b[31m---------------------------------\n\x1b[0m");
    //compare elem
    //NOTE THAT NBR HAS TO BE LESS OR EQUAL TO STR SIZE OR SEGFAULT ON EACH FNC
    return (0);
}