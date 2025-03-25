#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 2)
	{
		i = ft_isascii(*argv[1]);
		j = isascii(*argv[1]);
		printf("Mine : %d\nReal : %d\n", i, j);
	}
	return (0);
}
*/
