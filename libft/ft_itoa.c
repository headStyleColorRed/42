/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:18:48 by rlabrado          #+#    #+#             */
/*   Updated: 2019/11/18 12:19:53 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long number)
{
	int	len;

	len = 0;
	if (number < 0)
	{
		number = number * -1;
		len++;
	}
	while (number > 0)
	{
		number = number / 10;
		len++;
	}
	return (len);
}

static int	writer(char *str)
{
	str[0] = 48;
	return (1);
}

char	*ft_itoa(int number)
{
	char	*str;
	long	n;
	int		i;

	n = number;
	i = len(n);
	if (i == 0)
		i += 1;
	str = (char *)malloc((sizeof(char) * i) + 1);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0 && writer(str) == 1)
		return (str);
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i--] = 48 + (n % 10);
		n = n / 10;
	}
	return (str);
}
