/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:16:08 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/20 16:05:00 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printchar(char c)
{
	write(1,&c,sizeof(char));
	return (1);
}

int	ft_printstr(char *s)
{
    write(1,s,ft_strlen(s));
	return (ft_strlen(s));
}

