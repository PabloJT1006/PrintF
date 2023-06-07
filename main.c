/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:59:14 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/07 18:57:42 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf.h"
//meter algo para comprobar el %
int	ft_printf(char const *str, ...)
{
	int 	i;
	int 	j;
	int		print;
	va_list	args;

	i = 0;
	j = 0;
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
			print += ft_putchar(str[i]);
		}
		i++;
	}
	va_ends(args);
	return (print);
}
//devuleve un int que es la cantidad de caracteres, estos deveran ser contado
//en la misma funcion que los printea(write)
int ft_str(char const str, va_list args)
{
	int	print;

	print = 0;
	if (str == 'c')
		print += ft_putchar(va_arg(args, char));
	else if (str == 's')
		print += ft_printstr(va_arg(args, char *));
	else if (str[i] == 'p')
		//print =+ ft_printP()
	else if (str == 'd' || str == 'i')
		print += ft_printnbr(va_arg(args, int));
	else if (str == 'u')
		print += ft_prinUnbr(va_arg(args, int));
	else if (str == 'x')
		print += ft_printxX(va_arg(args, unsigned int),str);
	else if (str == 'X')
		print += ft_printxX(va_arg(args, unsigned int),str);
	else if (str == '%')
		print += write(1,'%',1);
	return(i);
}


int main(void)
{
	char *str = print_str"hola%oque%tuste%%");
	
	printf("%s",str);
	return(0);
}