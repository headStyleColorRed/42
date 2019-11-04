#include "libft.h"

int ft_isalnum(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else if(c >= 65 && c <= 90 )
		return (2);
	else if(c >= 97 && c <= 122 )
		return (3);
	return (0);
}

int main()
{
	 char c;
    int result;
    c = '5';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
    c = 'Q';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
    c = 'l';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
    c = '+';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

	
	c = '5';
    result = ft_isalnum(c);
    printf("\n\nWhen %c is passed, return value is %d\n", c, result);
    c = 'Q';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
    c = 'l';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
    c = '+';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
	return 0;
}