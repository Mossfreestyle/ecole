#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = b;
	while (i < len)
	{
		s2[i] = c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	char	*i;
	char	*j;

	if (argc == 4)
	{
		i = ft_memset(argv[1], *argv[2], atoi(argv[3]));
		j = memset(argv[1], *argv[2], atoi(argv[3]));
		printf("Mine : %s\nReal : %s\n", i, j);
	}
	return (0);
}
*/
