/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:53:04 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/07 10:54:25 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int a = 9;
	int b = 3;

	int x;
	int z;
	int *c = &x;
	int *d = &z;

	ft_div_mod(a, b, c, d);
	printf("La solucióne s %d, y el resto %d", x, z);
}
