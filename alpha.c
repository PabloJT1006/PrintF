/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:16:08 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/07 17:48:44 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "libft/libft.h"

void	ft_putchar(char c)
{
	write(1,&c,sizeof(char));
}

int	ft_printstr(char *s)
{
    write(1,s,ft_strlen(s));
	return (ft_strlen(s));
}

