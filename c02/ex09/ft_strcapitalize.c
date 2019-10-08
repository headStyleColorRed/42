/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:22:21 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/08 14:47:59 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		c_d_c(char letter)
{
	if (letter >= 97 && letter <= 122)
		return (1);
	if (letter >= 65 && letter <= 90)
		return (2);
	else if (letter >= 48 && letter <= 57)
		return (3);
	else
		return (0);
}

char	*to_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c_d_c(str[i]) == 2)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	to_lowercase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && (c_d_c(str[i]) == 1))
			str[i] = str[i] - 32;
		else if (c_d_c(str[i]) == 1 && c_d_c(str[i - 1]) < 1)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
