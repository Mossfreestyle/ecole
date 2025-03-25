/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:40:51 by marvin            #+#    #+#             */
/*   Updated: 2025/03/25 23:40:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t  i;

    i = 0;
    while ((i < len) && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    while (i < len)
    {
        dst[i] = '\0';
        i++;
    }
    return (dst);
}