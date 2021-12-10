/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:55:37 by dmarceli          #+#    #+#             */
/*   Updated: 2021/12/10 16:53:03 by dmarceli         ###   ########.fr       */
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
				counter += write (1, &str[i++], 1);
		}
		else
			counter += write (1, &str[i++], 1);
	}
	va_end(args);
	return (counter);
}

// #include <limits.h>
// int main()
// {
// 	// long int x = ULONG_MAX;
// 	// long int y = -ULONG_MAX;
// 	printf("%d\n", printf(" %% "));
// 	printf("%d\n", ft_printf(" %% "));
// 	printf(" %% \n");
// 	ft_printf(" %% \n");
// 	return (0);
// }