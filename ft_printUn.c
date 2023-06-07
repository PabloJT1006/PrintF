/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printUn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:29:11 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/07 18:42:36 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
// #include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
// int	ft_putnbr(int n,int i)
// {
// 	if (n == -2147483648)
// 	{
// 		ft_putchar('-');
// 		ft_putchar('2');
// 		n = 147483648;
// 		i++;
// 	}
// 	if (n < 0)
// 	{
// 		ft_putchar('-');
// 		n *= -1;
// 	}
// 	if (n >= 10)
// 	{
// 		ft_putnbr(n / 10);
// 		ft_putnbr(n % 10);
// 	}
// 	else
// 		ft_putchar(n + '0');
// 	return (i++);
// }

// void	ft_Uputnbr(unsigned int n)
// {
// 	if (n < 0)
// 	{
// 		ft_putchar('-');
// 		n *= -1;
// 	}
// 	if (n >= 10)
// 	{
// 		ft_Uputnbr(n / 10);
// 		ft_Uputnbr(n % 10);
// 	}
// 	else
// 	{
// 		ft_putchar(n + '0');
// 	}
// }


size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
static int	nUlength(unsigned int n)
{
	int	cont;

	cont = 0;
	while (n != 0)
	{
		n /= 10;
		cont++;
	}
	return (cont);
}

char	*ft_Uitoa(unsigned int n)
{
	char	*str;
	size_t	len;
	long ln;

	ln = (long)n;
	len = nUlength(ln);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (ln == 0)
		str[0] = '0';
	if (ln < 0)
	{
		str[0] = '-';
		ln *= -1;
	}
	while (ln > 0)
	{
		str[len] = (ln % 10) + '0';
		ln /= 10;
		len--;
	}
	return (str);
}

int	ft_printstr(char *s)
{
    write(1,s,ft_strlen(s));
	return (ft_strlen(s));
}
int ft_printUnbr(unsigned int n)
{
	char 	*num;
	unsigned int	i;
	if (n < 0)
		n *= -1;
	else if (n == 0)
		i++;
	num = ft_Uitoa((unsigned int)n);
	i = ft_printstr(num);
	free(num);
	return (i);
}

int main (void)
{
	int x = ft_printUn(0);
	printf("%d",x);
	
	return (0);
	
}
