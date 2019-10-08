
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int     main(void)
{
    char a[11] = "Vaya";
    char b[] = " Hola";
    char *c = a;
    char *d = b;
    unsigned int size = 5;
    
    ft_strncat(c, d, size);
    
    printf("%s", a);
}
