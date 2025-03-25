#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else if (s1[i])
			return (0);
		i++;
		n--;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 4)
	{
		i = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
		j = strncmp(argv[1], argv[2], atoi(argv[3]));
		printf("Mine : %d\nReal : %d\n", i, j);
	}
	return (0);
}
*/
