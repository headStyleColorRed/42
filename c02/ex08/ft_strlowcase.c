/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:14:42 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/08 14:21:56 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkeadora_de_caracteres(char letter)
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

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (checkeadora_de_caracteres(str[i]) == 2)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
