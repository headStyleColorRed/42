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
