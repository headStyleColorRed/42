#include "libft.h"

char *ft_strrchr(const char *string, int c)
{
    int i;
	char *str;
    char *pointer;

	str = (char *)string;
    pointer = '\0';
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            pointer = &str[i];
        i++;
    }
    return (pointer);
}

int main () {
   const char str[] = "http://wwwtutorialspointcom";
   const char ch = '.';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}