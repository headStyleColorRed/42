/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 11:06:36 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/06 20:09:54 by migufern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int wild_card);

void	whileadora(char a, char b, char c, int one)
{
	int i;

	i = 0;
	while (i < one)
	{
		if (i == 0)
			ft_putchar(a);
		else if (i == one - 1)
			ft_putchar(c);
		else
			ft_putchar(b);
		i++;
	}
}

void	border_line_writer(int one)
{
	char a;
	char b;
	char c;
	char new_line;

	a = 'A';
	b = 'B';
	c = 'C';
	new_line = '\n';
	whileadora(a, b, c, one);
	ft_putchar(new_line);
}

void	middle_line_writer(int one)
{
	char	b;
	char	space;
	char	new_line;
	int		i;

	b = 'B';
	space = ' ';
	i = 0;
	while (i < one)
	{
		if (i == 0 || i == one - 1)
			ft_putchar(b);
		else
			ft_putchar(space);
		i++;
	}
	new_line = '\n';
	ft_putchar(new_line);
}

void	rush(int one, int two)
{
	int i;

	i = 0;
	while (i < two)
	{
		if (i == 0 || i == two - 1)
			border_line_writer(one);
		else
			middle_line_writer(one);
		i++;
	}
}
