/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:08:30 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/06 15:12:48 by dmarceli         ###   ########.fr       */
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

// int	ft_putnbr_counter(long long int nbr, const char *base)
// {
// 	int	counter;

// 	counter = 0;
// 	if (nbr >= ft_strlen(base))
// 		counter = counter + ft_putnbr_counter (nbr / ft_strlen(base), base);
// 	counter = counter + write(1, &base[nbr % ft_strlen(base)], 1);
// 	return (counter);
// }

int	ft_printf_xg(unsigned int c)
{
	int	counter;

	counter = 0;
	counter += ft_putnbr_counter(c ,"0123456789ABCDEF");
	return (counter);
}
// int main()
// {
// 	unsigned int c = 12781632;
// 	printf("%X\n" , c);
// 	printf("%d\n" , ft_printf_xg(c));
// 	ft_printf_xg(c);
// 	return (0);
// }