/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:38:13 by rlabrado          #+#    #+#             */
/*   Updated: 2019/10/07 19:34:40 by rlabrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int         ft_str_is_lowercase(char *str);

int        main(void)
{
    char a[] = "fasdfA";
    char *b = a;
    int resultado;
    
    resultado = ft_str_is_lowercase(b);
    printf("resultado: %d", resultado);
    return (0);
}

