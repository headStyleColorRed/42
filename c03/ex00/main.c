#include <stdio.h>

int     ft_strcmp(char *s1, char *s2);

int     main(void)
{
    char a[] = "Rodrigo";
    char b[] = "Rodrigos";
    
    char *c = a;
    char *d = b;
    
    int result = ft_strcmp(c, d);
    
    printf("%d", result);
}
