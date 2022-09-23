/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 13:34:53 by rlabrado          #+#    #+#             */
/*   Updated: 2019/11/25 13:50:55 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *string, char splitter)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	if (*string == '\0')
		return (0);
	while (*string != '\0')
	{
		if (*string == splitter)
			i = 0;
		else if (i == 0)
		{
			i = 1;
			words++;
		}
		string++;
	}
	return (words);
}

static int	length_of_word(char const *s2, char c, int i)
{
	int	lenght;

	lenght = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		lenght++;
		i++;
	}
	return (lenght);
}

static char	**lib_matrix(char const **matrix, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)matrix[j]);
	}
	free(matrix);
	return (NULL);
}

static char	**get_splitted_sentence(char const *string, char **matrix,
		char splitter, int number_of_words)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (string[i] != '\0' && j < number_of_words)
	{
		k = 0;
		while (string[i] == splitter)
			i++;
		matrix[j] = (char *)malloc(sizeof(char)
				* length_of_word(string, splitter, i) + 1);
		if (matrix[j] == NULL)
			return (lib_matrix((char const **)matrix, j));
		while (string[i] != '\0' && string[i] != splitter)
			matrix[j][k++] = string[i++];
		matrix[j][k] = '\0';
		j++;
	}
	matrix[j] = 0;
	return (matrix);
}

char	**ft_split(char const *string, char splitter)
{
	char	**matrix;
	int		number_of_words;

	if (string == NULL)
		return (NULL);
	number_of_words = word_counter(string, splitter);
	matrix = (char **)malloc(sizeof(char *) * (number_of_words + 1));
	if (matrix == NULL)
		return (NULL);
	return (get_splitted_sentence(string, matrix, splitter, number_of_words));
}
