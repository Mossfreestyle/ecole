#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_hexa(unsigned int nb, char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putchar(char c);
int	ft_ptr(unsigned long nb);
int	ft_printu(unsigned int nb);
int	ft_format(va_list args, char c);
int	ft_isformat(char c);
int	ft_printf(const char *format, ...);

#endif
