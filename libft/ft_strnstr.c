#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0' && (i + j) < len)
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main(int argc, char **argv)
{
    if (argc == 4)
	{
		const char *big = argv[1];
    	const char *little = argv[2];
    	size_t len = atoi(argv[3]);

    	char *result = ft_strnstr(big, little, len);

    	if (result)
        	printf("Sous-chaîne trouvée : \"%s\"\n", result);
		else
        	printf("Sous-chaîne non trouvée\n");
	}
    return (0);
}*/
