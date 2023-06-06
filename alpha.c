/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:16:08 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/06 19:12:51 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1,&c,sizeof(char));
}

void	ft_putstr(char *s)
{
    write(1,s,strlen(s));   
}

static int	nlength(int n)
{
	int	cont;

	cont = 0;
	if (n <= 0)
	{
		cont++;
	}
	while (n != 0)
	{
		n /= 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	ln;

	ln = (long)n;
	len = nlength(ln);
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
