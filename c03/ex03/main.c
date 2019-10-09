
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int     main(void)
{
    char a[100] = "Hello World!";
    char b[] = " Goodbye World";
    char *c = a;
    char *d = b;
    unsigned int size = 3;
    
    ft_strncat(c, d, size);
    
    for (int i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }
}
