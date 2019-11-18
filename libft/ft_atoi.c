/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:06:51 by rlabrado          #+#    #+#             */
/*   Updated: 2019/11/12 12:07:47 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			is_neg;
	long int	val;

	is_neg = 0;
	val = 0;
	while ((*str == '\t') || (*str == '\v')
			|| (*str == '\n') || (*str == '\r')
			|| (*str == '\f') || (*str == ' '))
		str++;
	if (*str == '-')
	{
		is_neg = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		val = (val * 10) + (*str - 48) % 10;
		str++;
	}
	return (val = is_neg ? val * -1 : val);
}
