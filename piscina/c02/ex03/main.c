#include <stdio.h>
int        ft_str_is_numeric(char *str);

int        main(void)
{
    char a[] = "234";
    char *b = a;
    int resultado;
    
    resultado = ft_str_is_numeric(b);
    printf("resultado: %d", resultado);
    return (0);
}
