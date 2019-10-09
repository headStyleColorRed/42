#include <stdio.h>

int     ft_strcmp(char *s1, char *s2);

int     main(void)
{
    char a[] = "Rodrig";
    char b[] = "Rodrig";
    
    char *c = a;
    char *d = b;
    
    int result = ft_strcmp(c, d);
    
    printf("%d", result);
}
