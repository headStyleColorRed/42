/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 11:49:26 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/05 20:50:05 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	char coma;
	char space;

	coma = ',';
	space = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &coma, 1);
	write(1, &space, 1);
}

void	ft_putchar_final(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	seleccionador(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		ft_putchar_final(a, b, c);
	}
	else
	{
		ft_putchar(a, b, c);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				seleccionador(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
