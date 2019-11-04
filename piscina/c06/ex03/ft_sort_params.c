/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:44:38 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/17 16:46:02 by rlabrado         ###   ########.fr       */
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

void	arg_swap(char *arg1, char *arg2)
{
	char	temp[100];
	int		i;

	i = 0;
	while (arg1[i] != '\0')
	{
		temp[i] = arg1[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (arg2[i] != '\0')
	{
		arg1[i] = arg2[i];
		i++;
	}
	arg1[i] = '\0';
	i = 0;
	while (temp[i] != '\0')
	{
		arg2[i] = temp[i];
		i++;
	}
	arg2[i] = '\0';
}

void	comparator_2000(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (j < argc - 1)
		{
			k = 0;
			if (argv[j][k] > argv[j + 1][k])
				arg_swap(argv[j], argv[j + 1]);
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	comparator_2000(argc, argv);
	i = 0;
	while (i < argc)
		printer(argv[i++]);
}
