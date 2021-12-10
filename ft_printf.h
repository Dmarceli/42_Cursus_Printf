/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:18:41 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/10 17:23:34 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char *str, ...);
void			*ft_printf_distributor(char c);
int				ft_printf_s(char *str);
int				ft_printf_c(char c);
int				ft_printf_xg(unsigned int c);
int				ft_printf_xp(unsigned int c);
int				ft_printf_i(int c);
int				ft_printf_u(unsigned int c);
int				ft_printf_p(unsigned long int c);
int				ft_printf_d(int c);
int				ft_putchar(char c);
char			*ft_strchr(const char *s, int c);
unsigned int	ft_strlen(char const *str);
int				ft_putnbr_counter(long long int nbr, const char *base);

#endif