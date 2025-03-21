#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char str[] = "hello world!";
	ft_striteri(str, to_uppercase);
	printf("%s\n", str);
	return (0);
}*/
