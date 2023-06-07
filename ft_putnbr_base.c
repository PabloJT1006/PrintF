/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:32:17 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/07 18:58:09 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	str_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '+' || str[i] == '-'))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	if (i <= 1)
	{
		return (0);
	}
	return (1);
}

int	negative(unsigned int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	return (nbr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
int	ft_printxX(unsigned int n, char const str)
{
	int i;

	i = 0;
	if (str == 'x')
		i = ft_putnbr_base(n, "123456789abcdef");
	else if
		i = ft_putnbr_base(n, "123456789ABCDEF");
	return(i);
}
		


//para el formato de la p utilizar esta fincion pero escribiendo el 0x delante, poco mas
int	ft_putnbr_base(unsigned int nbr, char *base)
{
	int	i;
	int	j;
	int	cont;
	
	cont = 0;
	j = 0;
	if (str_valid(base))
		i = ft_strlen(base);
	else
		return ;
	nbr = negative(nbr);
	if (nbr >= i)
	{
		ft_putnbr_base((nbr / i), base);
		ft_putnbr_base((nbr % i), base);
	}
	else
	{
		while (base[j])
		{
			if (j == nbr)
			{
				write(1, &base[j], 1);
				cont = 0;
			}
			j++;
		}
	}
	return (cont);
}

