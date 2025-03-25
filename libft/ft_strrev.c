/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:40:59 by marvin            #+#    #+#             */
/*   Updated: 2025/03/25 23:40:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrev(char *str)
{
    int i;
    int size;
    char    tmp;

    i = 0;
    size = 0;
    while (str[size])
        size++;
    size--;
    while (i < size)
    {
        tmp = str[size];
        str[size] = str[i];
        str[i] = tmp;
        i++;
        size--;
    }
    return (str);
}
