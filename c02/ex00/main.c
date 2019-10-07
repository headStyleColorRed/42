/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:59:59 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/07 17:26:46 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char a[] = "Hola";
	char b[5];
	char *c = a;
	char *d = b;
	int i;

	ft_strcpy(d, c);

	i = 0;
	while(b[i] != '\0')
	{
		printf("%c", b[i]);
	i++;	
	}

	return (0);

}
