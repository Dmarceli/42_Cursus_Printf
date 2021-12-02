/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_counter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:37:39 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/02 17:52:55 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_counter(long long int nbr, const char *base)
{
	int	counter;

	counter = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
		counter++;
	}
	if (nbr >= ft_strlen(base))
		counter = counter + ft_putnbr_counter (nbr / ft_strlen(base), base);
	counter = counter + write(1, &base[nbr % ft_strlen(base)], 1);
	return (counter);
}
// int main ()
// {
// 	printf("%d\n", ft_putnbr_counter(1000, "0123456789abcedf"));
// 	printf("%d\n", ft_putnbr_counter(1000, "0123456789"));
// 	return (0);
// }