/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:51:56 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/16 15:53:18 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	while (i > 1)
		printer(argv[--i]);
}
