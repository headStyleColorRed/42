#include "libft.h"

int ft_strlen(const char *string)
{
	int i;
	const char *str;

	str = string;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main() 
{ 
   char str[]= "fasdfasfadfasdfasdfasdf"; 
  
   printf("Length of string is: %d\n", strlen(str)); 
   printf("Length of string is: %d", ft_strlen(str)); 
  
 return 0; 
} 