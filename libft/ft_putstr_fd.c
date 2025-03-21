#include "libft.h"

void    ft_putstr_fd(char const *s, int fd)
{
    size_t  i;

    if (!s)
        return;
    i = 0;
    while (s[i])
        i++;
    write(fd, s, i);
}

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_putstr_fd(argv[1], atoi(argv[2]));
	}
	return (0);
}
*/
