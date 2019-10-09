
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int     main(void)
{
    char a[] = "GeeksforGeeks";
    char b[] = "for";
    char *c = a;
    char *d = b;
    
    ft_strstr(c, d);
    
    printf("%s", ft_strstr(c, d));
}
