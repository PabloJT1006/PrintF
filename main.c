/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:59:14 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/08 17:59:45 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf.h"
//meter algo para comprobar el %

//devuleve un int que es la cantidad de caracteres, estos deveran ser contado
//en la misma funcion que los printea(write)

int ft_format(char const format, va_list args)
{
	int	print;

	print = 0;
	if (format == 'c')
		print += ft_printstr(va_arg(args, char));
	else if (format == 's')
		print += ft_printformat(va_arg(args, char *));
	else if (format == 'p')
		print =+ ft_printPtr(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		print += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print += ft_prinUnbr(va_arg(args, int));
	else if (format == 'x')
		print += ft_printxX(va_arg(args, unsigned int),format);
	else if (format == 'X')
		print += ft_printxX(va_arg(args, unsigned int),format);
	else if (format == '%')
		print += write(1,'%',1);
	return(print);
}

int	ft_printf(char const *str, ...)
{
	int 	i;
	int 	j;
	int		print;
	va_list	args;

	i = 0;
	print = 0;
	va_starts(args,str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print += ft_formats(str[i+1],args) ;
			j++;
		}
		else   
		{
			print += ft_printchar(str[i]);
		}
		i++;
	}
	va_ends(args);
	return (print);
}

int main(void)
{

	ft_printF("%d",32);
	return(0);
}