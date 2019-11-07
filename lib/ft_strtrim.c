#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	char	*str;
    int     i;
    int     j;
    long long int    size;
    int     deleted;

    if (s == NULL)
		return (NULL);
    size = ft_strlen(s) + 1;
	str = (char *)malloc(sizeof(char) * size );
	str[size] = '\0';
	if (str == 0)
		return (0);
    i = 0;
    while (s[i] != '\0' && s[i] == set[0])
        i++;
    deleted = i + 1;
    j = 0;
    while (s[i] != '\0')
        str[j++] = s[i++];
    str[j] = '\0';
    while (str[i] != '\0')
        i++;
    i-= deleted;
    while(i > 0 && str[i] == set[0])
        str[i--] = '\0';
    return (str);
    
}

int main(void)
{
    char a[] = "sssssssssssssque tonteria tetessssssssss";
    char b[] = "s";
    ft_strtrim(a, b);
}
