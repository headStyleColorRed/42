/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:10:02 by rlabrado          #+#    #+#             */
/*   Updated: 2019/11/12 15:28:05 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	i;
	void	*result;

	result = malloc(size * nitems);
	if (result == 0)
		return (0);
	i = 0;
	ft_bzero(result, nitems * size);
	return (result);
}
