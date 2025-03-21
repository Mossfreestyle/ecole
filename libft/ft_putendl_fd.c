#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_putendl_fd(argv[1], atoi(argv[2]));
	}
	return (0);
}
*/
