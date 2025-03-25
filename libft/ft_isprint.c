#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
		i = ft_isprint(atoi(argv[1]));
		j = isprint(atoi(argv[1]));
		printf("Mine : %d\nReal : %d\n", i, j);
	}
	return (0);
}
*/
