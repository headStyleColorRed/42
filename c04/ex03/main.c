#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
    char c[] = "  36234";
    char *a = c;
    int result = ft_atoi(a);
    printf("El número es: %d", result);
}

