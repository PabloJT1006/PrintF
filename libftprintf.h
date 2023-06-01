/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:24:43 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/01 19:31:48 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIBFPRINTFT_H
# include <unistd.h>
# define LIBFTPRINTF_H

void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar(char c);
void	ft_putstr(char *s); 

#endif