/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:57:36 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/15 20:56:38 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = 0;
	if (power <= 0)
		return (0);
	if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
