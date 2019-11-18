/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:11:51 by rlabrado          #+#    #+#             */
/*   Updated: 2019/11/18 15:40:46 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	word_cpy(char *new_word, char *str, char splitter, int i)
{
	int j;

	j = 0;
	while (str[i] != splitter && str[i] != '\0')
		new_word[j++] = str[i++];
	new_word[j] = '\0';
}

static int	ft_count_words(char *str, char splitter)
{
	int i;
	int number_of_words;

	i = 0;
	number_of_words = 0;
	while (str[i] != '\0')
	{
		if (str[i] == splitter)
			i++;
		else
		{
			number_of_words++;
			while (str[i] != '\0' && str[i] != splitter)
				i++;
		}
	}
	return (number_of_words);
}

static int	ft_current_word_length(char *str, char splitter, int i)
{
	int j;

	j = 0;
	while (str[i] != splitter && str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

static void	ft_split_get_word(char **matrix, char *str, char splitter)
{
	int		i;
	int		m_i;
	char	*new_word;
	int		length;

	m_i = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == splitter && str[i - 1] != splitter)
		{
			m_i++;
		}
		else if (str[i] != splitter)
		{
			length = ft_current_word_length(str, splitter, i);
			new_word = malloc((sizeof(char *) * length) + 1);
			word_cpy(new_word, str, splitter, i);
			matrix[m_i] = ft_strdup(new_word);
			i += (length - 1);
		}
		i++;
	}
}

char		**ft_split(const char *string, char splitter)
{
	char	**matrix;
	char	*str;
	int		number_of_words;
	int		i;
	int		m_i;

	m_i = 0;
	i = 0;
	if (!splitter || !string)
		return (NULL);
	str = (char *)string;
	number_of_words = ft_count_words(str, splitter);
	matrix = malloc((sizeof(char *) * number_of_words) + 1);
	ft_split_get_word(matrix, str, splitter);
	matrix[number_of_words] = NULL;
	return (matrix);
}

int main(void)
{
    char a[] = "      split       this for   me  !";
    char splitter = ' ';
    int length = ft_count_words(a, splitter);
    int i;
    char **matrix;

    matrix = ft_split(a, splitter);
    printf("\n\n\n\n");
    i = 0;
    while (i < length + 1)
    {
        printf("matrix[i]: %s\n", matrix[i]);
        i++;
    }
}