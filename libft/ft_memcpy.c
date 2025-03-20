#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;
	unsigned char	*dest1;
	unsigned char	*src1;

	i = 0;
	dest1 = dest;
	src1 = (unsigned char *)src;
	while (i < len)
	{
		dest1[i] = src1[i];
		i++;
	}
	resturn (dest1);
}
