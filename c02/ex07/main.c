#include <stdio.h>
int          ft_strupcase(char *str);

int        main(void)
{
    char a[] = "hola";
    char *b = a;
    
    ft_strupcase(b);
    
    for(int i = 0; i < 4; i++)
    {
        printf("%c", a[i]);
    }
    return (0);
}

