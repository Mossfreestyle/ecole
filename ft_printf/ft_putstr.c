#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (str[i])
	{
		len += write(1, &str[i], 1);
		i++;
	}
	return (len);
}
