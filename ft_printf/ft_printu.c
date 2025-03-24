#include "libftprintf.h"

int	ft_printu(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
		len += ft_printu(nb / 10);
	len += ft_putchar((nb % 10) + '0');
	return (len);
}
