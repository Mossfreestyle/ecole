/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:39:56 by marvin            #+#    #+#             */
/*   Updated: 2025/03/25 23:39:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (!dest || !src)
		return (NULL);
	if (dest > src && dest < src + n)
	{
		i = n;
		while (i > 0)
		{
			memcpy(dest + i - 1, src + i - 1, 1);
			i--;
		}
	}
	else
	{
		memcpy(dest, src, n);
	}
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int argc, char **argv)
{
	char	*i;
	char	*j;

	if (argc == 4)
	{
		i = ft_memmove(argv[1], argv[2], atoi(argv[3]));
		j = memmove(argv[1], argv[2], atoi(argv[3]));
		printf("Mine : %s\nReal : %s\n", i, j);
	}
	return (0);
}
*/
