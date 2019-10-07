#include <stdio.h>
int          strlowcase(char *str);

int        main(void)
{
    char a[] = "HOLACRACK";
    char *b = a;
    
    strlowcase(b);
    
    for(int i = 0; i < 9; i++)
    {
        printf("%c", a[i]);
    }
    return (0);
}
