/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielsequeira <danielsequeira@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:55:37 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/07 16:07:57 by danielseque      ###   ########.fr       */
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
				i++;
			}
			else
				break ;
		}
		else
			write (1, &str[i++], 1);
	}
	va_end(args);
	return (counter);
}

// int main()
// {
// 	char x = '0';
// 	printf("$%d$\n", printf("%c", x));
// 	printf("$%d$\n", ft_printf("%c", x));
// 	printf("#%c#\n", x);
// 	ft_printf("#%c#\n", x);
// 	return (0);
// }