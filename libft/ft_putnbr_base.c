/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:18:51 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/02 17:51:36 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(long long int nbr, const char *base)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr >= ft_strlen(base))
		ft_putnbr_base (nbr / ft_strlen(base), base);
	write(1, &base[nbr % ft_strlen(base)], 1);
}
