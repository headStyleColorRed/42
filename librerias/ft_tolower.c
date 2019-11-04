#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
int main ()
{
  int i=0;
  char str[]="TEST STRING.\n";
  char c;
  while (str[i])
  {
    c=str[i];
    putchar (ft_toupper(c));
    i++;
  }
  return 0;
}