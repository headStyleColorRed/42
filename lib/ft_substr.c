#include "libft.h"

char	*ft_substr(char *str, size_t start, size_t end)
{
	char	*returned_string;
	size_t	size;
	size_t	i;

	if (start > end || !*str)
		return (0);
	size = end - start;
	returned_string = (char *)malloc(sizeof(size) + 1);
	returned_string[size] = '\0';
	if (returned_string == 0)
		return (0);

	i = 0;
	while (i < start)
		if (str[i])
			i++;
	if (i != start)
		return (0);
	i = 0;
	while (start < end && str[start])
		returned_string[i++] = str[start++];
	while (!str[start] && start < end)
		returned_string[i++] = '\0';
	return (returned_string);
}