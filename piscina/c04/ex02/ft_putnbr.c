/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:59:54 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/15 14:02:23 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(char num)
{
	write(1, &num, 1);
}

void	ft_putnbr(int nb)
{
	long int a;

	a = nb;
	if (a < 0)
	{
		a *= -1;
		printer('-');
	}
	if ((a / 10) > 0)
		ft_putnbr(a / 10);
	printer(a % 10 + 48);
}
