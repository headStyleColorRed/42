#include <stdio.h>
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int        main(void)
{
    char a[] = "hola rodrigo vaya por dios";
    char b[7];
    char *c = a;
    char *d = b;
    unsigned int length = 7;
    
    ft_strlcpy(d, c, length);
    
    for(int j = 0; b[j] != '\0'; j++)
    {
        printf("%c", b[j]);
    }
    
    return (0);
}
