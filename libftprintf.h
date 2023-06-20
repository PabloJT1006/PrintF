/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:24:43 by pjimenez          #+#    #+#             */
/*   Updated: 2023/06/20 17:09:58 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printchar(char c);
int		ft_printstr(char *s);
int 	ft_printnbr(int n);
int		ft_printPtr(unsigned long n);
int 	ft_printUnbr(unsigned int n);
int		ft_printxX(unsigned int n, char const str);
size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);
int		ft_printf(char const *str, ...);

#endif