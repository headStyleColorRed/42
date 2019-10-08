#include <stdio.h>
int          ft_strcapitalize(char *str);

int        main(void)
{
    char a[] = "hoLa, como estas? 42paLAbras cuarenta-y-dos; cincuenta+y+uno";
    char *b = a;
    
    ft_strcapitalize(b);
    
    for(int i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }
    return (0);
}
