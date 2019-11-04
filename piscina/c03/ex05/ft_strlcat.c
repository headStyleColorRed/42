/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:34:05 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/10 17:57:33 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int occupancy;

	occupancy = 0;
	j = 0;
	k = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0')
		k++;
	occupancy = i + k;
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (occupancy);
}
