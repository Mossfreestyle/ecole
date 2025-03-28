/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:40:39 by marvin            #+#    #+#             */
/*   Updated: 2025/03/25 23:40:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (size + len_s);
	while (src[i] != '\0' && i < (size - len_d - 1))
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}

/*
#include <bsd/string.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 4)
	{
		i = ft_strlcat(argv[1], argv[2], atoi(argv[3]));
		j = strlcat(argv[1], argv[2], atoi(argv[3]));
		printf("Moi : %d\nOriginal : %d\n", i, j);
	}
	return (0);
}
*/
