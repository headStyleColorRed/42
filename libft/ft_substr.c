/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:01:06 by rlabrado          #+#    #+#             */
/*   Updated: 2019/11/12 13:01:44 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	size;
	char	*string;

	count = 0;
	if (!s)
		return (NULL);
	if ((unsigned)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	string = (char *)malloc((len + 1) * sizeof(char));
	if (!string)
		return (NULL);
	while (count < len)
	{
		string[count] = s[start + count];
		count++;
	}
	string[count] = '\0';
	return (string);
}
