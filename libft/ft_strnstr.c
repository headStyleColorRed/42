/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:56:24 by rlabrado          #+#    #+#             */
/*   Updated: 2019/11/12 12:57:24 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int	position;
	unsigned int	i;

	if (!*to_find)
		return ((char*)str);
	position = 0;
	while (str[position] && (size_t)position < len)
	{
		if (str[position] == to_find[0])
		{
			i = 1;
			while (to_find[i] && str[position + i] == to_find[i] &&
					(size_t)(position + i) < len)
				++i;
			if (to_find[i] == '\0')
				return ((char*)&str[position]);
		}
		++position;
	}
	return (0);
}
