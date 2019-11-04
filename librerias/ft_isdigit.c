#include "libft.h"

int ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int main()
{
	char c;
	c = '5';
	printf("Result when numeric character is passed: %d", isdigit(c));
	c = '+';
	printf("\nResult when non-numeric character is passed: %d", isdigit(c));

	
	c = '5';
	printf("\n\nResult when numeric character is passed: %d", ft_isdigit(c));
	c = '+';
	printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));
	return 0;
}