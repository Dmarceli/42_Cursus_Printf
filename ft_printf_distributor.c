/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_distributor.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielsequeira <danielsequeira@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:30:33 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/06 19:16:37 by danielseque      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	(*ft_printf_distributor(char c))
{
	if (c == 'c')
		return (&ft_printf_c);
	if (c == 's')
		return (&ft_printf_s);
	if (c == 'X')
		return (&ft_printf_xg);
	if (c == 'x')
		return (&ft_printf_xp);
	if (c == 'i')
		return (&ft_printf_i);
	if (c == 'u')
		return (&ft_printf_u);
	if (c == 'p')
		return (&ft_printf_p);
	if (c == 'd')
		return (&ft_printf_d);
	else
		return (0);
}
