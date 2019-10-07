#include <stdio.h>
int         ft_str_is_uppercase(char *str);

int        main(void)
{
    char a[] = "TWERTE";
    char *b = a;
    int resultado;
    
    resultado = ft_str_is_uppercase(b);
    printf("resultado: %d", resultado);
    return (0);
}
