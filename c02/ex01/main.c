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
	char b[7];
	char *src = a;
	char *dest = b;
	int i = 0;
    unsigned int n = 7;

	ft_strncpy(dest, src, n);

	while(dest[i] != '\0')
	{
		printf("%c", dest[i]);
	i++;	
	}

	return (0);

}
