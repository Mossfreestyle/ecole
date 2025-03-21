#include "libft.h"

size_t  ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		j = strlen(argv[1]);
		printf("Mine : %d\nReal : %d\n", i, j);
	}
	return (0);
}
*/
