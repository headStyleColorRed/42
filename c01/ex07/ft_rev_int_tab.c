/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 18:36:33 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/06 18:39:03 by rlabrado         ###   ########.fr       */
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

	for(int j = 0; j < size; j++)
	{
		printf("%d", tab[j]);
	}
}

int     main(){
    int a[] = {1, 2, 3, 4, 5, 6 , 7, 8, 9};
    int size = 9;

      ft_rev_int_tab(a, size);
     return (0);
}
