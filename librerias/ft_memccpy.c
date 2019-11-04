#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *p_dest;
    unsigned char *p_src;
    size_t i;

    i = 0;
    p_dest = (unsigned char*)dest;
    p_src = (unsigned char*)src;
    while( i < n)
    {
        p_dest[i] = p_src[i];
        if (p_src[i] == (unsigned char)c)
            return (&p_src[i + 1]);
        i++;
    }
    return (0);

}

int main(void)
{
    char string1[60] = "Taj Mahal is a historic monument in India.";
    char buffer[61];
    char *pdest;
    printf("Source: %s\n", string1);
    pdest = ft_memccpy(buffer, string1, 'c', 42);
    *pdest = '\0';
    printf("Result: %s\n", buffer);
    printf("Length: %d characters\n", strlen(buffer));
}