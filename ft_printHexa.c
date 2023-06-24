/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printHexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:32:17 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/24 20:49:29 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	str_valid(char *str)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if ((str[i] == '+' || str[i] == '-'))
// 			return (0);
// 		j = i + 1;
// 		while (str[j])
// 		{
// 			if (str[j] == str[i])
// 			{
// 				return (0);
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	if (i <= 1)
// 	{
// 		return (0);
// 	}
// 	return (1);
// }


//para el formato de la p utilizar esta fincion pero escribiendo el 0x delante, poco mas
static	int	ft_putnbr_hexa(unsigned int nbr, const char *base)
{
	size_t				i;
	unsigned int		j;
	int					cont;
	
	cont = 0;
	j = 0;
	i = ft_strlen(base);

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
				cont++;
				write(1, &base[j], 1);
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
