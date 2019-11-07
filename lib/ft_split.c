#include  "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t pos;
	pos = 0;

	while (src[pos] != '\0' && pos < n)
	{
		dest[pos] = src[pos];
		pos++;
	}

	if (pos < n)
	{
		while (pos < n)
		{
			dest[pos] = '\0';
			pos++;
		}
	}
	return (dest);
}

int		ft_split_count_words(char *str, char *charset)
{
	int	c;
	int	word;
	int	lword;

	c = 0;
	word = 0;
	lword = 0;
	while (str[c] != '\0')
	{
		if (ft_strncmp(&str[c], charset, ft_strlen(charset)) == 0)
		{
			c += ft_strlen(charset);
			lword = 0;
		}
		else
		{
			if (!lword)
				word++;
			lword++;
			c++;
		}
	}
	return (word);
}

void	ft_split_new_word(int *lword, int *word, int *c)
{
	if (!*lword)
		(*word)++;
	(*lword)++;
	(*c)++;
}

char	*ft_split_get_word(char *str, char *charset, int nword)
{
	int		c;
	int		word;
	int		lword;
	char	*strword;

	c = 0;
	word = 0;
	lword = 0;
	while (str[c] != '\0')
	{
		if (ft_strncmp(&str[c], charset, ft_strlen(charset)) == 0)
		{
			c += ft_strlen(charset);
			lword = 0;
		}
		else
			ft_split_new_word(&lword, &word, &c);
		if (((ft_strncmp(&str[c], charset, ft_strlen(charset)) == 0)
			|| str[c] == '\0') && word == nword)
			{
				strword = malloc(sizeof(char *) * (lword + 1));
				return (ft_strncpy(strword, &str[c - (lword)], lword));
			}
	}
	return (NULL);
}

char **ft_split(char *str, char *charset)
{
	char	**tab;
	int		nbword;
	int		i;

	nbword = ft_split_count_words(str, charset);
	tab = malloc(sizeof(char *) * (nbword + 1));
	i = 0;
	while (i < nbword)
	{
		tab[i] = ft_strdup(ft_split_get_word(str, charset, i + 1));
		i++;
	}
	tab[i] = malloc(sizeof(char) * 1);
	tab[i][0] = '\0';
	return (tab);
}

int main (void)
{
    char frase[] = "Hola Hola Hola";
    char b[] = "\n";
    ft_split(frase, b);
}