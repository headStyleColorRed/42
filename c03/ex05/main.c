
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int     main(void)
{
    char a[90] = "kFJDfkDGVDoNcVzjPMFbhaUmKxrWSVXIqIZVyKfqxjIFRZhCsDfvCJvFuPFz";
    char b[] = "IqIZVyKfqxjIFRZhCsDfvCJvFuPFzhdNRy";
    char *c = a;
    char *d = b;
    unsigned int size = 90;
    
    
    char e[90] =  "kFJDfkDGVDoNcVzjPMFbhaUmKxrWSVXIqIZVyKfqxjIFRZhCsDfvCJvFuPFz";
    char f[] = "IqIZVyKfqxjIFRZhCsDfvCJvFuPFzhdNRy";
    char *g = e;
    char *h = f;
    unsigned int talla = 90;
    
    int res = ft_strlcat(c, d, size);
    int res2 = strlcat(g, h, talla);
    
    printf("Mine: %s\n", a);
    printf("Moli: %s\n", e);
    printf("Mine: %d\n", res);
    printf("Moli: %d\n", res2);
    
}
