/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:53:04 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/07 11:20:16 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main()
{
	int a[] = {1, 2, 3, 4, 5};
	int b = 5;
	int *c = a;

	ft_rev_int_tab(c, b);
	for(int z = 0; z < b; z++)
	{
		printf("%d, ", a[z]);
	}
}
