#include "libftprintf.h"

int	ft_putnbr(int nb)
{
	int	len;
	long long int	n;

	len = 0;
	n = nb;
	if (n < 0)
	{
		len += ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		len += ft_putchar(n + '0');;
	}
	else
	{
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
	}
	return (len);
}
