/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_counter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:42:55 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/10 17:24:15 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_counter(long long int nbr, const char *base)
{
	int	counter;

	counter = 0;
	if (nbr >= ft_strlen(base))
		counter = counter + ft_putnbr_counter (nbr / ft_strlen(base), base);
	counter = counter + write(1, &base[nbr % ft_strlen(base)], 1);
	return (counter);
}
