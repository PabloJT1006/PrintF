/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:24:43 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/14 16:56:03 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIBFPRINTFT_H
# include <unistd.h>
# include <stdarg.h>
# define LIBFTPRINTF_H

int	ft_printchar(char c);
int	ft_printstr(char *s);
int ft_printnbr(int n);
int	ft_printPtr(unsigned long n);
int ft_printUnbr(unsigned int n);
int	ft_printxX(unsigned int n, char const str);

#endif