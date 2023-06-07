/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:33:58 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/07 18:36:52 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int ft_printnbr(int n)
{
	char	*num;
	int		i;
	if (n == 0)
		i++;
	num = ft_itoa(n);
	i = ft_printstr(num);
	free(num);
	return (i);
}