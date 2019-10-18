
#include <stdio.h>
int *ft_range(int min, int max);

int main(void)
{
    int *a = ft_range(-10, 5);
    int i = 0;
    while (i < 16)
    {
        printf("%d, ", a[i]);
        i++;
    }
    
}
