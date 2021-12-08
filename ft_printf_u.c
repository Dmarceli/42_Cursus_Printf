#include "ft_printf.h"

int ft_printf_u(unsigned int c)
{
    int count;
    count = 0;

    if (c >= 0 && c < 10)
    {
        c = c + '0';
        count += ft_putchar(c);
    }
    else
    {
        count += ft_printf_u(c / 10);
        c = c % 10 + '0';
        count += ft_putchar(c);
    }
    return (count);
}
// int main()
// {
//     unsigned int nbr = 2147483648;
//     printf("%d\n", ft_printf_u(nbr));
//     ft_printf_u(nbr);
//     return (0);
// }