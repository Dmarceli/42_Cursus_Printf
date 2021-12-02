/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:12:50 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/02 19:35:31 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(char *str, ...);
void	*ft_printf_distributor(char c);
int		ft_printf_s(char *str);
int		ft_printf_c(char c);
int		ft_printf_xg(unsigned int c);
int		ft_printf_xp(unsigned int c);
int		ft_printf_i(int c);
int		ft_printf_u(unsigned int c);
int		ft_printf_p(unsigned long int c);
int		ft_printf_d(int c);

#endif