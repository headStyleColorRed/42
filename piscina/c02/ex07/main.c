#include <stdio.h>
int          ft_strupcase(char *str);

int        main(void)
{
    char a[] = "hola  Rodri42";
    char *b = a;
    
    ft_strupcase(b);
    
    for(int i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }
    return (0);
}

