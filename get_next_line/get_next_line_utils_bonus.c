/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 13:22:17 by rlabrado          #+#    #+#             */
/*   Updated: 2019/12/14 13:22:33 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return ((char*)s);
}

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*output;

	i = 0;
	if ((output = (char*)malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
	while (i < size + 1)
	{
		output[i] = '\0';
		i++;
	}
	return (output);
}

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
