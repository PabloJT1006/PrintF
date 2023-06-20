/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:33:58 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/20 17:32:52 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printnbr(int n)
{
	char	*num;
	int		i;
	
	i = 0;
	if (n == 0)
		i++;
	num = ft_itoa(n);
	i = ft_printstr(num);
	free(num);
	return (i);
}