#include <stdio.h>
int     ft_strlowcase(char *str);

int        main(void)
{
    char a[] = "HOLACa asdfaRACK";
    char *b = a;
    
    ft_strlowcase(b);
    
    for(int i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }
    return (0);
}
