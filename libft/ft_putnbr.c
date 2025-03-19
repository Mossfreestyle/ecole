#include "libft.h"

void    ft_putnbr(int n)
{
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        ft_putchar('-');
        n *= -1;
    }
    if (n >= 0 && n <= 9)
        ft_putchar(n + '0');
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}