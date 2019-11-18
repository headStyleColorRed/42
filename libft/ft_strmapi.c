/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:54:05 by rlabrado          #+#    #+#             */
/*   Updated: 2019/11/12 12:54:28 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *string, char (*my_function)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	int				j;

	if (string && my_function)
	{
		i = 0;
		j = ft_strlen((char *)string);
		str = (char *)malloc((sizeof(char) * j) + 1);
		if (!str)
			return (NULL);
		while (string[i] != 0)
		{
			str[i] = my_function(i, string[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
