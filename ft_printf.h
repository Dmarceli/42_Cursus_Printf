/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielsequeira <danielsequeira@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:12:50 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/06 19:40:04 by danielseque      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	*ft_printf_distributor(char c);
int		ft_printf_s(char *str);
int		ft_printf_c(char c);
int		ft_printf_xg(unsigned int c);
int		ft_printf_xp(unsigned int c);
int		ft_printf_i(int c);
int		ft_printf_u(unsigned int c);
int		ft_printf_p(unsigned long int c);
int		ft_printf_d(int c);
int	    ft_putchar(char c);

#endif