/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:59:14 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/06 19:21:39 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf.h"
#include <stdio.h>
//meter algo para comprobar el %
char	*print_format(char const *str)
{
	int i;
	int j;
	char *s_formats;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			s_formats[j] = str[i+1];
			j++;
		}
		else if (str[i] == '%' && str[i+1] == '%')
		{
			s_formats[j] = str[i+1];
			j++;
		}
		i++;
	}
	return (s_formats);
}
//añadir la palabra desde el indice i-1
int ft_printf(char const *str, ...)
{
	char	*formats;
	int		i;

	i = 0;
	formats = print_format(str);
	while (formats[i])
	{
		if (formats[i] == 'c')
		{
			/* code */
		}
		else if (formats[i] == 's')
		{
			/* code */
		}
		else if (formats[i] == 'p')
		{
			/* code */
		}
		else if (formats[i] == 'd' || formats[i] == 'i')
		{
			/* code */
		}
		else if (formats[i] == 'u')
		{
			/* code */
		}
		else if (formats[i] == 'x')
		{
			/* code */
		}
		else if (formats[i] == 'X')
		{
			/* code */
		}
		else if (formats[i] == '%')
		{
			/* code */
		}
		
	}
}

int main(void)
{
	char *str = print_format("hola%oque%tuste%%");
	
	printf("%s",str);
	return(0);
}