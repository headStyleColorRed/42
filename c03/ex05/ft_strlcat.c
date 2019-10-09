/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:34:05 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/09 20:35:13 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int occupied;
	unsigned int i;
	unsigned int j;


	occupied = 0;
	j = 0;
	while (dest[occupied] != '\0')
		occupied++;
	i = occupied;
	while (j < (size - occupied) - 1 && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (i);
}
