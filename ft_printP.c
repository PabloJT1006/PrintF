/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printP.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:18:08 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/20 14:33:57 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_hexaPtr(unsigned long n,	char * base)
{
	unsigned int		j;
	unsigned int		i;
	int		cont;

	i = ft_strlen(base);
	j = 0;
	cont = 0;
	if (n >= i)
	{
		ft_hexaPtr((n / i), base);
		ft_hexaPtr((n % i), base);
	}
	else
	{
		while (base[j])
		{
			if (j == n)
			{
				write(1, &base[j], 1);
				cont++;
			}
			j++;
		}
	}
	return (cont);
}

int	ft_printPtr(unsigned long n)
{
	int i;
	
	write(1, "0x" ,2);
	i = ft_hexaPtr(n,"0123456789abcdef");
	return (i);
}
