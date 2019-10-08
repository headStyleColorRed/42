
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int     main(void)
{
    char a[] = "Rodrigo";
    char b[] = "Rodrigoabc";
    
    char *c = a;
    char *d = b;
    unsigned int size = 10;
    
    int result = ft_strncmp(c, d, size);
    
    printf("%d", result);
}
