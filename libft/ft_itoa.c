#include "libft.h"

static int	ft_countlen(long int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_pos(char *str, long int n)
{
	int	len;
	int	temp_len;

	len = ft_countlen(n);
	temp_len = len;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (len > 0)
	{
		str[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	str[temp_len] = '\0';
	return (str);
}

static char	*ft_neg(char *str, long int n)
{
	int	len;
	int	temp_len;

	n *= -1;
	len = ft_countlen(n);
	temp_len = len;
	str = malloc(sizeof(char) * (len + 2));
	if (str == NULL)
		return (NULL);
	str[0] = '-';
	while (len > 0)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	str[temp_len + 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	long long int	nb;

	nb = n;
	str = NULL;
	if (nb == 0)
	{
		str = malloc(sizeof(char) * 2);
		if (str == NULL)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
	}
	if (n < 0)
	{
		str = ft_neg(str, nb);
	}
	else
	{
		str = ft_pos(str, nb);
	}
	return (str);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = ft_itoa(atoi(argv[1]));
		printf("%s\n", str);
		free(str);
	}
	return (0);
}
*/
