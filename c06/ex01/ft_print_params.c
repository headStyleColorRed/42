/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:43:53 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/16 15:46:14 by rlabrado         ###   ########.fr       */
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
	i = 1;
    if (argv[3] == 0)
    {
        printer("Error");
        return (0);
    }
	while (i < argc)
		printer(argv[i++]);
	return (0);
}
