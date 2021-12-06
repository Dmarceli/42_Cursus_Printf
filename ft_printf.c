/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:55:37 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/06 16:24:15 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		counter;

	va_start(args, str);
	counter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (ft_strchr("scXxiupd", str[++i]))
			{
				counter += ((int (*)())ft_printf_distributor
						(str[i]))(va_arg(args, void *));
			}
		}
		write (1, &str[i], 1);
		i++;
		counter++;
	}
	va_end(args);
	return (counter);
}
