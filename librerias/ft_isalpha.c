#include "libft.h"

int ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (2);
	return (0);
}

int main()
{
	char c;
	c = 'Q';
	printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));
	c = 'q';
	printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));
	c = '+';
	printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));

	
	c = 'Q';
	printf("\n\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));
	c = 'q';
	printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));
	c = '+';
	printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));
	return 0;
}