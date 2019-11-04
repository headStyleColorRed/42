#include "libft.h"

char *ft_strchr(const char *string, int c)
{
    int i;
	char *str;

	str = (char *)string;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    return (0);
}

int main ()
{
  char str[] = "This is a sample string";
  char * pch;
  printf ("Looking for the 's' character in \"%s\"...\n",str);
  pch = ft_strchr(str,'s');
  while (pch!=NULL)
  {
    printf ("found at %d\n",pch-str+1);
    pch = ft_strchr(pch+1,'s');
  }
  return 0;
}