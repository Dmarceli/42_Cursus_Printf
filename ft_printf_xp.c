/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:08:30 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/08 14:41:33 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_xp(unsigned int c)
{
	int	counter;

	counter = 0;
	counter += ft_putnbr_counter(c ,"0123456789abcdef");
	return (counter);
}
// int main()
// {
// 	unsigned int c = 12781632;
// 	printf("%x\n" , c);
// 	printf("%d\n" , ft_printf_xp(c));
// 	ft_printf_xp(c);
// 	return (0);
// }