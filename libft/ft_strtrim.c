#include "libft.h"

static int	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;
	int	len;
	int	new_len;
	char	*strmalloc;

	i = 0;
	j = 0;
	len = ft_strlen(s1) - 1;
	while (is_set(s1[len], set) == 1)
		len--;
	while (is_set(s1[i], set) == 1)
		i++;
	new_len = len - i + 1;
	strmalloc = ft_substr(s1, i, (new_len + 1));
	while (i <= len && strmalloc != NULL)
	{
		strmalloc[j] = s1[i];
		j++;
		i++;
	}
	if (strmalloc != NULL)
		strmalloc[j] = '\0';
	return (strmalloc);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*i;

	if (argc == 3)
	{
		i = ft_strtrim(argv[1], argv[2]);
		printf("%s\n", i);
	}
	return (0);
}
*/
