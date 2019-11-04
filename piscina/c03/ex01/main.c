
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int     main(void)
{
    char a[] = "12345678";
    char b[] = "12345678";
    char c[] = "123495678";
    char d[] = "123095678";
    char e[] = "1234567";
    char k[] = "123456789";
    
    char *f = a;
    char *g = b;
    char *h = c;
    char *i = d;
    char *j = e;
    char *l = k;
    unsigned int size = 10;
    
    
    
    printf("m:%d\n", ft_strncmp(f, g, size));
    printf("h:%d\n", strncmp(f, g, size));
    printf("m:%d\n", ft_strncmp(f, h, 6));
    printf("h:%d\n", strncmp(f, h, 6));
    printf("m:%d\n", ft_strncmp(h, i, 5));
    printf("h:%d\n", strncmp(h, i, 5));
    printf("m:%d\n", ft_strncmp(i, j, 8));
    printf("h:%d\n", strncmp(i, j, 8));
    printf("m:%d\n", ft_strncmp(j, a, 9));
    printf("h:%d\n", strncmp(j, a, 9));
    printf("m:%d\n", ft_strncmp(l, j, 9));
    printf("h:%d\n", strncmp(l, j, 9));
}
