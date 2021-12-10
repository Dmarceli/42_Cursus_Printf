/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:18:56 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/10 19:08:55 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_counter_u(unsigned long int nbr, const char *base)
{
	int	counter;

	counter = 0;
	if (nbr >= ft_strlen(base))
		counter = counter + ft_putnbr_counter (nbr / ft_strlen(base), base);
	counter = counter + write(1, &base[nbr % ft_strlen(base)], 1);
	return (counter);
}

int	ft_printf_p(unsigned long int c)
{
	int	counter;

	counter = 0;
	counter += write(1, "0x", 2);
	counter += ft_putnbr_counter_u(c, "0123456789abcdef");
	return (counter);
}
// int main()
// {
// 	unsigned long int c = -2147483648;
// 	//char *oi = "ola";
// 	printf("%p\n" , c);
// 	printf("%d\n" , ft_printf_p(c));
// 	ft_printf_p(c);
// 	return (0);
// }