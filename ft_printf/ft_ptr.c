#include "libftprintf.h"

int	ft_ptr(unsigned long nb)
{
	int	len;

	len = 0;
	if (nb >= 16)
		len += ft_ptr(nb / 16);
	if (nb % 16 <= 9)
		len += ft_putchar((nb % 16) + '0');
	else
		len += ft_putchar((nb % 16) + 87);
	return (len);
}
