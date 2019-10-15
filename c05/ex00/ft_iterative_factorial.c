/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:49:13 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/10 11:49:31 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
    if (nb <= 0)
        return (0);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
