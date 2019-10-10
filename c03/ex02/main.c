#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int     main(void)
{
    char a[] = "Vaya";
    char b[] = " por dios";
    char *c = a;
    char *d = b;
    
    ft_strcat(c, d);
    
    printf("%s", a);    
}
