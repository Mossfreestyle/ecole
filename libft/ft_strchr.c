/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:40:24 by marvin            #+#    #+#             */
/*   Updated: 2025/03/25 23:40:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	if (c == '\0')
	{
		i = ft_strlen(s);
		return ((char *)&s2[i]);
	}
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s2[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stddef.h>
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	char	*i;
	char	*j;

	if (argc == 3)
	{
		i = ft_strchr(argv[1], *argv[2][0]);
		j = strchr(argv[1], *argv[2][0]);
		printf("Moi : %s\nOriginal : %s\n", i, j);
	}
	return (0);
}
*/
