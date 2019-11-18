/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:11:51 by rlabrado          #+#    #+#             */
/*   Updated: 2019/11/12 18:13:06 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strncpy(char *dest, const char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int		ft_count_words(char *str, char *splitter)
{
	int i;
	int number_of_words;
	int e_w_l;

	i = 0;
	number_of_words = 0;
	e_w_l = 0;
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], splitter, ft_strlen(splitter)) == 0)
		{
			i += ft_strlen(splitter);
			e_w_l = 0;
		}
		else
		{
			if (e_w_l == 0)
				number_of_words++;
			e_w_l++;
			i++;
		}
	}
	return (number_of_words);
}

static void		ft_split_new_word(int *e_w_l, int *word, int *i)
{
	if (!*e_w_l)
		(*word)++;
	(*e_w_l)++;
	(*i)++;
}

static char		*ft_split_get_word(char *str, char *splitter, int nword)
{
	int		i;
	int		word;
	int		e_w_l;
	char	*strword;

	i = 0;
	word = 0;
	e_w_l = 0;
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], splitter, ft_strlen(splitter)) == 0)
		{
			i += ft_strlen(splitter);
			e_w_l = 0;
		}
		else
			ft_split_new_word(&e_w_l, &word, &i);
		if (((ft_strncmp(&str[i], splitter, ft_strlen(splitter)) == 0) ||
					str[i] == '\0') && word == nword)
		{
			strword = malloc((sizeof(char *) * e_w_l) + 1);
			return (ft_strncpy(strword, &str[i - e_w_l], e_w_l));
		}
	}
	return (NULL);
}

char			**ft_split(const char *string, char *splitter)
{
	char	**matrix;
	char	*str;
	int		number_of_words;
	int		i;

	if (!splitter || !string)
		return (NULL);
	str = (char *)string;
	number_of_words = ft_count_words(str, splitter);
	matrix = malloc((sizeof(char *) * number_of_words) + 1);
	i = 0;
	while (i < number_of_words)
	{
		matrix[i] = ft_strdup(ft_split_get_word(str, splitter, i + 1));
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}
