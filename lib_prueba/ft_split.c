#include "libft.h"

static char *ft_strncpy(char *dest, const char *src, size_t n)
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

static int ft_count_words(char *str, char *splitter)
{
	int i;
	int number_of_words;
	int each_word_length;

	i = 0;
	number_of_words = 0;
	each_word_length = 0;
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], splitter, ft_strlen(splitter)) == 0)
		{
			i += ft_strlen(splitter);
			each_word_length = 0;
		}
		else
		{
			if (each_word_length == 0)
				number_of_words++;
			each_word_length++;
			i++;
		}
	}
	return (number_of_words);
}

static void ft_split_new_word(int *each_word_length, int *word, int *i)
{
	if (!*each_word_length)
		(*word)++;
	(*each_word_length)++;
	(*i)++;
}

static char *ft_split_get_word(char *str, char *splitter, int nword)
{
	int i;
	int word;
	int each_word_length;
	char *strword;

	i = 0;
	word = 0;
	each_word_length = 0;
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], splitter, ft_strlen(splitter)) == 0)
		{
			i += ft_strlen(splitter);
			each_word_length = 0;
		}
		else
		{
			ft_split_new_word(&each_word_length, &word, &i);
		}
		if (((ft_strncmp(&str[i], splitter, ft_strlen(splitter)) == 0) || str[i] == '\0') && word == nword)
		{
			strword = malloc(sizeof(char *) * (each_word_length + 1));
			return (ft_strncpy(strword, &str[i - each_word_length], each_word_length));
		}
	}
	return (NULL);
}

char **ft_split(const char *string, char *splitter)
{
	char **matrix;
	char *str;
	int number_of_words;
	int i;

	str = (char *)string;
	number_of_words = ft_count_words(str, splitter);
	matrix = malloc(sizeof(char *) * (number_of_words + 1));
	i = 0;
	while (i < number_of_words)
	{
		matrix[i] = ft_strdup(ft_split_get_word(str, splitter, i + 1));
		i++;
	}
	matrix[i] = malloc(sizeof(char) * 1);
	matrix[i][0] = '\0';
	return (matrix);
}