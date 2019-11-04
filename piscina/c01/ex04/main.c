/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:53:04 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/07 10:59:13 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main()
{
	int a = 9;
	int b = 3;
	int *c = &a;
	int *d = &b;

	ft_ultimate_div_mod(c, d);
	printf("el resultado es: %d, y el resto:  %d", a, b);
}
