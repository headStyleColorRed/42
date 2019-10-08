
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int     main(void)
{
    char a[11] = "Vaya";
    char b[] = " Hola";
    char *c = a;
    char *d = b;
    unsigned int size = 6;
    
    int numero = ft_strlcat(c, d, size);
    
    printf("%d", a[numero]);
}
