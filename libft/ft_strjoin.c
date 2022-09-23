/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:48:29 by rlabrado          #+#    #+#             */
/*   Updated: 2019/11/12 12:49:20 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	if (str1 == NULL || str2 == NULL)
		return (NULL);
	dest = (char *)malloc(sizeof(*dest)
			* (ft_strlen(str1)+ ft_strlen(str2) + 1));
	if (dest == NULL)
		return (NULL);
	while (*str1 != '\0')
		dest[i++] = *str1++;
	while (*str2 != '\0')
		dest[i++] = *str2++;
	dest[i] = '\0';
	return (dest);
}
