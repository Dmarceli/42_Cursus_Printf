#include "ft_printf.h"

int	ft_putchar(char c)
{
    write (1, &c, 1);
    return(1);
}
int	ft_printf_d(int c)
{
	int count;

    count = 0;
    if (c == -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putchar('2');
		c = 147483648;
	}
    else if (c < 0)
	{
		c = c * -1;
		count += ft_putchar('-');
	}
	else if (c >= 10)
	{
		count += ft_printf_d(c / 10);
		count += ft_printf_d(c % 10);
        return(count);
	}
	else
		count += ft_putchar(c + '0');
    return(count);
}