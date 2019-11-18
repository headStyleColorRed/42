/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:39:31 by rlabrado          #+#    #+#             */
/*   Updated: 2019/11/12 12:40:06 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char	*define;
	size_t	i;

	if (len)
	{
		i = 0;
		define = str;
		while (i < len)
			define[i++] = c;
	}
	return (str);
}
