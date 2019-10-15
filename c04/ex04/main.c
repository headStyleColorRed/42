#include <stdio.h>

void ft_putnbr_base(int nb, char *str);

int main(void)
{
    int c = -214748;
    char base[] = "0123456789ABCDEF";
    char *p_base = base;
    
    ft_putnbr_base(c, p_base);
}
