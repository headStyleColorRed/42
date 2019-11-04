/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 18:36:33 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/07 09:02:37 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp[size];
	int contador;

	i = size - 1;
	contador = 0;
	while (contador < size)
	{
		temp[contador] = tab[contador];
		contador++;
	}
	contador = 0;
	while (i >= 0)
	{
		tab[contador] = temp[i];
		i--;
		contador++;
	}
}
