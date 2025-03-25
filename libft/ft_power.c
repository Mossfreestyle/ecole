/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:40:01 by marvin            #+#    #+#             */
/*   Updated: 2025/03/25 23:40:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_power(int nb, int power)
{
    int result;

    result = 1;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    while (power)
    {
        result *= nb;
        power--;
    }
    return (result);
}
