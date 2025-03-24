#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	len;

	va_start(args, format);
	i = 0;
	len = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && ft_isformat(format[i + 1]) == 1)
		{
			len += ft_format(args, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
		if (len == -1)
			return (len);
	}
	va_end(args);
	return (len);
}
