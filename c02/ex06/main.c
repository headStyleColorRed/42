#include <stdio.h>
int         ft_str_is_printable(char *str);

int        main(void)
{
    char a[] = " ";
    char *b = a;
    int resultado;
    
    resultado = ft_str_is_printable(b);
    printf("resultado: %d", resultado);
    return (0);
}
