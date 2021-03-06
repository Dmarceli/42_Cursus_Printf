/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:43:49 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/08 15:35:11 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_i(int c)
{
	int	count;

	count = 0;
	if (c == -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putchar('2');
		c = 147483648;
	}
	if (c < 0)
	{
		c = c * -1;
		count += ft_putchar('-');
	}
	if (c >= 10)
	{
		count += ft_printf_i(c / 10);
		count += ft_printf_i(c % 10);
		return (count);
	}
	else
		count += ft_putchar(c + '0');
	return (count);
}
