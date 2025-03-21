#include "libft.h"

void	*ft_calloc(size_t nb, size_t len)
{
	void	*tab;

	if (len != 0 && nb > 4294967295 / len)
		return (NULL);
	tab = (void *)malloc(len * nb);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, len * nb);
	return (tab);
}

/*
#include <stdio.h>
int	main(void)
{
	int	*tab;
	tab = ft_calloc(0, 0);
	free(tab);
}
*/
