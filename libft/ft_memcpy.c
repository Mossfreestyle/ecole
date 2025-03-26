/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:39:54 by marvin            #+#    #+#             */
/*   Updated: 2025/03/25 23:39:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest1;
	const unsigned char	*src1;

	if (dest == NULL || src == NULL || len == 0)
		return (dest);
	i = 0;
	dest1 = dest;
	src1 = (const unsigned char *)src;
	while (i < len)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	char	*i;
	char	*j;

	if (argc == 4)
	{
		i = ft_memcpy(argv[1], argv[2], atoi(argv[3]));
		j = memcpy(argv[1], argv[2], atoi(argv[3]));
		printf("Le mien : %s\nReal : %s\n", i, j);
	}
	return (0);
}
*/
