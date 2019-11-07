#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	if (str1 == NULL || str2 == NULL)
		return (NULL);
	dest = (char*)malloc(sizeof(*dest) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (dest == NULL)
		return (NULL);
	while (*str1 != '\0')
		dest[i++] = *str1++;
	while (*str2 != '\0')
		dest[i++] = *str2++;
	dest[i] = '\0';
	return (dest);
}