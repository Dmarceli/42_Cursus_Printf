/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:10:21 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/02 19:34:02 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *str)
{
	int	i;
	int	count;

	i = 0;
	if (!str)
		count += write (1, "(null)", 6);
	else
		while (str[i])
			count += write (1, &str[i++], 1);
	return (count);
}

// int main()
// {
// 	char *str = NULL;
// 	printf("%d\n",ft_printf_s(str));
// 	ft_printf_s(str);
// 	return 0;
// }