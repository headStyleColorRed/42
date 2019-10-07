/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:59:59 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/07 17:56:52 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char a[] = "Hola";
	char b[5];
	char *c = a;
	char *d = b;
	int i = 0;
	unsigned int e = 5;

	ft_strncpy(d, c, e);

	while(b[i] != '\0')
	{
		printf("%c", b[i]);
	i++;	
	}

	return (0);

}
