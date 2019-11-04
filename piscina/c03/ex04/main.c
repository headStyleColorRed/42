
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int     main(void)
{
    char a[] = "34n56n345634563n45634ssdfg3n456345fasfawefq34t34t344";
    char b[] = "sdfg";
    char *c = a;
    char *d = b;
    
    char e[] = "34n56n345634563n45634ssdfg3n456345fasfawefq34t34t344";
    char f[] = "sdfg";
    char *g = e;
    char *h = f;

    ft_strstr(c, d);
    
    printf("Mine: %s\n", ft_strstr(c, d));
    printf("Moli: %s\n", strstr(g, h));
}
