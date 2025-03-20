#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
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
