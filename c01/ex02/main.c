/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:53:04 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/07 10:08:29 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main()
{
	int a = 5;
	int b = 3;
	int *c = &a;
	int *d = &b;

	ft_swap(c, d);
	printf("a era 5 y ahora %d, y b era 3 y ahora  %d", a, b);
}
