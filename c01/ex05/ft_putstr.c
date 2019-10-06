#include <unistd.h>

void    ft_putstr(char *str)
{
	int i;
	
	i = 0;
    while(str[i] != '\0')
       {
        char letra = str[i];
        write(1, &letra, 1);
	i++;
    }
}
