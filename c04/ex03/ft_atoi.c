/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:51:24 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/15 14:32:23 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		numerizer(char *number_array, int array_length)
{
	int i;
	int multiplier;
	int result;

	i = 0;
	result = 1;
	multiplier = 1;
	while (array_length >= 0)
	{
		result += (number_array[array_length] - 48) * multiplier;
		multiplier *= 10;
		array_length--;
	}
	return (result - 1);
}

int		c_d_c(char letter)
{
	if (letter == 45)
		return (4);
	if (letter == 43)
		return (5);
	if (letter >= 97 && letter <= 122)
		return (1);
	if (letter >= 65 && letter <= 90)
		return (2);
	else if (letter >= 48 && letter <= 57)
		return (3);
	else
		return (0);
}

int		homemade_isspace(char letter)
{
	if (letter == ' ' || letter == '\t' || letter == '\n')
		return (1);
	else if (letter == '\v' || letter == '\f' || letter == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		j;
	char	number_array[10];
	long int    a;
	int		positive_or_negative;

	j = 0;
	i = 0;
	positive_or_negative = 0;
	while (str[i] != '\0' && homemade_isspace(str[i]) == 1)
		i++;
	while (str[i] != '\0' && (c_d_c(str[i]) == 4 || c_d_c(str[i]) == 5))
	{
		if (c_d_c(str[i]) == 4)
		{
			positive_or_negative++;
		}
		i++;
	}
	while (str[i] != '\0' && c_d_c(str[i]) == 3)
		number_array[j++] = str[i++];
	a = numerizer(number_array, j - 1);
	if (positive_or_negative % 2 != 0)
		a *= -1;
	return (a);
}
