#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char a[] = "hola";
    char *b = a;
    
    int result = ft_strlen(b);
    printf("%d", result);
}
