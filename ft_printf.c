/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:55:37 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/08 16:02:21 by dmarceli         ###   ########.fr       */
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
			counter += write (1, &str[i++], 1);
	}
	va_end(args);
	return (counter);
}

// int main()
// {
// 	long int x = 2147483647;
// 	long int y = -2147483648;
// 	// printf("$%d$\n", printf("cd%s", x));
// 	// printf("$%d$\n", ft_printf("cd%s", x));
// 	printf("#%p %p#\n", x , y);
// 	ft_printf("#%p %p#\n", x , y);
// 	return (0);
// }