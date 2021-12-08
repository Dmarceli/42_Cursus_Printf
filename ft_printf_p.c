/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielsequeira <danielsequeira@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:18:56 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/06 19:33:39 by danielseque      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// unsigned int	ft_strlen(char const *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

int	ft_putnbr_counter(long long int nbr, const char *base)
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
	counter += ft_putnbr_counter(c ,"0123456789abcedf");
	return (counter);
}
// int main()
// {
// 	unsigned long int c = 12781632;
// 	char *oi = "ola";
// 	printf("%p\n" , oi);
// 	printf("%d\n" , ft_printf_p(oi));
// 	ft_printf_p(oi);
// 	return (0);
// }