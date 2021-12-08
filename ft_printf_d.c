/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielsequeira <danielsequeira@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:17:34 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/06 19:35:56 by danielseque      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int c)
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
		count += ft_printf_d(c / 10);
		count += ft_printf_d(c % 10);
		return (count);
	}
	else
		count += ft_putchar(c + '0');
	return (count);
}

// int main()
// {
// 	int c = -2147483648;
// 	printf("%d\n", ft_printf_d(c));
// 	ft_printf_d(c);
// 	return (0);
// }