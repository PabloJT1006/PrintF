/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:32:17 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/08 17:58:51 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h"

static int	str_valid(char *str)
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

static int	negative(unsigned int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	return (nbr);
}

//para el formato de la p utilizar esta fincion pero escribiendo el 0x delante, poco mas
static	int	ft_putnbr_hexa(unsigned int nbr, char *base)
{
	size_t	i;
	int		j;
	int		cont;
	
	cont = 0;
	j = 0;
	if (str_valid(base))
		i = ft_strlen(base);
	else
		return(0) ;
	if (nbr >= i)
	{
		ft_putnbr_hexa((nbr / i), base);
		ft_putnbr_hexa((nbr % i), base);
	}
	else
	{
		while (base[j])
		{
			if (j == nbr)
			{
				write(1, &base[j], 1);
				cont++;
			}
			j++;
		}
	}
	return (cont);
}
int	ft_printxX(unsigned int n, char const str)
{
	int i;

	i = 0;
	if (str == 'x')
		i = ft_putnbr_hexa(n, "0123456789abcdef");
	else if (str == 'X')
		i = ft_putnbr_hexa(n, "0123456789ABCDEF");
	return(i);
}
