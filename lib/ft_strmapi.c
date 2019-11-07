#include "libft.h"

char	*ft_strmapi(char const *string, char (*my_function)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	int				j;

	if (string && my_function)
	{
		i = 0;
		j = ft_strlen((char *)string);
		str = (char *)malloc(sizeof(str) * j);
		while (string[i] != 0)
		{
			str[i] = my_function(i, string[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}